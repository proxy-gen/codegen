/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 

















// Generated Code 

#ifndef _android_app_Application
#define _android_app_Application
//
// Scroll Down 
//


#include <android_content_res_Configuration.hpp>

#include <android_content_ComponentCallbacks.hpp>

#include <android_app_Application_ActivityLifecycleCallbacks.hpp>

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
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_content_res_Configuration;

class android_content_ComponentCallbacks;

class android_app_Application_ActivityLifecycleCallbacks;

class android_app_Application
{
public:

	android_app_Application(const android_app_Application& cc);
	android_app_Application(void * proxy);
	// Public Constructors
	android_app_Application();
	// Default Destructor
	virtual ~android_app_Application();
	// Functions
	 void onCreate();
	 void onConfigurationChanged(AndroidCXX::android_content_res_Configuration& arg0);
	 void onLowMemory();
	 void registerComponentCallbacks(AndroidCXX::android_content_ComponentCallbacks& arg0);
	 void unregisterComponentCallbacks(AndroidCXX::android_content_ComponentCallbacks& arg0);
	 void onTrimMemory(int& arg0);
	 void onTerminate();
	 void registerActivityLifecycleCallbacks(AndroidCXX::android_app_Application_ActivityLifecycleCallbacks& arg0);
	 void unregisterActivityLifecycleCallbacks(AndroidCXX::android_app_Application_ActivityLifecycleCallbacks& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Application