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

// Forward Declarations




class com_facebook_android_Facebook_DialogListener;


class com_facebook_Session;

class com_facebook_android_Facebook_ServiceListener;



class com_facebook_android_Facebook
{
public:

	com_facebook_android_Facebook(const com_facebook_android_Facebook& cc);
	com_facebook_android_Facebook(void * proxy);
	// Public Constructors
	com_facebook_android_Facebook(AndroidCXX::java_lang_String& arg0);
	// TODO: remove
	// 
	// com_facebook_android_Facebook();
	// 
	// Default Destructor
	virtual ~com_facebook_android_Facebook();
	// Functions
	 void dialog(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2,FacebookCXX::com_facebook_android_Facebook_DialogListener& arg3);
	 void dialog(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_String& arg1,FacebookCXX::com_facebook_android_Facebook_DialogListener& arg2);
	 void authorize(AndroidCXX::android_app_Activity& arg0,std::vector<AndroidCXX::java_lang_String >& arg1,int& arg2,FacebookCXX::com_facebook_android_Facebook_DialogListener& arg3);
	 void authorize(AndroidCXX::android_app_Activity& arg0,FacebookCXX::com_facebook_android_Facebook_DialogListener& arg1);
	 void authorize(AndroidCXX::android_app_Activity& arg0,std::vector<AndroidCXX::java_lang_String >& arg1,FacebookCXX::com_facebook_android_Facebook_DialogListener& arg2);
	 AndroidCXX::java_lang_String request(AndroidCXX::android_os_Bundle& arg0);
	 AndroidCXX::java_lang_String request(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_os_Bundle& arg1,AndroidCXX::java_lang_String& arg2);
	 AndroidCXX::java_lang_String request(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_os_Bundle& arg1);
	 AndroidCXX::java_lang_String request(AndroidCXX::java_lang_String& arg0);
	 FacebookCXX::com_facebook_Session getSession();
	 void setSession(FacebookCXX::com_facebook_Session& arg0);
	 bool extendAccessTokenIfNeeded(AndroidCXX::android_content_Context& arg0,FacebookCXX::com_facebook_android_Facebook_ServiceListener& arg1);
	 AndroidCXX::java_lang_String getAccessToken();
	 bool shouldExtendAccessToken();
	 bool extendAccessToken(AndroidCXX::android_content_Context& arg0,FacebookCXX::com_facebook_android_Facebook_ServiceListener& arg1);
	 bool getShouldAutoPublishInstall();
	static AndroidCXX::java_lang_String getAttributionId(AndroidCXX::android_content_ContentResolver& arg0);
	 void setShouldAutoPublishInstall(bool& arg0);
	 AndroidCXX::java_lang_String logout(AndroidCXX::android_content_Context& arg0);
	 void authorizeCallback(int& arg0,int& arg1,AndroidCXX::android_content_Intent& arg2);
	 bool isSessionValid();
	 long getAccessExpires();
	 long getLastAccessUpdate();
	 void setTokenFromCache(AndroidCXX::java_lang_String& arg0,long& arg1,long& arg2);
	 void setAccessToken(AndroidCXX::java_lang_String& arg0);
	 void setAccessExpires(long& arg0);
	 void setAccessExpiresIn(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getAppId();
	 void setAppId(AndroidCXX::java_lang_String& arg0);
	 bool publishInstall(AndroidCXX::android_content_Context& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_Facebook