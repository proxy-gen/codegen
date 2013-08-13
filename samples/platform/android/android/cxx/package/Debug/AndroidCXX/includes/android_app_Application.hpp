/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_content_ComponentCallbacks2.hpp>

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

class android_app_Application : public android_content_ComponentCallbacks2
{
public:

	// Public ConstrucXXX
	android_app_Application();
	android_app_Application(const android_app_Application& cc);
	android_app_Application(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_Application();
	// Functions
	virtual void  onCreate() ;
	virtual void  onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual void  onLowMemory() ;
	virtual void  onTrimMemory(int const& arg0) ;
	virtual void  registerComponentCallbacks(AndroidCXX::android_content_ComponentCallbacks const& arg0) ;
	virtual void  unregisterComponentCallbacks(AndroidCXX::android_content_ComponentCallbacks const& arg0) ;
	virtual void  onTerminate() ;
	virtual void  registerActivityLifecycleCallbacks(AndroidCXX::android_app_Application_ActivityLifecycleCallbacks const& arg0) ;
	virtual void  unregisterActivityLifecycleCallbacks(AndroidCXX::android_app_Application_ActivityLifecycleCallbacks const& arg0) ;
	virtual void  registerOnProvideAssistDataListener(AndroidCXX::android_app_Application_OnProvideAssistDataListener const& arg0) ;
	virtual void  unregisterOnProvideAssistDataListener(AndroidCXX::android_app_Application_OnProvideAssistDataListener const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Application