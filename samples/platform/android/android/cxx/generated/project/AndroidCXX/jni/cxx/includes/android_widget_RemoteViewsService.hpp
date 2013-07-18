/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		


#ifndef _android_widget_RemoteViewsService
#define _android_widget_RemoteViewsService




#include <android_widget_RemoteViewsService_RemoteViewsFactory.hpp>
#include <android_os_IBinder.hpp>
#include <android_content_Intent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_RemoteViewsService
{
public:
 android_os_IBinder onBind(android_content_Intent& arg0);
 android_widget_RemoteViewsService_RemoteViewsFactory onGetViewFactory(android_content_Intent& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RemoteViewsService