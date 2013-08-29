/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <com_facebook_Session_StatusCallback.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>

#include <java_util_Date.hpp>

#include <java_util_List.hpp>

#include <com_facebook_SessionState.hpp>

#include <android_app_Activity.hpp>

#include <android_content_Intent.hpp>

#include <android_content_Context.hpp>

#include <android_support_v4_app_Fragment.hpp>

#include <com_facebook_AccessToken.hpp>

#include <com_facebook_Session_OpenRequest.hpp>

#include <com_facebook_Session_NewPermissionsRequest.hpp>

#include <com_facebook_TokenCachingStrategy.hpp>


#include <java_io_Serializable.hpp>

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

class com_facebook_Session_StatusCallback;












class com_facebook_AccessToken;

class com_facebook_Session_OpenRequest;

class com_facebook_Session_NewPermissionsRequest;

class com_facebook_TokenCachingStrategy;

class com_facebook_Session : public AndroidCXX::java_io_Serializable
{
public:

	// Public Constructor
	com_facebook_Session(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_Session(const com_facebook_Session& cc);
	com_facebook_Session(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Session();
	// Functions
	virtual void  addCallback(FacebookCXX::com_facebook_Session_StatusCallback const& arg0) ;
	virtual void  closeAndClearTokenInformation() ;
	virtual void  close() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * getAccessToken() ;
	static FacebookCXX::com_facebook_Session * getActiveSession() ;
	virtual AndroidCXX::java_lang_String * getApplicationId() ;
	virtual AndroidCXX::android_os_Bundle * getAuthorizationBundle() ;
	virtual AndroidCXX::java_util_Date * getExpirationDate() ;
	virtual AndroidCXX::java_util_List * getPermissions() ;
	virtual com_facebook_SessionState::com_facebook_SessionState  getState() ;
	virtual int  hashCode() ;
	virtual bool  isClosed() ;
	virtual bool  isOpened() ;
	virtual bool  onActivityResult(AndroidCXX::android_app_Activity const& arg0,int const& arg1,int const& arg2,AndroidCXX::android_content_Intent const& arg3) ;
	static FacebookCXX::com_facebook_Session * openActiveSessionFromCache(AndroidCXX::android_content_Context const& arg0) ;
	static FacebookCXX::com_facebook_Session * openActiveSession(AndroidCXX::android_app_Activity const& arg0,bool const& arg1,FacebookCXX::com_facebook_Session_StatusCallback const& arg2) ;
	static FacebookCXX::com_facebook_Session * openActiveSession(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_support_v4_app_Fragment const& arg1,bool const& arg2,FacebookCXX::com_facebook_Session_StatusCallback const& arg3) ;
	static FacebookCXX::com_facebook_Session * openActiveSessionWithAccessToken(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_AccessToken const& arg1,FacebookCXX::com_facebook_Session_StatusCallback const& arg2) ;
	virtual void  openForPublish(FacebookCXX::com_facebook_Session_OpenRequest const& arg0) ;
	virtual void  openForRead(FacebookCXX::com_facebook_Session_OpenRequest const& arg0) ;
	virtual void  open(FacebookCXX::com_facebook_AccessToken const& arg0,FacebookCXX::com_facebook_Session_StatusCallback const& arg1) ;
	virtual void  removeCallback(FacebookCXX::com_facebook_Session_StatusCallback const& arg0) ;
	virtual void  requestNewPublishPermissions(FacebookCXX::com_facebook_Session_NewPermissionsRequest const& arg0) ;
	virtual void  requestNewReadPermissions(FacebookCXX::com_facebook_Session_NewPermissionsRequest const& arg0) ;
	static FacebookCXX::com_facebook_Session * restoreSession(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_TokenCachingStrategy const& arg1,FacebookCXX::com_facebook_Session_StatusCallback const& arg2,AndroidCXX::android_os_Bundle const& arg3) ;
	static void  saveSession(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	static void  setActiveSession(FacebookCXX::com_facebook_Session const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session