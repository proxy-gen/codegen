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

#include <android_app_Application_OnProvideAssistDataListener.hpp>

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

class android_content_res_Configuration;

class android_content_ComponentCallbacks;

class android_app_Application_ActivityLifecycleCallbacks;

class android_app_Application_OnProvideAssistDataListener;

class android_app_Application
{
public:

	android_app_Application(const android_app_Application& cc);
	android_app_Application(Proxy proxy);
	// Public Constructors
	android_app_Application();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_Application();
	// Functions
	 void onCreate();
	 void onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0);
	 void onLowMemory();
	 void registerComponentCallbacks(AndroidCXX::android_content_ComponentCallbacks const& arg0);
	 void unregisterComponentCallbacks(AndroidCXX::android_content_ComponentCallbacks const& arg0);
	 void onTrimMemory(int const& arg0);
	 void onTerminate();
	 void registerActivityLifecycleCallbacks(AndroidCXX::android_app_Application_ActivityLifecycleCallbacks const& arg0);
	 void unregisterActivityLifecycleCallbacks(AndroidCXX::android_app_Application_ActivityLifecycleCallbacks const& arg0);
	 void registerOnProvideAssistDataListener(AndroidCXX::android_app_Application_OnProvideAssistDataListener const& arg0);
	 void unregisterOnProvideAssistDataListener(AndroidCXX::android_app_Application_OnProvideAssistDataListener const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Application