/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
	
	
 		 
	


 		 
 		 
 	
 		 
 		 
 		 
 	
 		 











// Generated Code 

#ifndef _com_facebook_Session_NewPermissionsRequest
#define _com_facebook_Session_NewPermissionsRequest
//
// Scroll Down 
//


#include <com_facebook_Session_StatusCallback.hpp>


#include <com_facebook_SessionLoginBehavior.hpp>

#include <com_facebook_SessionDefaultAudience.hpp>

#include <android_app_Activity.hpp>

#include <java_util_List.hpp>

#include <java_lang_String.hpp>

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

class com_facebook_Session_StatusCallback;

class com_facebook_Session_NewPermissionsRequest;







class com_facebook_Session_NewPermissionsRequest
{
public:

	com_facebook_Session_NewPermissionsRequest(const com_facebook_Session_NewPermissionsRequest& cc);
	com_facebook_Session_NewPermissionsRequest(void * proxy);
	// Public Constructors
	com_facebook_Session_NewPermissionsRequest(AndroidCXX::android_app_Activity& arg0,AndroidCXX::java_util_List& arg1);
	com_facebook_Session_NewPermissionsRequest(AndroidCXX::android_support_v4_app_Fragment& arg0,AndroidCXX::java_util_List& arg1);
	// TODO: remove
	// 
	// com_facebook_Session_NewPermissionsRequest();
	// 
	// Default Destructor
	virtual ~com_facebook_Session_NewPermissionsRequest();
	// Functions
	 FacebookCXX::com_facebook_Session_NewPermissionsRequest setCallback(FacebookCXX::com_facebook_Session_StatusCallback& arg0);
	 FacebookCXX::com_facebook_Session_NewPermissionsRequest setLoginBehavior(COM_FACEBOOK_SESSIONLOGINBEHAVIOR::com_facebook_SessionLoginBehavior& arg0);
	 FacebookCXX::com_facebook_Session_NewPermissionsRequest setRequestCode(int& arg0);
	 FacebookCXX::com_facebook_Session_NewPermissionsRequest setDefaultAudience(COM_FACEBOOK_SESSIONDEFAULTAUDIENCE::com_facebook_SessionDefaultAudience& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_NewPermissionsRequest