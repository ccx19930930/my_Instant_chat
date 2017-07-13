 ///
 /// @file    conf.cc
 /// @author  marrs(chenchengxi993@gmail.com)
 /// @date    2017-07-13 22:32:32
 ///
 
#include "conf.h"

namespace marrs{

BaseConf::BaseConf()
{
	LoadConf();	
}

BaseConf::~BaseConf()
{
	//do nothing
}

Void BaseConf::LoadConf()
{
	ifstream ifs_conf;
	ifs_conf.open(BASE_CONF_PATH);
	if (!ifs_conf.good())
	{
		//todo  log and exit
		return;
	}
	
	if(!jsnReader.parse(ifs_conf, jsnData))
	{
		//todo log and exit
		return;
	}
}

Int_32 BaseConf::GetVal(String str_key, Int_32 & rInt32_value)
{
	if(jsnData.isMember(str_key))
	{
		rInt32_value = jsnData[str_key].asInt();
	}
	return rInt32_value;
}

UInt_32 BaseConf::GetVal(String str_key, UInt_32 & rUInt32_value)
{
	if(jsnData.isMember(str_key))
	{
		rUInt32_value = jsnData[str_key].asUInt();
	}
	return rUInt32_value;
}


String BaseConf::GetVal(String str_key, String & str_value)
{
	if(jsnData.isMember(str_key))
	{
		str_value = jsnData[str_key].asString();
	}
	return str_value;
}

}//end namespace
