#include "NihilityPackageCfgMaster.h"

#include <set>

using std::set;

int CNihilityPackageCfgMaster::ValidateCfg()const
{
	int iRet = 0;


	set<unsigned int> stItemIDSet;

	for(int iIdx = 0; iIdx < m_stCfg.nihilitypackagecfg_size(); iIdx++)
	{
		unsigned int uiCfgID = m_stCfg.nihilitypackagecfg(iIdx).id();
		if(stItemIDSet.insert(uiCfgID).second == false)
		{
			CV_ERROR(("%s, cfgid = %u is dup cfg id !",
				__PRETTY_FUNCTION__, uiCfgID));
			return -1;//id重复
		}

		//to add other validate check, such as skill etc.
	}
	return iRet;
}

int CNihilityPackageCfgMaster::SetCfg()
{
	int iRet = 0;

	for(int iIdx = 0; iIdx < m_stCfg.nihilitypackagecfg_size(); iIdx++)
	{
		unsigned int uiCfgID = m_stCfg.nihilitypackagecfg(iIdx).id();
		if(m_stID2IDX.insert(make_pair(uiCfgID, iIdx)).second == false)
		{
			CV_ERROR(("%s, cfgid = %u is dup cfg id !",
				__PRETTY_FUNCTION__, uiCfgID));
			return -1;//id重复
		}
	}

	return iRet;
}

const NihilityPackageCfg* CNihilityPackageCfgMaster::GetNihilityPackageCfgByID(const unsigned int uiCfgID)
{
	map<unsigned int, int>::const_iterator it = m_stID2IDX.find(uiCfgID);

	if(it == m_stID2IDX.end())
	{
		CV_ERROR(("%s, can not find cfgid = %u NihilityPackageCfg", __PRETTY_FUNCTION__, uiCfgID));
		return NULL; //找不到该物品配置
	}

	return &(m_stCfg.nihilitypackagecfg(it->second));
}

const NihilityPackageCfg* CNihilityPackageCfgMaster::GetNihilityPackageCfgByLv(const unsigned int uLv){
	for(int iIdx = 0; iIdx < m_stCfg.nihilitypackagecfg_size(); iIdx++){
		unsigned int minLv = m_stCfg.nihilitypackagecfg(iIdx).minlev();
		unsigned int maxLv = m_stCfg.nihilitypackagecfg(iIdx).maxlev();
		
		if(uLv >= minLv && uLv <= maxLv){
			return &(m_stCfg.nihilitypackagecfg(iIdx));
		}
	}

	CV_ERROR(("%s, can not find uLv = %u NihilityPackageCfg", __PRETTY_FUNCTION__, uLv));
	return NULL;
}

