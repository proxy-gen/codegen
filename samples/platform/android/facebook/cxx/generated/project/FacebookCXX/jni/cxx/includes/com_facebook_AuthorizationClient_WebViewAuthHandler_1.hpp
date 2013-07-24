/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#ifndef _com_facebook_AuthorizationClient_WebViewAuthHandler_1
#define _com_facebook_AuthorizationClient_WebViewAuthHandler_1
//
// Scroll Down 
//


#include <android_os_Bundle.hpp>

#include <com_facebook_FacebookException.hpp>

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


class com_facebook_FacebookException;

class com_facebook_AuthorizationClient_WebViewAuthHandler_1
{
public:

	com_facebook_AuthorizationClient_WebViewAuthHandler_1(const com_facebook_AuthorizationClient_WebViewAuthHandler_1& cc);
	com_facebook_AuthorizationClient_WebViewAuthHandler_1(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// com_facebook_AuthorizationClient_WebViewAuthHandler_1();
	// 
	// Default Destructor
	virtual ~com_facebook_AuthorizationClient_WebViewAuthHandler_1();
	// Functions
	 void onComplete(AndroidCXX::android_os_Bundle& arg0,FacebookCXX::com_facebook_FacebookException& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_AuthorizationClient_WebViewAuthHandler_1