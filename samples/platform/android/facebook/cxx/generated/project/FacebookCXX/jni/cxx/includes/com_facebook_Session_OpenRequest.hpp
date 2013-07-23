/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
	
	
 		 
 	
	
 		 
 		 
	


 		 
 		 












// Generated Code 

#ifndef _com_facebook_Session_OpenRequest
#define _com_facebook_Session_OpenRequest
//
// Scroll Down 
//


#include <com_facebook_Session_StatusCallback.hpp>


#include <com_facebook_SessionLoginBehavior.hpp>

#include <java_util_List.hpp>

#include <java_lang_String.hpp>

#include <com_facebook_SessionDefaultAudience.hpp>

#include <android_app_Activity.hpp>

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

class com_facebook_Session_OpenRequest;







class com_facebook_Session_OpenRequest
{
public:

	com_facebook_Session_OpenRequest(const com_facebook_Session_OpenRequest& cc);
	com_facebook_Session_OpenRequest(void * proxy);
	// Public Constructors
	com_facebook_Session_OpenRequest(AndroidCXX::android_app_Activity& arg0);
	com_facebook_Session_OpenRequest(AndroidCXX::android_support_v4_app_Fragment& arg0);
	com_facebook_Session_OpenRequest();
	// Default Destructor
	virtual ~com_facebook_Session_OpenRequest();
	// Functions
	 FacebookCXX::com_facebook_Session_OpenRequest setCallback(FacebookCXX::com_facebook_Session_StatusCallback& arg0);
	 FacebookCXX::com_facebook_Session_OpenRequest setLoginBehavior(COM_FACEBOOK_SESSIONLOGINBEHAVIOR::com_facebook_SessionLoginBehavior& arg0);
	 FacebookCXX::com_facebook_Session_OpenRequest setRequestCode(int& arg0);
	 FacebookCXX::com_facebook_Session_OpenRequest setPermissions(AndroidCXX::java_util_List& arg0);
	 FacebookCXX::com_facebook_Session_OpenRequest setDefaultAudience(COM_FACEBOOK_SESSIONDEFAULTAUDIENCE::com_facebook_SessionDefaultAudience& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_OpenRequest