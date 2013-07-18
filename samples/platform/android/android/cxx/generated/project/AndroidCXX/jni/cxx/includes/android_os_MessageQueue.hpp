/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			


#ifndef _android_os_MessageQueue
#define _android_os_MessageQueue




#include <android_os_MessageQueue_IdleHandler.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_os_MessageQueue
{
public:
 void addIdleHandler(android_os_MessageQueue_IdleHandler& arg0);
 void removeIdleHandler(android_os_MessageQueue_IdleHandler& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_MessageQueue