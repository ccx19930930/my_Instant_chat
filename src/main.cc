 ///
 /// @file    main.cc
 /// @author  marrs(chenchengxi993@gmail.com)
 /// @date    2017-07-13 23:11:35
 ///

#include "base/conf.h"

using namespace marrs;

int main()
{
	BaseConf conf;
	String str_ip;
	conf.GetVal(BASE_CONF_KEY_IP, str_ip);
	cout << str_ip << endl;
	return 0;
}
 
