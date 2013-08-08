/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#ifndef _com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver
#define _com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver
//
// Scroll Down 
//


#include <android_content_Context.hpp>

#include <android_content_Intent.hpp>

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



class com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver
{
public:

	com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver(const com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver& cc);
	com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver();
	// Functions
	 void onReceive(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_content_Intent const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver