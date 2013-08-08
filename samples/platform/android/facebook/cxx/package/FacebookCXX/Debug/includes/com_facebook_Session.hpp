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

// Forward Declarations





class com_facebook_AccessToken;

class com_facebook_Session_StatusCallback;





class com_facebook_Session_OpenRequest;

class com_facebook_Session_NewPermissionsRequest;

class com_facebook_Session;


class com_facebook_TokenCachingStrategy;


class com_facebook_Session
{
public:

	com_facebook_Session(const com_facebook_Session& cc);
	com_facebook_Session(Proxy proxy);
	// Public Constructors
	com_facebook_Session(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Session();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::java_util_List getPermissions();
	 com_facebook_SessionState::com_facebook_SessionState getState();
	 void close();
	 void open(FacebookCXX::com_facebook_AccessToken const& arg0,FacebookCXX::com_facebook_Session_StatusCallback const& arg1);
	 bool isClosed();
	 bool onActivityResult(AndroidCXX::android_app_Activity const& arg0,int const& arg1,int const& arg2,AndroidCXX::android_content_Intent const& arg3);
	 AndroidCXX::java_lang_String getApplicationId();
	 void addCallback(FacebookCXX::com_facebook_Session_StatusCallback const& arg0);
	 void closeAndClearTokenInformation();
	 bool isOpened();
	 AndroidCXX::java_lang_String getAccessToken();
	 void removeCallback(FacebookCXX::com_facebook_Session_StatusCallback const& arg0);
	 AndroidCXX::android_os_Bundle getAuthorizationBundle();
	 AndroidCXX::java_util_Date getExpirationDate();
	 void openForRead(FacebookCXX::com_facebook_Session_OpenRequest const& arg0);
	 void openForPublish(FacebookCXX::com_facebook_Session_OpenRequest const& arg0);
	 void requestNewReadPermissions(FacebookCXX::com_facebook_Session_NewPermissionsRequest const& arg0);
	 void requestNewPublishPermissions(FacebookCXX::com_facebook_Session_NewPermissionsRequest const& arg0);
	static void saveSession(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	static FacebookCXX::com_facebook_Session restoreSession(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_TokenCachingStrategy const& arg1,FacebookCXX::com_facebook_Session_StatusCallback const& arg2,AndroidCXX::android_os_Bundle const& arg3);
	static FacebookCXX::com_facebook_Session getActiveSession();
	static void setActiveSession(FacebookCXX::com_facebook_Session const& arg0);
	static FacebookCXX::com_facebook_Session openActiveSessionFromCache(AndroidCXX::android_content_Context const& arg0);
	static FacebookCXX::com_facebook_Session openActiveSession(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_support_v4_app_Fragment const& arg1,bool const& arg2,FacebookCXX::com_facebook_Session_StatusCallback const& arg3);
	static FacebookCXX::com_facebook_Session openActiveSession(AndroidCXX::android_app_Activity const& arg0,bool const& arg1,FacebookCXX::com_facebook_Session_StatusCallback const& arg2);
	static FacebookCXX::com_facebook_Session openActiveSessionWithAccessToken(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_AccessToken const& arg1,FacebookCXX::com_facebook_Session_StatusCallback const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session