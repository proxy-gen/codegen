/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 

























// Generated Code 

#ifndef _android_app_Service
#define _android_app_Service
//
// Scroll Down 
//



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

class android_app_Application;

class android_content_Intent;

class android_os_IBinder;

class android_content_res_Configuration;

class android_app_Notification;

class android_app_Service : public android_content_ComponentCallbacks2
{
public:

	android_app_Service(const android_app_Service& cc);
	android_app_Service(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_Service();
	// Functions
	virtual AndroidCXX::android_app_Application * getApplication() ;
	virtual AndroidCXX::android_os_IBinder * onBind(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual void  onCreate() ;
	virtual void  onDestroy() ;
	virtual void  onLowMemory() ;
	virtual void  onRebind(AndroidCXX::android_content_Intent const& arg0) ;
	virtual int  onStartCommand(AndroidCXX::android_content_Intent const& arg0,int const& arg1,int const& arg2) ;
	virtual void  onStart(AndroidCXX::android_content_Intent const& arg0,int const& arg1) ;
	virtual void  onTaskRemoved(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  onTrimMemory(int const& arg0) ;
	virtual bool  onUnbind(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  startForeground(int const& arg0,AndroidCXX::android_app_Notification const& arg1) ;
	virtual void  stopForeground(bool const& arg0) ;
	virtual void  stopSelf(int const& arg0) ;
	virtual void  stopSelf() ;
	virtual bool  stopSelfResult(int const& arg0) ;

protected:
	android_app_Service();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Service