----------------------------------------------------------------------------------
--[[
	FILE:			DailyOnceRecharge.lua
	ENCODING:		UTF-8, no-bomb
	DESCRIPTION:	每日单笔充值
	AUTHOR:			zhaolu
	CREATED:		2014-09-18
--]]
----------------------------------------------------------------------------------
local Activity_pb = require("Activity_pb");
local HP_pb = require("HP_pb");
local NodeHelper = require("NodeHelper");
local thisPageName = "DailyOnceRecharge"

local opcodes = {
	DAILY_RECHARGE_INFO_C 		= HP_pb.SINGLE_RECHARGE_INFO_C,
	DAILY_RECHARGE_INFO_S		= HP_pb.SINGLE_RECHARGE_INFO_S,
	GET_DAILY_RECHARGE_AWARD_C	= HP_pb.SINGLE_RECHARGE_AWARD_C,
	GET_DAILY_RECHARGE_AWARD_S	= HP_pb.SINGLE_RECHARGE_AWARD_S
};
local option = {
	ccbiFile = "Act_SinglePenRechargePage.ccbi",
	handlerMap = {
		onReturnButton	= "onBack",
		onRecharge		= "onRecharge",
		onHelp			= "onHelp"
	},
	opcode = opcodes
};

--活动基本信息
local thisActivityInfo = {
	id				= 21,
	remainTime 		= 0,
	rewardCfg		= {},
	rewardIds 		= {}
};
thisActivityInfo.timerName = "Activity_" .. thisActivityInfo.id;
thisActivityInfo.itemCfg = ActivityConfig[thisActivityInfo.id]["items"] or {};

----------------- local data -----------------
local DailyOnceRechargeBase = {}


local RechargeItem = {
	ccbiFile = "Act_SinglePenRechargeContent.ccbi",
}

function RechargeItem.onFunction(eventName, container)
	if eventName == "luaRefreshItemView" then
		RechargeItem.onRefreshItemView(container);
	elseif eventName == "onRewardBtn" then
		RechargeItem.onReceiveReward(container);
	elseif eventName:sub(1, 7) == "onFrame" then
		RechargeItem.showItemInfo(container, eventName);
	end		
end

function RechargeItem.onRefreshItemView(container)
	local index = container:getItemDate().mID;
	local itemCfgId = thisActivityInfo.rewardIds[index];
	local rewardItem = thisActivityInfo.itemCfg[itemCfgId];
	if rewardItem == nil then return; end
	
	local cfg = thisActivityInfo.rewardCfg[itemCfgId];
	if cfg == nil then
		cfg = ConfigManager.getRewardById(rewardItem.r);
		thisActivityInfo.rewardCfg[itemCfgId] = cfg;
	end
	local amount = rewardItem.c;
	NodeHelper:fillRewardItem(container, cfg);	
	NodeHelper:setStringForLabel(container, {
		mConsumptionDiamondsReward = common:getLanguageString("@DailyOnceRechargeItem", amount),
		mReceiveNum	= ''	
	});
	local canReceive = false
	for i=1,#thisActivityInfo.canGetRewardIds do
		if itemCfgId == thisActivityInfo.canGetRewardIds[i] then
		    canReceive = true
		end
	end
	NodeHelper:setMenuItemEnabled(container, "mRewardDayBtn", canReceive);
end

function RechargeItem.onReceiveReward(container)
	local index = container:getItemDate().mID;
	local itemCfgId = thisActivityInfo.rewardIds[index];
	local rewardItem = thisActivityInfo.itemCfg[itemCfgId];
	if rewardItem == nil then return; end
	
	local msg = Activity_pb.HPSingleRechargeAwards();
	msg.awardCfgId = tonumber(itemCfgId);
	common:sendPacket(opcodes.GET_DAILY_RECHARGE_AWARD_C, msg);
end

function RechargeItem.showItemInfo(container, eventName)
	local index = container:getItemDate().mID;
	local itemCfgId = thisActivityInfo.rewardIds[index];
	local cfg = thisActivityInfo.rewardCfg[itemCfgId];
	local rewardIndex = tonumber(eventName:sub(8));
	GameUtil:showTip(container:getVarNode('mFrame' .. rewardIndex), cfg[rewardIndex]);
end
-----------------------------------------------
--DailyOnceRechargeBase页面中的事件处理
----------------------------------------------
function DailyOnceRechargeBase:onEnter(container)
	local mScale9Sprite = container:getVarScale9Sprite("mScale9Sprite")
	if mScale9Sprite ~= nil then
		container:autoAdjustResizeScale9Sprite( mScale9Sprite )
	end
	NodeHelper:initScrollView(container, "mContent", 3);
	if container.mScrollView ~=nil then
		container:autoAdjustResizeScrollview(container.mScrollView);
	end	
	self:clearPage(container);
	self:registerPacket(container);
	self:getActivityInfo(container);
