/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 










// Generated Code 

#ifndef _com_facebook_Session_TokenRefreshRequest
#define _com_facebook_Session_TokenRefreshRequest
//
// Scroll Down 
//


#include <android_content_ComponentName.hpp>

#include <android_os_IBinder.hpp>

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

class android_content_ComponentName;

class android_os_IBinder;

class com_facebook_Session_TokenRefreshRequest
{
public:

	com_facebook_Session_TokenRefreshRequest(const com_facebook_Session_TokenRefreshRequest& cc);
	com_facebook_Session_TokenRefreshRequest(void * proxy);
	// Public Constructors
	com_facebook_Session_TokenRefreshRequest();
	// Default Destructor
	virtual ~com_facebook_Session_TokenRefreshRequest();
	// Functions
	 void bind();
	 void onServiceConnected(FacebookCXX::android_content_ComponentName& arg0,FacebookCXX::android_os_IBinder& arg1);
	 void onServiceDisconnected(FacebookCXX::android_content_ComponentName& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_TokenRefreshRequest