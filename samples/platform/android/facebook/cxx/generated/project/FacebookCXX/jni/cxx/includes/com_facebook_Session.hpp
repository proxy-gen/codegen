/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
 	
 		 
	
 		 
 		 
 		 
 		 
	
 		 
	
 		 
	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
	
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
	


 		 



































// Generated Code 

#ifndef _com_facebook_Session
#define _com_facebook_Session
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_util_List.hpp>

#include <com_facebook_SessionState.hpp>

#include <com_facebook_AccessToken.hpp>

#include <com_facebook_Session_StatusCallback.hpp>

#include <android_app_Activity.hpp>

#include <android_content_Intent.hpp>

#include <android_os_Bundle.hpp>

#include <java_util_Date.hpp>

#include <com_facebook_Session_OpenRequest.hpp>

#include <com_facebook_Session_NewPermissionsRequest.hpp>


#include <android_content_Context.hpp>

#include <com_facebook_TokenCachingStrategy.hpp>

#include <android_support_v4_app_Fragment.hpp>

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
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_util_List;

class com_facebook_SessionState;

class com_facebook_AccessToken;

class com_facebook_Session_StatusCallback;

class android_app_Activity;

class android_content_Intent;

class android_os_Bundle;

class java_util_Date;

class com_facebook_Session_OpenRequest;

class com_facebook_Session_NewPermissionsRequest;

class com_facebook_Session;

class android_content_Context;

class com_facebook_TokenCachingStrategy;

class android_support_v4_app_Fragment;

class com_facebook_Session
{
public:

	com_facebook_Session(const com_facebook_Session& cc);
	com_facebook_Session(void * proxy);
	// Public Constructors
	com_facebook_Session(FacebookCXX::android_content_Context& arg0);
	com_facebook_Session();
	// Default Destructor
	virtual ~com_facebook_Session();
	// Functions
	 bool equals(FacebookCXX::java_lang_Object& arg0);
	 FacebookCXX::java_lang_String toString();
	 int hashCode();
	 FacebookCXX::java_util_List getPermissions();
	 FacebookCXX::com_facebook_SessionState getState();
	 void close();
	 void open(FacebookCXX::com_facebook_AccessToken& arg0,FacebookCXX::com_facebook_Session_StatusCallback& arg1);
	 bool isClosed();
	 bool onActivityResult(FacebookCXX::android_app_Activity& arg0,int& arg1,int& arg2,FacebookCXX::android_content_Intent& arg3);
	 FacebookCXX::java_lang_String getApplicationId();
	 void addCallback(FacebookCXX::com_facebook_Session_StatusCallback& arg0);
	 void closeAndClearTokenInformation();
	 bool isOpened();
	 FacebookCXX::java_lang_String getAccessToken();
	 void removeCallback(FacebookCXX::com_facebook_Session_StatusCallback& arg0);
	 FacebookCXX::android_os_Bundle getAuthorizationBundle();
	 FacebookCXX::java_util_Date getExpirationDate();
	 void openForRead(FacebookCXX::com_facebook_Session_OpenRequest& arg0);
	 void openForPublish(FacebookCXX::com_facebook_Session_OpenRequest& arg0);
	 void requestNewReadPermissions(FacebookCXX::com_facebook_Session_NewPermissionsRequest& arg0);
	 void requestNewPublishPermissions(FacebookCXX::com_facebook_Session_NewPermissionsRequest& arg0);
	static void saveSession(FacebookCXX::com_facebook_Session& arg0,FacebookCXX::android_os_Bundle& arg1);
	static FacebookCXX::com_facebook_Session restoreSession(FacebookCXX::android_content_Context& arg0,FacebookCXX::com_facebook_TokenCachingStrategy& arg1,FacebookCXX::com_facebook_Session_StatusCallback& arg2,FacebookCXX::android_os_Bundle& arg3);
	static FacebookCXX::com_facebook_Session getActiveSession();
	static void setActiveSession(FacebookCXX::com_facebook_Session& arg0);
	static FacebookCXX::com_facebook_Session openActiveSessionFromCache(FacebookCXX::android_content_Context& arg0);
	static FacebookCXX::com_facebook_Session openActiveSession(FacebookCXX::android_content_Context& arg0,FacebookCXX::android_support_v4_app_Fragment& arg1,bool& arg2,FacebookCXX::com_facebook_Session_StatusCallback& arg3);
	static FacebookCXX::com_facebook_Session openActiveSession(FacebookCXX::android_app_Activity& arg0,bool& arg1,FacebookCXX::com_facebook_Session_StatusCallback& arg2);
	static FacebookCXX::com_facebook_Session openActiveSessionWithAccessToken(FacebookCXX::android_content_Context& arg0,FacebookCXX::com_facebook_AccessToken& arg1,FacebookCXX::com_facebook_Session_StatusCallback& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session