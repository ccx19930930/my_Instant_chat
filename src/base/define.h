 ///
 /// @file    define.h
 /// @author  marrs(chenchengxi993@gmail.com)
 /// @date    2017-07-13 21:57:13
 ///

#ifndef __DEFINE_H__
#define __DEFINE_H__
 
#include <json/json.h>
#include <iostream>
#include <fstream>
#include <sstream>

namespace marrs{

using namespace std;

#define BASE_CONF_PATH "../conf/modular.conf"

#define BASE_CONF_KEY_IP "Ip"

typedef short                Int_16;
typedef int                  Int_32;
typedef long                 Int_64;
typedef unsigned short       UInt_16;
typedef unsigned int         UInt_32;
typedef unsigned long        UInt_64;
typedef char                 Char;
typedef string               String;
typedef void                 Void;

typedef short*               pInt_16;
typedef int*                 pInt_32;
typedef long*                pInt_64;
typedef unsigned short*      pUInt_16;
typedef unsigned int*        pUInt_32;
typedef unsigned long*       pUInt_64;
typedef char*                pChar; 
typedef void*                pVoid;

}

#endif
