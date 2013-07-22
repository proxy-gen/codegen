/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
	
	
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 


 		 




































// Generated Code 

#ifndef _com_facebook_android_Facebook
#define _com_facebook_android_Facebook
//
// Scroll Down 
//


#include <android_content_Context.hpp>

#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>

#include <com_facebook_android_Facebook_DialogListener.hpp>

#include <android_app_Activity.hpp>

#include <com_facebook_Session.hpp>

#include <com_facebook_android_Facebook_ServiceListener.hpp>

#include <android_content_ContentResolver.hpp>

#include <android_content_Intent.hpp>

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

class android_os_Bundle;

class com_facebook_android_Facebook_DialogListener;

class android_app_Activity;

class com_facebook_Session;

class com_facebook_android_Facebook_ServiceListener;

class android_content_ContentResolver;

class android_content_Intent;

class com_facebook_android_Facebook
{
public:

	com_facebook_android_Facebook(const com_facebook_android_Facebook& cc);
	com_facebook_android_Facebook(void * proxy);
	// Public Constructors
	com_facebook_android_Facebook(FacebookCXX::java_lang_String& arg0);
	com_facebook_android_Facebook();
	// Default Destructor
	virtual ~com_facebook_android_Facebook();
	// Functions
	 void dialog(FacebookCXX::android_content_Context& arg0,FacebookCXX::java_lang_String& arg1,FacebookCXX::android_os_Bundle& arg2,FacebookCXX::com_facebook_android_Facebook_DialogListener& arg3);
	 void dialog(FacebookCXX::android_content_Context& arg0,FacebookCXX::java_lang_String& arg1,FacebookCXX::com_facebook_android_Facebook_DialogListener& arg2);
	 void authorize(FacebookCXX::android_app_Activity& arg0,std::vector<java_lang_String >& arg1,int& arg2,FacebookCXX::com_facebook_android_Facebook_DialogListener& arg3);
	 void authorize(FacebookCXX::android_app_Activity& arg0,FacebookCXX::com_facebook_android_Facebook_DialogListener& arg1);
	 void authorize(FacebookCXX::android_app_Activity& arg0,std::vector<java_lang_String >& arg1,FacebookCXX::com_facebook_android_Facebook_DialogListener& arg2);
	 FacebookCXX::java_lang_String request(FacebookCXX::android_os_Bundle& arg0);
	 FacebookCXX::java_lang_String request(FacebookCXX::java_lang_String& arg0,FacebookCXX::android_os_Bundle& arg1,FacebookCXX::java_lang_String& arg2);
	 FacebookCXX::java_lang_String request(FacebookCXX::java_lang_String& arg0,FacebookCXX::android_os_Bundle& arg1);
	 FacebookCXX::java_lang_String request(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::com_facebook_Session getSession();
	 void setSession(FacebookCXX::com_facebook_Session& arg0);
	 bool extendAccessTokenIfNeeded(FacebookCXX::android_content_Context& arg0,FacebookCXX::com_facebook_android_Facebook_ServiceListener& arg1);
	 FacebookCXX::java_lang_String getAccessToken();
	 bool shouldExtendAccessToken();
	 bool extendAccessToken(FacebookCXX::android_content_Context& arg0,FacebookCXX::com_facebook_android_Facebook_ServiceListener& arg1);
	 bool getShouldAutoPublishInstall();
	static FacebookCXX::java_lang_String getAttributionId(FacebookCXX::android_content_ContentResolver& arg0);
	 void setShouldAutoPublishInstall(bool& arg0);
	 FacebookCXX::java_lang_String logout(FacebookCXX::android_content_Context& arg0);
	 void authorizeCallback(int& arg0,int& arg1,FacebookCXX::android_content_Intent& arg2);
	 bool isSessionValid();
	 long getAccessExpires();
	 long getLastAccessUpdate();
	 void setTokenFromCache(FacebookCXX::java_lang_String& arg0,long& arg1,long& arg2);
	 void setAccessToken(FacebookCXX::java_lang_String& arg0);
	 void setAccessExpires(long& arg0);
	 void setAccessExpiresIn(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::java_lang_String getAppId();
	 void setAppId(FacebookCXX::java_lang_String& arg0);
	 bool publishInstall(FacebookCXX::android_content_Context& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_Facebook