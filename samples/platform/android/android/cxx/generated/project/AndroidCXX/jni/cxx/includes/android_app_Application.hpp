/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			


#ifndef _android_app_Application
#define _android_app_Application











#include <android_content_res_Configuration.hpp>
#include <android_app_Application_ActivityLifecycleCallbacks.hpp>
#include <android_content_ComponentCallbacks.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_app_Application
{
public:
 void onCreate();
 void onConfigurationChanged(android_content_res_Configuration& arg0);
 void onLowMemory();
 void registerComponentCallbacks(android_content_ComponentCallbacks& arg0);
 void unregisterComponentCallbacks(android_content_ComponentCallbacks& arg0);
 void onTrimMemory(int& arg0);
 void onTerminate();
 void registerActivityLifecycleCallbacks(android_app_Application_ActivityLifecycleCallbacks& arg0);
 void unregisterActivityLifecycleCallbacks(android_app_Application_ActivityLifecycleCallbacks& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Application