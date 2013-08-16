/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_lang_Object.hpp>

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

class android_app_Application_ActivityLifecycleCallbacks : public java_lang_Object
{
public:

	android_app_Application_ActivityLifecycleCallbacks(const android_app_Application_ActivityLifecycleCallbacks& cc);
	android_app_Application_ActivityLifecycleCallbacks(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_Application_ActivityLifecycleCallbacks();
	// Functions
	virtual void  onActivityCreated(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  onActivityDestroyed(AndroidCXX::android_app_Activity const& arg0) ;
	virtual void  onActivityPaused(AndroidCXX::android_app_Activity const& arg0) ;
	virtual void  onActivityResumed(AndroidCXX::android_app_Activity const& arg0) ;
	virtual void  onActivitySaveInstanceState(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  onActivityStarted(AndroidCXX::android_app_Activity const& arg0) ;
	virtual void  onActivityStopped(AndroidCXX::android_app_Activity const& arg0) ;

protected:
	android_app_Application_ActivityLifecycleCallbacks();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Application_ActivityLifecycleCallbacks