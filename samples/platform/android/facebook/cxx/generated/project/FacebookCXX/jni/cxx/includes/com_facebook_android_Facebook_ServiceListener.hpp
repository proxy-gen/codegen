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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_os_Bundle;

class com_facebook_android_FacebookError;

class java_lang_Error;

class com_facebook_android_Facebook_ServiceListener
{
public:

	com_facebook_android_Facebook_ServiceListener(const com_facebook_android_Facebook_ServiceListener& cc);
	com_facebook_android_Facebook_ServiceListener(void * proxy);
	// Public Constructors
	com_facebook_android_Facebook_ServiceListener();
	// Default Destructor
	virtual ~com_facebook_android_Facebook_ServiceListener();
	// Functions
	 void onComplete(FacebookCXX::android_os_Bundle& arg0);
	 void onFacebookError(FacebookCXX::com_facebook_android_FacebookError& arg0);
	 void onError(FacebookCXX::java_lang_Error& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_Facebook_ServiceListener