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

// Forward Declarations






class com_facebook_Response;

class com_facebook_Request_Callback;


class com_facebook_Settings
{
public:

	com_facebook_Settings(const com_facebook_Settings& cc);
	com_facebook_Settings(Proxy proxy);
	// Public Constructors
	com_facebook_Settings();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Settings();
	// Functions
	static bool isLoggingBehaviorEnabled(com_facebook_LoggingBehavior::com_facebook_LoggingBehavior const& arg0);
	static AndroidCXX::java_util_concurrent_Executor getExecutor();
	static bool getShouldAutoPublishInstall();
	static bool publishInstallAndWait(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1);
	static AndroidCXX::java_lang_String getAttributionId(AndroidCXX::android_content_ContentResolver const& arg0);
	static FacebookCXX::com_facebook_Response publishInstallAndWaitForResponse(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1);
	static void publishInstallAsync(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1);
	static void publishInstallAsync(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,FacebookCXX::com_facebook_Request_Callback const& arg2);
	static AndroidCXX::java_util_Set getLoggingBehaviors();
	static void addLoggingBehavior(com_facebook_LoggingBehavior::com_facebook_LoggingBehavior const& arg0);
	static void removeLoggingBehavior(com_facebook_LoggingBehavior::com_facebook_LoggingBehavior const& arg0);
	static void clearLoggingBehaviors();
	static void setExecutor(AndroidCXX::java_util_concurrent_Executor const& arg0);
	static void setShouldAutoPublishInstall(bool const& arg0);
	static AndroidCXX::java_lang_String getSdkVersion();
	static AndroidCXX::java_lang_String getMigrationBundle();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Settings