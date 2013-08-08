/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 










// Generated Code 

#ifndef _com_facebook_android_Facebook_ServiceListener
#define _com_facebook_android_Facebook_ServiceListener
//
// Scroll Down 
//


#include <android_os_Bundle.hpp>

#include <com_facebook_android_FacebookError.hpp>

#include <java_lang_Error.hpp>

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


class com_facebook_android_FacebookError;


class com_facebook_android_Facebook_ServiceListener
{
public:

	com_facebook_android_Facebook_ServiceListener(const com_facebook_android_Facebook_ServiceListener& cc);
	com_facebook_android_Facebook_ServiceListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_android_Facebook_ServiceListener();
	// Functions
	 void onComplete(AndroidCXX::android_os_Bundle const& arg0);
	 void onFacebookError(FacebookCXX::com_facebook_android_FacebookError const& arg0);
	 void onError(AndroidCXX::java_lang_Error const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_Facebook_ServiceListener