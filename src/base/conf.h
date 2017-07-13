 ///
 /// @file    conf.h
 /// @author  marrs(chenchengxi993@gmail.com)
 /// @date    2017-07-13 21:49:14
 ///

#ifndef __CONF_H__
#define __CONF_H__

#include "define.h"

namespace marrs{

class BaseConf
{
	public:
		BaseConf();
		~BaseConf();
		Void LoadConf();

	public:
		Int_32 GetVal(String str_key, Int_32 & rInt32_value);
		UInt_32 GetVal(String str_key, UInt_32 & rUInt32_value);
		String GetVal(String str_key, String & str_value);

	private:
		Json::Value jsnData;
		Json::FastWriter jsnWriter;
		Json::Reader jsnReader;
};

}

#endif
