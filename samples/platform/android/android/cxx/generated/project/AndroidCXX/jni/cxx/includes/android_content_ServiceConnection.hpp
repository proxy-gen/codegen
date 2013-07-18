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
 void onServiceConnected(android_content_ComponentName& arg0,android_os_IBinder& arg1);
 void onServiceDisconnected(android_content_ComponentName& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ServiceConnection