/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_content_BroadcastReceiver.hpp>

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



class com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver : public AndroidCXX::android_content_BroadcastReceiver
{
public:

	// Public Constructor
	com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver(const com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver& cc);
	com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver();
	// Functions
	virtual void  onReceive(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_content_Intent const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver