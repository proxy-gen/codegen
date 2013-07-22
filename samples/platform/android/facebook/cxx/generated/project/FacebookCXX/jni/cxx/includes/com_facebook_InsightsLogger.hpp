/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 













// Generated Code 

#ifndef _com_facebook_InsightsLogger
#define _com_facebook_InsightsLogger
//
// Scroll Down 
//


#include <android_content_Context.hpp>

#include <java_lang_String.hpp>

#include <com_facebook_Session.hpp>


#include <java_math_BigDecimal.hpp>

#include <java_util_Currency.hpp>

#include <android_os_Bundle.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_content_Context;

class java_lang_String;

class com_facebook_Session;

class com_facebook_InsightsLogger;

class java_math_BigDecimal;

class java_util_Currency;

class android_os_Bundle;

class com_facebook_InsightsLogger
{
public:

	com_facebook_InsightsLogger(const com_facebook_InsightsLogger& cc);
	com_facebook_InsightsLogger(void * proxy);
	// Public Constructors
	com_facebook_InsightsLogger();
	// Default Destructor
	virtual ~com_facebook_InsightsLogger();
	// Functions
	static FacebookCXX::com_facebook_InsightsLogger newLogger(FacebookCXX::android_content_Context& arg0,FacebookCXX::java_lang_String& arg1,FacebookCXX::java_lang_String& arg2,FacebookCXX::com_facebook_Session& arg3);
	static FacebookCXX::com_facebook_InsightsLogger newLogger(FacebookCXX::android_content_Context& arg0,FacebookCXX::java_lang_String& arg1);
	static FacebookCXX::com_facebook_InsightsLogger newLogger(FacebookCXX::android_content_Context& arg0,FacebookCXX::java_lang_String& arg1,FacebookCXX::java_lang_String& arg2);
	 void logPurchase(FacebookCXX::java_math_BigDecimal& arg0,FacebookCXX::java_util_Currency& arg1,FacebookCXX::android_os_Bundle& arg2);
	 void logPurchase(FacebookCXX::java_math_BigDecimal& arg0,FacebookCXX::java_util_Currency& arg1);
	 void logConversionPixel(FacebookCXX::java_lang_String& arg0,double& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_InsightsLogger