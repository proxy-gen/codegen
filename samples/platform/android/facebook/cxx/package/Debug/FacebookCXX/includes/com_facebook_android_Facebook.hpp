/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_content_Intent.hpp>

#include <android_app_Activity.hpp>

#include <com_facebook_android_Facebook_DialogListener.hpp>

#include <java_lang_String.hpp>

#include <android_content_Context.hpp>

#include <android_os_Bundle.hpp>

#include <com_facebook_android_Facebook_ServiceListener.hpp>

#include <android_content_ContentResolver.hpp>

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



class com_facebook_android_Facebook_DialogListener;




class com_facebook_android_Facebook_ServiceListener;


class com_facebook_Session;

class com_facebook_android_Facebook 
{
public:

	// Public ConstrucXXX
	com_facebook_android_Facebook(AndroidCXX::java_lang_String const& arg0);
	com_facebook_android_Facebook(const com_facebook_android_Facebook& cc);
	com_facebook_android_Facebook(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_android_Facebook();
	// Functions
	virtual void  authorizeCallback(int const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2) ;
	virtual void  authorize(AndroidCXX::android_app_Activity const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1,FacebookCXX::com_facebook_android_Facebook_DialogListener const& arg2) ;
	virtual void  authorize(AndroidCXX::android_app_Activity const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1,int const& arg2,FacebookCXX::com_facebook_android_Facebook_DialogListener const& arg3) ;
	virtual void  authorize(AndroidCXX::android_app_Activity const& arg0,FacebookCXX::com_facebook_android_Facebook_DialogListener const& arg1) ;
	virtual void  dialog(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2,FacebookCXX::com_facebook_android_Facebook_DialogListener const& arg3) ;
	virtual void  dialog(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,FacebookCXX::com_facebook_android_Facebook_DialogListener const& arg2) ;
	virtual bool  extendAccessTokenIfNeeded(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_android_Facebook_ServiceListener const& arg1) ;
	virtual bool  extendAccessToken(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_android_Facebook_ServiceListener const& arg1) ;
	virtual long  getAccessExpires() ;
	virtual AndroidCXX::java_lang_String * getAccessToken() ;
	virtual AndroidCXX::java_lang_String * getAppId() ;
	static AndroidCXX::java_lang_String * getAttributionId(AndroidCXX::android_content_ContentResolver const& arg0) ;
	virtual long  getLastAccessUpdate() ;
	virtual FacebookCXX::com_facebook_Session * getSession() ;
	virtual bool  getShouldAutoPublishInstall() ;
	virtual bool  isSessionValid() ;
	virtual AndroidCXX::java_lang_String * logout(AndroidCXX::android_content_Context const& arg0) ;
	virtual bool  publishInstall(AndroidCXX::android_content_Context const& arg0) ;
	virtual AndroidCXX::java_lang_String * request(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual AndroidCXX::java_lang_String * request(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Bundle const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual AndroidCXX::java_lang_String * request(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual AndroidCXX::java_lang_String * request(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setAccessExpiresIn(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setAccessExpires(long const& arg0) ;
	virtual void  setAccessToken(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setAppId(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setSession(FacebookCXX::com_facebook_Session const& arg0) ;
	virtual void  setShouldAutoPublishInstall(bool const& arg0) ;
	virtual void  setTokenFromCache(AndroidCXX::java_lang_String const& arg0,long const& arg1,long const& arg2) ;
	virtual bool  shouldExtendAccessToken() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_Facebook