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

#include <android_app_Activity.hpp>


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
	com_facebook_Session_OpenRequest(const com_facebook_Session_OpenRequest& cc);
	com_facebook_Session_OpenRequest(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Session_OpenRequest();
	// Functions
	virtual FacebookCXX::com_facebook_Session_OpenRequest * setCallback(FacebookCXX::com_facebook_Session_StatusCallback const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_OpenRequest