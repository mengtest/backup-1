-- Generated By protoc-gen-lua Do not Edit
local protobuf = require "protobuf"
module('Skill_pb')


SKILLINFO = protobuf.Descriptor();
local SKILLINFO_ROLEID_FIELD = protobuf.FieldDescriptor();
local SKILLINFO_ID_FIELD = protobuf.FieldDescriptor();
local SKILLINFO_ITEMID_FIELD = protobuf.FieldDescriptor();
local SKILLINFO_SKILLLEVEL_FIELD = protobuf.FieldDescriptor();
local SKILLINFO_STATUS_FIELD = protobuf.FieldDescriptor();
HPSKILLINFOSYNC = protobuf.Descriptor();
local HPSKILLINFOSYNC_SKILLINFOS_FIELD = protobuf.FieldDescriptor();
HPSKILLCHANGEORDER = protobuf.Descriptor();
local HPSKILLCHANGEORDER_ROLEID_FIELD = protobuf.FieldDescriptor();
local HPSKILLCHANGEORDER_SKILLID_FIELD = protobuf.FieldDescriptor();
local HPSKILLCHANGEORDER_SRCORDER_FIELD = protobuf.FieldDescriptor();
local HPSKILLCHANGEORDER_DSTORDER_FIELD = protobuf.FieldDescriptor();
local HPSKILLCHANGEORDER_SKILLBAGID_FIELD = protobuf.FieldDescriptor();
HPSKILLCHANGEORDERRET = protobuf.Descriptor();
local HPSKILLCHANGEORDERRET_VERSION_FIELD = protobuf.FieldDescriptor();
HPSKILLCARRY = protobuf.Descriptor();
local HPSKILLCARRY_ROLEID_FIELD = protobuf.FieldDescriptor();
local HPSKILLCARRY_SKILLID_FIELD = protobuf.FieldDescriptor();
local HPSKILLCARRY_SKILLBAGID_FIELD = protobuf.FieldDescriptor();
HPSKILLCARRYRET = protobuf.Descriptor();
local HPSKILLCARRYRET_ROLEID_FIELD = protobuf.FieldDescriptor();
HPSKILLINFO = protobuf.Descriptor();
local HPSKILLINFO_ROLEID_FIELD = protobuf.FieldDescriptor();
local HPSKILLINFO_SKILLID1_FIELD = protobuf.FieldDescriptor();
local HPSKILLINFO_SKILLID2_FIELD = protobuf.FieldDescriptor();
local HPSKILLINFO_SKILLID3_FIELD = protobuf.FieldDescriptor();

SKILLINFO_ROLEID_FIELD.name = "roleId"
SKILLINFO_ROLEID_FIELD.full_name = ".SkillInfo.roleId"
SKILLINFO_ROLEID_FIELD.number = 1
SKILLINFO_ROLEID_FIELD.index = 0
SKILLINFO_ROLEID_FIELD.label = 2
SKILLINFO_ROLEID_FIELD.has_default_value = false
SKILLINFO_ROLEID_FIELD.default_value = 0
SKILLINFO_ROLEID_FIELD.type = 5
SKILLINFO_ROLEID_FIELD.cpp_type = 1

SKILLINFO_ID_FIELD.name = "id"
SKILLINFO_ID_FIELD.full_name = ".SkillInfo.id"
SKILLINFO_ID_FIELD.number = 2
SKILLINFO_ID_FIELD.index = 1
SKILLINFO_ID_FIELD.label = 2
SKILLINFO_ID_FIELD.has_default_value = false
SKILLINFO_ID_FIELD.default_value = 0
SKILLINFO_ID_FIELD.type = 5
SKILLINFO_ID_FIELD.cpp_type = 1

SKILLINFO_ITEMID_FIELD.name = "itemId"
SKILLINFO_ITEMID_FIELD.full_name = ".SkillInfo.itemId"
SKILLINFO_ITEMID_FIELD.number = 3
SKILLINFO_ITEMID_FIELD.index = 2
SKILLINFO_ITEMID_FIELD.label = 2
SKILLINFO_ITEMID_FIELD.has_default_value = false
SKILLINFO_ITEMID_FIELD.default_value = 0
SKILLINFO_ITEMID_FIELD.type = 5
SKILLINFO_ITEMID_FIELD.cpp_type = 1

