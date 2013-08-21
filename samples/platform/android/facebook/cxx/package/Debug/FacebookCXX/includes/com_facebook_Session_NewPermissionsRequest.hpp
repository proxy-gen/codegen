/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <com_facebook_SessionDefaultAudience.hpp>

#include <com_facebook_SessionLoginBehavior.hpp>

#include <android_app_Activity.hpp>

#include <java_util_List.hpp>

#include <java_lang_String.hpp>

#include <android_support_v4_app_Fragment.hpp>


#include <java_lang_Object.hpp>

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








class com_facebook_Session_NewPermissionsRequest : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	com_facebook_Session_NewPermissionsRequest(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::java_util_List const& arg1);
	com_facebook_Session_NewPermissionsRequest(AndroidCXX::android_support_v4_app_Fragment const& arg0,AndroidCXX::java_util_List const& arg1);
	com_facebook_Session_NewPermissionsRequest(const com_facebook_Session_NewPermissionsRequest& cc);
	com_facebook_Session_NewPermissionsRequest(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Session_NewPermissionsRequest();
	// Functions
	virtual FacebookCXX::com_facebook_Session_NewPermissionsRequest * setCallback(FacebookCXX::com_facebook_Session_StatusCallback const& arg0) ;
	virtual FacebookCXX::com_facebook_Session_NewPermissionsRequest * setDefaultAudience(com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience const& arg0) ;
	virtual FacebookCXX::com_facebook_Session_NewPermissionsRequest * setLoginBehavior(com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior const& arg0) ;
	virtual FacebookCXX::com_facebook_Session_NewPermissionsRequest * setRequestCode(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_NewPermissionsRequest