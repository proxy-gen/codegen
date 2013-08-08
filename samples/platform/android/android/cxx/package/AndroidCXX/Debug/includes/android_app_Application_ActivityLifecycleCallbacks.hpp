/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 














// Generated Code 

#ifndef _android_app_Application_ActivityLifecycleCallbacks
#define _android_app_Application_ActivityLifecycleCallbacks
//
// Scroll Down 
//


#include <android_app_Activity.hpp>

#include <android_os_Bundle.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_app_Activity;

class android_os_Bundle;

class android_app_Application_ActivityLifecycleCallbacks
{
public:

	android_app_Application_ActivityLifecycleCallbacks(const android_app_Application_ActivityLifecycleCallbacks& cc);
	android_app_Application_ActivityLifecycleCallbacks(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_Application_ActivityLifecycleCallbacks();
	// Functions
	 void onActivityCreated(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void onActivityStarted(AndroidCXX::android_app_Activity const& arg0);
	 void onActivityResumed(AndroidCXX::android_app_Activity const& arg0);
	 void onActivityPaused(AndroidCXX::android_app_Activity const& arg0);
	 void onActivityStopped(AndroidCXX::android_app_Activity const& arg0);
	 void onActivitySaveInstanceState(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void onActivityDestroyed(AndroidCXX::android_app_Activity const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Application_ActivityLifecycleCallbacks