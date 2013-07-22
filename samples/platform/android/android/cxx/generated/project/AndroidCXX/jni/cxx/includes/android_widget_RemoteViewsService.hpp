/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
	










// Generated Code 

#ifndef _android_widget_RemoteViewsService
#define _android_widget_RemoteViewsService
//
// Scroll Down 
//


#include <android_content_Intent.hpp>

#include <android_os_IBinder.hpp>

#include <android_widget_RemoteViewsService_RemoteViewsFactory.hpp>

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

class android_content_Intent;

class android_os_IBinder;

class android_widget_RemoteViewsService_RemoteViewsFactory;

class android_widget_RemoteViewsService
{
public:

	android_widget_RemoteViewsService(const android_widget_RemoteViewsService& cc);
	android_widget_RemoteViewsService(void * proxy);
	// Public Constructors
	android_widget_RemoteViewsService();
	// Default Destructor
	virtual ~android_widget_RemoteViewsService();
	// Functions
	 AndroidCXX::android_os_IBinder onBind(AndroidCXX::android_content_Intent& arg0);
	 AndroidCXX::android_widget_RemoteViewsService_RemoteViewsFactory onGetViewFactory(AndroidCXX::android_content_Intent& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RemoteViewsService