end

function DailyOnceRechargeBase:onExecute(container)
	self:onTimer(container);
end

function DailyOnceRechargeBase:onExit(container)
	TimeCalculator:getInstance():removeTimeCalcultor(thisActivityInfo.timerName);
	NodeHelper:deleteScrollView(container);
	self:removePacket(container);
end
----------------------------------------------------------------
function DailyOnceRechargeBase:onTimer(container)
	local timerName = thisActivityInfo.timerName;
	if not TimeCalculator:getInstance():hasKey(timerName) then return; end

	local remainTime = TimeCalculator:getInstance():getTimeLeft(timerName);
	if remainTime + 1 > thisActivityInfo.remainTime then
		return;
	end

	thisActivityInfo.remainTime = math.max(remainTime, 0);
	local timeStr = common:second2DateString(thisActivityInfo.remainTime, false);
	NodeHelper:setStringForLabel(container, {mActivityDaysNum = timeStr});
end

function DailyOnceRechargeBase:clearPage(container)
	NodeHelper:setStringForLabel(container, {
		mActivityDaysNum	= ""
	});
end

function DailyOnceRechargeBase:getActivityInfo(container)
	local msg = Activity_pb.HPSingleRechargeInfo();
	common:sendPacket(opcodes.DAILY_RECHARGE_INFO_C, msg);
end

function DailyOnceRechargeBase:refreshPage(container)
	if thisActivityInfo.remainTime > 0 and not TimeCalculator:getInstance():hasKey(timerName) then
		TimeCalculator:getInstance():createTimeCalcultor(thisActivityInfo.timerName, thisActivityInfo.remainTime);
	end
	self:rebuildAllItem(container)
end
----------------scrollview-------------------------
function DailyOnceRechargeBase:rebuildAllItem(container)
	self:clearAllItem(container);
	self:buildItem(container);
end

function DailyOnceRechargeBase:clearAllItem(container)
	NodeHelper:clearScrollView(container);
end

function DailyOnceRechargeBase:buildItem(container)
	NodeHelper:buildScrollView(container, #thisActivityInfo.rewardIds, RechargeItem.ccbiFile, RechargeItem.onFunction);
end
	
----------------click event------------------------	
function DailyOnceRechargeBase:onClose(container)
	PageManager.popPage(thisPageName);
end	

function DailyOnceRechargeBase:onRecharge(container)
	PageManager.pushPage("RechargePage");
end

function DailyOnceRechargeBase:onBack()
	PageManager.changePage("ActivityPage");
end

function DailyOnceRechargeBase:onHelp( container )
	PageManager.showHelp(GameConfig.HelpKey.HELP_DAILYONCERECHARGE)
end

--回包处理
function DailyOnceRechargeBase:onReceivePacket(container)
	local opcode = container:getRecPacketOpcode();
	local msgBuff = container:getRecPacketBuffer();
    if opcode == opcodes.DAILY_RECHARGE_INFO_S then
		local msg = Activity_pb.HPSingleRechargeInfoRet();
		msg:ParseFromString(msgBuff);
		
		thisActivityInfo.remainTime = msg.surplusTime;
		local rewardIds = common:table_keys(thisActivityInfo.itemCfg);
		table.sort(rewardIds);
		for _, id in ipairs(msg.gotAwardCfgId) do
			rewardIds = common:table_removeFromArray(rewardIds, id);
		end
		thisActivityInfo.rewardIds = rewardIds;
		thisActivityInfo.canGetRewardIds = msg.canGetAwardCfgId
		self:refreshPage(container);
		return;
	end

    if opcode == opcodes.GET_DAILY_RECHARGE_AWARD_S then
		local msg = Activity_pb.HPSingleRechargeAwardsRet();
		msg:ParseFromString(msgBuff);
		
		thisActivityInfo.rewardIds = common:table_removeFromArray(thisActivityInfo.rewardIds, msg.gotAwardCfgId);
		thisActivityInfo.remainTime = msg.surplusTime;
		self:refreshPage(container);
		ActivityInfo:decreaseReward(thisActivityInfo.id);
	end
end

function DailyOnceRechargeBase:registerPacket(container)
	for key, opcode in pairs(opcodes) do
		if string.sub(key, -1) == "S" then
			container:registerPacket(opcode)
		end
	end
end

function DailyOnceRechargeBase:removePacket(container)
	for key, opcode in pairs(opcodes) do
		if string.sub(key, -1) == "S" then
			container:removePacket(opcode)
		end
	end
end
-------------------------------------------------------------------------
local CommonPage = require("CommonPage");
DailyOnceRecharge = CommonPage.newSub(DailyOnceRechargeBase, thisPageName, option);
