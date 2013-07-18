/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
 			
 			
 			


#ifndef _android_app_Application_ActivityLifecycleCallbacks
#define _android_app_Application_ActivityLifecycleCallbacks









#include <android_app_Activity.hpp>
#include <android_os_Bundle.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_app_Application_ActivityLifecycleCallbacks
{
public:
	void onActivityCreated(android_app_Activity& arg0,android_os_Bundle& arg1);
	void onActivityStarted(android_app_Activity& arg0);
	void onActivityResumed(android_app_Activity& arg0);
	void onActivityPaused(android_app_Activity& arg0);
	void onActivityStopped(android_app_Activity& arg0);
	void onActivitySaveInstanceState(android_app_Activity& arg0,android_os_Bundle& arg1);
	void onActivityDestroyed(android_app_Activity& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Application_ActivityLifecycleCallbacks