SKILLINFO_SKILLLEVEL_FIELD.name = "skillLevel"
SKILLINFO_SKILLLEVEL_FIELD.full_name = ".SkillInfo.skillLevel"
SKILLINFO_SKILLLEVEL_FIELD.number = 4
SKILLINFO_SKILLLEVEL_FIELD.index = 3
SKILLINFO_SKILLLEVEL_FIELD.label = 2
SKILLINFO_SKILLLEVEL_FIELD.has_default_value = false
SKILLINFO_SKILLLEVEL_FIELD.default_value = 0
SKILLINFO_SKILLLEVEL_FIELD.type = 5
SKILLINFO_SKILLLEVEL_FIELD.cpp_type = 1

SKILLINFO_STATUS_FIELD.name = "status"
SKILLINFO_STATUS_FIELD.full_name = ".SkillInfo.status"
SKILLINFO_STATUS_FIELD.number = 5
SKILLINFO_STATUS_FIELD.index = 4
SKILLINFO_STATUS_FIELD.label = 2
SKILLINFO_STATUS_FIELD.has_default_value = false
SKILLINFO_STATUS_FIELD.default_value = 0
SKILLINFO_STATUS_FIELD.type = 5
SKILLINFO_STATUS_FIELD.cpp_type = 1

SKILLINFO.name = "SkillInfo"
SKILLINFO.full_name = ".SkillInfo"
SKILLINFO.nested_types = {}
SKILLINFO.enum_types = {}
SKILLINFO.fields = {SKILLINFO_ROLEID_FIELD, SKILLINFO_ID_FIELD, SKILLINFO_ITEMID_FIELD, SKILLINFO_SKILLLEVEL_FIELD, SKILLINFO_STATUS_FIELD}
SKILLINFO.is_extendable = false
SKILLINFO.extensions = {}
HPSKILLINFOSYNC_SKILLINFOS_FIELD.name = "skillInfos"
HPSKILLINFOSYNC_SKILLINFOS_FIELD.full_name = ".HPSkillInfoSync.skillInfos"
HPSKILLINFOSYNC_SKILLINFOS_FIELD.number = 1
HPSKILLINFOSYNC_SKILLINFOS_FIELD.index = 0
HPSKILLINFOSYNC_SKILLINFOS_FIELD.label = 3
HPSKILLINFOSYNC_SKILLINFOS_FIELD.has_default_value = false
HPSKILLINFOSYNC_SKILLINFOS_FIELD.default_value = {}
HPSKILLINFOSYNC_SKILLINFOS_FIELD.message_type = SKILLINFO
HPSKILLINFOSYNC_SKILLINFOS_FIELD.type = 11
HPSKILLINFOSYNC_SKILLINFOS_FIELD.cpp_type = 10

HPSKILLINFOSYNC.name = "HPSkillInfoSync"
HPSKILLINFOSYNC.full_name = ".HPSkillInfoSync"
HPSKILLINFOSYNC.nested_types = {}
HPSKILLINFOSYNC.enum_types = {}
HPSKILLINFOSYNC.fields = {HPSKILLINFOSYNC_SKILLINFOS_FIELD}
HPSKILLINFOSYNC.is_extendable = false
HPSKILLINFOSYNC.extensions = {}
HPSKILLCHANGEORDER_ROLEID_FIELD.name = "roleId"
HPSKILLCHANGEORDER_ROLEID_FIELD.full_name = ".HPSkillChangeOrder.roleId"
HPSKILLCHANGEORDER_ROLEID_FIELD.number = 1
HPSKILLCHANGEORDER_ROLEID_FIELD.index = 0
HPSKILLCHANGEORDER_ROLEID_FIELD.label = 2
HPSKILLCHANGEORDER_ROLEID_FIELD.has_default_value = false
HPSKILLCHANGEORDER_ROLEID_FIELD.default_value = 0
HPSKILLCHANGEORDER_ROLEID_FIELD.type = 5
HPSKILLCHANGEORDER_ROLEID_FIELD.cpp_type = 1

HPSKILLCHANGEORDER_SKILLID_FIELD.name = "skillId"
HPSKILLCHANGEORDER_SKILLID_FIELD.full_name = ".HPSkillChangeOrder.skillId"
HPSKILLCHANGEORDER_SKILLID_FIELD.number = 2
HPSKILLCHANGEORDER_SKILLID_FIELD.index = 1
HPSKILLCHANGEORDER_SKILLID_FIELD.label = 2
HPSKILLCHANGEORDER_SKILLID_FIELD.has_default_value = false
HPSKILLCHANGEORDER_SKILLID_FIELD.default_value = 0
HPSKILLCHANGEORDER_SKILLID_FIELD.type = 5
HPSKILLCHANGEORDER_SKILLID_FIELD.cpp_type = 1

HPSKILLCHANGEORDER_SRCORDER_FIELD.name = "srcOrder"
HPSKILLCHANGEORDER_SRCORDER_FIELD.full_name = ".HPSkillChangeOrder.srcOrder"
HPSKILLCHANGEORDER_SRCORDER_FIELD.number = 3
HPSKILLCHANGEORDER_SRCORDER_FIELD.index = 2
HPSKILLCHANGEORDER_SRCORDER_FIELD.label = 2
HPSKILLCHANGEORDER_SRCORDER_FIELD.has_default_value = false
HPSKILLCHANGEORDER_SRCORDER_FIELD.default_value = 0
HPSKILLCHANGEORDER_SRCORDER_FIELD.type = 5
HPSKILLCHANGEORDER_SRCORDER_FIELD.cpp_type = 1

HPSKILLCHANGEORDER_DSTORDER_FIELD.name = "dstOrder"
HPSKILLCHANGEORDER_DSTORDER_FIELD.full_name = ".HPSkillChangeOrder.dstOrder"
HPSKILLCHANGEORDER_DSTORDER_FIELD.number = 4
HPSKILLCHANGEORDER_DSTORDER_FIELD.index = 3
HPSKILLCHANGEORDER_DSTORDER_FIELD.label = 2
HPSKILLCHANGEORDER_DSTORDER_FIELD.has_default_value = false
HPSKILLCHANGEORDER_DSTORDER_FIELD.default_value = 0
HPSKILLCHANGEORDER_DSTORDER_FIELD.type = 5
HPSKILLCHANGEORDER_DSTORDER_FIELD.cpp_type = 1

HPSKILLCHANGEORDER_SKILLBAGID_FIELD.name = "skillBagId"
HPSKILLCHANGEORDER_SKILLBAGID_FIELD.full_name = ".HPSkillChangeOrder.skillBagId"
HPSKILLCHANGEORDER_SKILLBAGID_FIELD.number = 5
HPSKILLCHANGEORDER_SKILLBAGID_FIELD.index = 4
HPSKILLCHANGEORDER_SKILLBAGID_FIELD.label = 2
HPSKILLCHANGEORDER_SKILLBAGID_FIELD.has_default_value = false
HPSKILLCHANGEORDER_SKILLBAGID_FIELD.default_value = 0
HPSKILLCHANGEORDER_SKILLBAGID_FIELD.type = 5
HPSKILLCHANGEORDER_SKILLBAGID_FIELD.cpp_type = 1

HPSKILLCHANGEORDER.name = "HPSkillChangeOrder"
HPSKILLCHANGEORDER.full_name = ".HPSkillChangeOrder"
HPSKILLCHANGEORDER.nested_types = {}
HPSKILLCHANGEORDER.enum_types = {}
HPSKILLCHANGEORDER.fields = {HPSKILLCHANGEORDER_ROLEID_FIELD, HPSKILLCHANGEORDER_SKILLID_FIELD, HPSKILLCHANGEORDER_SRCORDER_FIELD, HPSKILLCHANGEORDER_DSTORDER_FIELD, HPSKILLCHANGEORDER_SKILLBAGID_FIELD}
HPSKILLCHANGEORDER.is_extendable = false
HPSKILLCHANGEORDER.extensions = {}
HPSKILLCHANGEORDERRET_VERSION_FIELD.name = "version"
HPSKILLCHANGEORDERRET_VERSION_FIELD.full_name = ".HPSkillChangeOrderRet.version"
HPSKILLCHANGEORDERRET_VERSION_FIELD.number = 1
HPSKILLCHANGEORDERRET_VERSION_FIELD.index = 0
HPSKILLCHANGEORDERRET_VERSION_FIELD.label = 1
HPSKILLCHANGEORDERRET_VERSION_FIELD.has_default_value = true
HPSKILLCHANGEORDERRET_VERSION_FIELD.default_value = 1
HPSKILLCHANGEORDERRET_VERSION_FIELD.type = 5
HPSKILLCHANGEORDERRET_VERSION_FIELD.cpp_type = 1

