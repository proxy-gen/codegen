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

// Forward Declarations



class com_facebook_Session_TokenRefreshRequest
{
public:

	com_facebook_Session_TokenRefreshRequest(const com_facebook_Session_TokenRefreshRequest& cc);
	com_facebook_Session_TokenRefreshRequest(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Session_TokenRefreshRequest();
	// Functions
	 void bind();
	 void onServiceConnected(AndroidCXX::android_content_ComponentName const& arg0,AndroidCXX::android_os_IBinder const& arg1);
	 void onServiceDisconnected(AndroidCXX::android_content_ComponentName const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_TokenRefreshRequest