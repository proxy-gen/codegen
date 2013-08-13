/*
 * Header (Instance CXX)
 * Author: codegen
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
	android_widget_RemoteViewsService(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_RemoteViewsService();
	// Functions
	virtual AndroidCXX::android_os_IBinder * onBind(AndroidCXX::android_content_Intent const& arg0) ;
	virtual AndroidCXX::android_widget_RemoteViewsService_RemoteViewsFactory * onGetViewFactory(AndroidCXX::android_content_Intent const& arg0) ;

protected:
	android_widget_RemoteViewsService();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RemoteViewsService