HPSKILLCHANGEORDERRET.name = "HPSkillChangeOrderRet"
HPSKILLCHANGEORDERRET.full_name = ".HPSkillChangeOrderRet"
HPSKILLCHANGEORDERRET.nested_types = {}
HPSKILLCHANGEORDERRET.enum_types = {}
HPSKILLCHANGEORDERRET.fields = {HPSKILLCHANGEORDERRET_VERSION_FIELD}
HPSKILLCHANGEORDERRET.is_extendable = false
HPSKILLCHANGEORDERRET.extensions = {}
HPSKILLCARRY_ROLEID_FIELD.name = "roleId"
HPSKILLCARRY_ROLEID_FIELD.full_name = ".HPSkillCarry.roleId"
HPSKILLCARRY_ROLEID_FIELD.number = 1
HPSKILLCARRY_ROLEID_FIELD.index = 0
HPSKILLCARRY_ROLEID_FIELD.label = 2
HPSKILLCARRY_ROLEID_FIELD.has_default_value = false
HPSKILLCARRY_ROLEID_FIELD.default_value = 0
HPSKILLCARRY_ROLEID_FIELD.type = 5
HPSKILLCARRY_ROLEID_FIELD.cpp_type = 1

HPSKILLCARRY_SKILLID_FIELD.name = "skillId"
HPSKILLCARRY_SKILLID_FIELD.full_name = ".HPSkillCarry.skillId"
HPSKILLCARRY_SKILLID_FIELD.number = 2
HPSKILLCARRY_SKILLID_FIELD.index = 1
HPSKILLCARRY_SKILLID_FIELD.label = 3
HPSKILLCARRY_SKILLID_FIELD.has_default_value = false
HPSKILLCARRY_SKILLID_FIELD.default_value = {}
HPSKILLCARRY_SKILLID_FIELD.type = 5
HPSKILLCARRY_SKILLID_FIELD.cpp_type = 1

HPSKILLCARRY_SKILLBAGID_FIELD.name = "skillBagId"
HPSKILLCARRY_SKILLBAGID_FIELD.full_name = ".HPSkillCarry.skillBagId"
HPSKILLCARRY_SKILLBAGID_FIELD.number = 3
HPSKILLCARRY_SKILLBAGID_FIELD.index = 2
HPSKILLCARRY_SKILLBAGID_FIELD.label = 2
HPSKILLCARRY_SKILLBAGID_FIELD.has_default_value = false
HPSKILLCARRY_SKILLBAGID_FIELD.default_value = 0
HPSKILLCARRY_SKILLBAGID_FIELD.type = 5
HPSKILLCARRY_SKILLBAGID_FIELD.cpp_type = 1

HPSKILLCARRY.name = "HPSkillCarry"
HPSKILLCARRY.full_name = ".HPSkillCarry"
HPSKILLCARRY.nested_types = {}
HPSKILLCARRY.enum_types = {}
HPSKILLCARRY.fields = {HPSKILLCARRY_ROLEID_FIELD, HPSKILLCARRY_SKILLID_FIELD, HPSKILLCARRY_SKILLBAGID_FIELD}
HPSKILLCARRY.is_extendable = false
HPSKILLCARRY.extensions = {}
HPSKILLCARRYRET_ROLEID_FIELD.name = "roleId"
HPSKILLCARRYRET_ROLEID_FIELD.full_name = ".HPSkillCarryRet.roleId"
HPSKILLCARRYRET_ROLEID_FIELD.number = 1
HPSKILLCARRYRET_ROLEID_FIELD.index = 0
HPSKILLCARRYRET_ROLEID_FIELD.label = 2
HPSKILLCARRYRET_ROLEID_FIELD.has_default_value = false
HPSKILLCARRYRET_ROLEID_FIELD.default_value = 0
HPSKILLCARRYRET_ROLEID_FIELD.type = 5
HPSKILLCARRYRET_ROLEID_FIELD.cpp_type = 1

