/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 









// Generated Code 

#ifndef _android_content_ServiceConnection
#define _android_content_ServiceConnection
//
// Scroll Down 
//


#include <android_content_ComponentName.hpp>

#include <android_os_IBinder.hpp>

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

class android_content_ComponentName;

class android_os_IBinder;

class android_content_ServiceConnection
{
public:

	android_content_ServiceConnection(const android_content_ServiceConnection& cc);
	android_content_ServiceConnection(void * proxy);
	// Public Constructors
	android_content_ServiceConnection();
	// Default Destructor
	virtual ~android_content_ServiceConnection();
	// Functions
	 void onServiceConnected(AndroidCXX::android_content_ComponentName& arg0,AndroidCXX::android_os_IBinder& arg1);
	 void onServiceDisconnected(AndroidCXX::android_content_ComponentName& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ServiceConnection