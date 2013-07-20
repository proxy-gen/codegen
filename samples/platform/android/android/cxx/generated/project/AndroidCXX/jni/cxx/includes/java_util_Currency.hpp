/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
	
	
 		 
	

// Generated Code 

#ifndef _java_util_Currency
#define _java_util_Currency
//
// Scroll Down 
//








#include <java_lang_String.hpp>

#include <java_util_Locale.hpp>


#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class java_util_Locale;

class java_util_Currency;

class java_util_Currency
{
public:
	 java_lang_String *  toString();
	static java_util_Currency *  getInstance(java_util_Locale& arg0,java_lang_String& arg1);
	 java_lang_String *  getCurrencyCode();
	 java_lang_String *  getSymbol(java_util_Locale& arg0);
	 int getDefaultFractionDigits();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Currency