/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
	
 	
 		 
 		 
 		 
 		 
	
	
























// Generated Code 

#ifndef _com_facebook_Settings
#define _com_facebook_Settings
//
// Scroll Down 
//


#include <com_facebook_LoggingBehavior.hpp>

#include <java_util_concurrent_Executor.hpp>

#include <android_content_Context.hpp>

#include <java_lang_String.hpp>

#include <android_content_ContentResolver.hpp>

#include <com_facebook_Response.hpp>

#include <com_facebook_Request_Callback.hpp>

#include <java_util_Set.hpp>

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
// using namespace COM_FACEBOOK_LOGGINGBEHAVIOR;
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
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations


class java_util_concurrent_Executor;

class android_content_Context;

class java_lang_String;

class android_content_ContentResolver;

class com_facebook_Response;

class com_facebook_Request_Callback;

class java_util_Set;

class com_facebook_Settings
{
public:

	com_facebook_Settings(const com_facebook_Settings& cc);
	com_facebook_Settings(void * proxy);
	// Public Constructors
	com_facebook_Settings();
	// Default Destructor
	virtual ~com_facebook_Settings();
	// Functions
	static bool isLoggingBehaviorEnabled(COM_FACEBOOK_LOGGINGBEHAVIOR::com_facebook_LoggingBehavior& arg0);
	static FacebookCXX::java_util_concurrent_Executor getExecutor();
	static bool getShouldAutoPublishInstall();
	static bool publishInstallAndWait(FacebookCXX::android_content_Context& arg0,FacebookCXX::java_lang_String& arg1);
	static FacebookCXX::java_lang_String getAttributionId(FacebookCXX::android_content_ContentResolver& arg0);
	static FacebookCXX::com_facebook_Response publishInstallAndWaitForResponse(FacebookCXX::android_content_Context& arg0,FacebookCXX::java_lang_String& arg1);
	static void publishInstallAsync(FacebookCXX::android_content_Context& arg0,FacebookCXX::java_lang_String& arg1);
	static void publishInstallAsync(FacebookCXX::android_content_Context& arg0,FacebookCXX::java_lang_String& arg1,FacebookCXX::com_facebook_Request_Callback& arg2);
	static FacebookCXX::java_util_Set getLoggingBehaviors();
	static void addLoggingBehavior(COM_FACEBOOK_LOGGINGBEHAVIOR::com_facebook_LoggingBehavior& arg0);
	static void removeLoggingBehavior(COM_FACEBOOK_LOGGINGBEHAVIOR::com_facebook_LoggingBehavior& arg0);
	static void clearLoggingBehaviors();
	static void setExecutor(FacebookCXX::java_util_concurrent_Executor& arg0);
	static void setShouldAutoPublishInstall(bool& arg0);
	static FacebookCXX::java_lang_String getSdkVersion();
	static FacebookCXX::java_lang_String getMigrationBundle();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Settings