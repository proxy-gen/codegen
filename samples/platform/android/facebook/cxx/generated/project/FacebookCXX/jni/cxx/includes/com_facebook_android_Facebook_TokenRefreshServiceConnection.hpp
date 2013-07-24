/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 


 		 
 		 
 		 








// Generated Code 

#ifndef _com_facebook_android_Facebook_TokenRefreshServiceConnection
#define _com_facebook_android_Facebook_TokenRefreshServiceConnection
//
// Scroll Down 
//


#include <android_content_ComponentName.hpp>

#include <android_os_IBinder.hpp>

#include <com_facebook_android_Facebook.hpp>

#include <android_content_Context.hpp>

#include <com_facebook_android_Facebook_ServiceListener.hpp>

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



class com_facebook_android_Facebook;


class com_facebook_android_Facebook_ServiceListener;

class com_facebook_android_Facebook_TokenRefreshServiceConnection
{
public:

	com_facebook_android_Facebook_TokenRefreshServiceConnection(const com_facebook_android_Facebook_TokenRefreshServiceConnection& cc);
	com_facebook_android_Facebook_TokenRefreshServiceConnection(void * proxy);
	// Public Constructors
	com_facebook_android_Facebook_TokenRefreshServiceConnection(FacebookCXX::com_facebook_android_Facebook& arg0,AndroidCXX::android_content_Context& arg1,FacebookCXX::com_facebook_android_Facebook_ServiceListener& arg2);
	// TODO: remove
	// 
	// com_facebook_android_Facebook_TokenRefreshServiceConnection();
	// 
	// Default Destructor
	virtual ~com_facebook_android_Facebook_TokenRefreshServiceConnection();
	// Functions
	 void onServiceConnected(AndroidCXX::android_content_ComponentName& arg0,AndroidCXX::android_os_IBinder& arg1);
	 void onServiceDisconnected(AndroidCXX::android_content_ComponentName& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_Facebook_TokenRefreshServiceConnection