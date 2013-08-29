/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <com_facebook_SessionDefaultAudience.hpp>

#include <com_facebook_SessionLoginBehavior.hpp>

#include <java_util_List.hpp>

#include <java_lang_String.hpp>

#include <android_app_Activity.hpp>

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








class com_facebook_Session_OpenRequest : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_Session_OpenRequest(AndroidCXX::android_app_Activity const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_Session_OpenRequest(AndroidCXX::android_support_v4_app_Fragment const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_Session_OpenRequest(const com_facebook_Session_OpenRequest& cc);
	com_facebook_Session_OpenRequest(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Session_OpenRequest();
	// Functions
	virtual FacebookCXX::com_facebook_Session_OpenRequest * setCallback(FacebookCXX::com_facebook_Session_StatusCallback const& arg0) ;
	virtual FacebookCXX::com_facebook_Session_OpenRequest * setDefaultAudience(com_facebook_SessionDefaultAudience::com_facebook_SessionDefaultAudience const& arg0) ;
	virtual FacebookCXX::com_facebook_Session_OpenRequest * setLoginBehavior(com_facebook_SessionLoginBehavior::com_facebook_SessionLoginBehavior const& arg0) ;
	virtual FacebookCXX::com_facebook_Session_OpenRequest * setPermissions(AndroidCXX::java_util_List const& arg0) ;
	virtual FacebookCXX::com_facebook_Session_OpenRequest * setRequestCode(int const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_OpenRequest