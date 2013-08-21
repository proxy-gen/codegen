/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_String.hpp>

#include <java_math_BigDecimal.hpp>

#include <java_util_Currency.hpp>

#include <android_os_Bundle.hpp>

#include <android_content_Context.hpp>

#include <com_facebook_Session.hpp>


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

// Forward Declarations






class com_facebook_Session;


class com_facebook_InsightsLogger 
{
public:

	// Public ConstrucXXX
	com_facebook_InsightsLogger(const com_facebook_InsightsLogger& cc);
	com_facebook_InsightsLogger(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_InsightsLogger();
	// Functions
	virtual void  logConversionPixel(AndroidCXX::java_lang_String const& arg0,double const& arg1) ;
	virtual void  logPurchase(AndroidCXX::java_math_BigDecimal const& arg0,AndroidCXX::java_util_Currency const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  logPurchase(AndroidCXX::java_math_BigDecimal const& arg0,AndroidCXX::java_util_Currency const& arg1) ;
	static FacebookCXX::com_facebook_InsightsLogger * newLogger(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,FacebookCXX::com_facebook_Session const& arg3) ;
	static FacebookCXX::com_facebook_InsightsLogger * newLogger(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	static FacebookCXX::com_facebook_InsightsLogger * newLogger(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_InsightsLogger