/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			


#ifndef _android_os_CancellationSignal
#define _android_os_CancellationSignal






#include <android_os_CancellationSignal_OnCancelListener.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_os_CancellationSignal
{
public:
 void cancel();
 bool isCanceled();
 void throwIfCanceled();
 void setOnCancelListener(android_os_CancellationSignal_OnCancelListener& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_CancellationSignal