HPSKILLCARRYRET.name = "HPSkillCarryRet"
HPSKILLCARRYRET.full_name = ".HPSkillCarryRet"
HPSKILLCARRYRET.nested_types = {}
HPSKILLCARRYRET.enum_types = {}
HPSKILLCARRYRET.fields = {HPSKILLCARRYRET_ROLEID_FIELD}
HPSKILLCARRYRET.is_extendable = false
HPSKILLCARRYRET.extensions = {}
HPSKILLINFO_ROLEID_FIELD.name = "roleId"
HPSKILLINFO_ROLEID_FIELD.full_name = ".HPSkillInfo.roleId"
HPSKILLINFO_ROLEID_FIELD.number = 1
HPSKILLINFO_ROLEID_FIELD.index = 0
HPSKILLINFO_ROLEID_FIELD.label = 2
HPSKILLINFO_ROLEID_FIELD.has_default_value = false
HPSKILLINFO_ROLEID_FIELD.default_value = 0
HPSKILLINFO_ROLEID_FIELD.type = 5
HPSKILLINFO_ROLEID_FIELD.cpp_type = 1

HPSKILLINFO_SKILLID1_FIELD.name = "skillId1"
HPSKILLINFO_SKILLID1_FIELD.full_name = ".HPSkillInfo.skillId1"
HPSKILLINFO_SKILLID1_FIELD.number = 2
HPSKILLINFO_SKILLID1_FIELD.index = 1
HPSKILLINFO_SKILLID1_FIELD.label = 3
HPSKILLINFO_SKILLID1_FIELD.has_default_value = false
HPSKILLINFO_SKILLID1_FIELD.default_value = {}
HPSKILLINFO_SKILLID1_FIELD.type = 5
HPSKILLINFO_SKILLID1_FIELD.cpp_type = 1

HPSKILLINFO_SKILLID2_FIELD.name = "skillId2"
HPSKILLINFO_SKILLID2_FIELD.full_name = ".HPSkillInfo.skillId2"
HPSKILLINFO_SKILLID2_FIELD.number = 3
HPSKILLINFO_SKILLID2_FIELD.index = 2
HPSKILLINFO_SKILLID2_FIELD.label = 3
HPSKILLINFO_SKILLID2_FIELD.has_default_value = false
HPSKILLINFO_SKILLID2_FIELD.default_value = {}
HPSKILLINFO_SKILLID2_FIELD.type = 5
HPSKILLINFO_SKILLID2_FIELD.cpp_type = 1

HPSKILLINFO_SKILLID3_FIELD.name = "skillId3"
HPSKILLINFO_SKILLID3_FIELD.full_name = ".HPSkillInfo.skillId3"
HPSKILLINFO_SKILLID3_FIELD.number = 4
HPSKILLINFO_SKILLID3_FIELD.index = 3
HPSKILLINFO_SKILLID3_FIELD.label = 3
HPSKILLINFO_SKILLID3_FIELD.has_default_value = false
HPSKILLINFO_SKILLID3_FIELD.default_value = {}
HPSKILLINFO_SKILLID3_FIELD.type = 5
HPSKILLINFO_SKILLID3_FIELD.cpp_type = 1

HPSKILLINFO.name = "HPSkillInfo"
HPSKILLINFO.full_name = ".HPSkillInfo"
HPSKILLINFO.nested_types = {}
HPSKILLINFO.enum_types = {}
HPSKILLINFO.fields = {HPSKILLINFO_ROLEID_FIELD, HPSKILLINFO_SKILLID1_FIELD, HPSKILLINFO_SKILLID2_FIELD, HPSKILLINFO_SKILLID3_FIELD}
HPSKILLINFO.is_extendable = false
HPSKILLINFO.extensions = {}

HPSkillCarry = protobuf.Message(HPSKILLCARRY)
HPSkillCarryRet = protobuf.Message(HPSKILLCARRYRET)
HPSkillChangeOrder = protobuf.Message(HPSKILLCHANGEORDER)
HPSkillChangeOrderRet = protobuf.Message(HPSKILLCHANGEORDERRET)
HPSkillInfo = protobuf.Message(HPSKILLINFO)
HPSkillInfoSync = protobuf.Message(HPSKILLINFOSYNC)
SkillInfo = protobuf.Message(SKILLINFO)
