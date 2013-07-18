/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			


#ifndef _android_view_KeyEvent_DispatcherState
#define _android_view_KeyEvent_DispatcherState







#include <java_lang_Object.hpp>
#include <android_view_KeyEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_KeyEvent_DispatcherState
{
public:
 void reset(java_lang_Object& arg0);
 void startTracking(android_view_KeyEvent& arg0,java_lang_Object& arg1);
 bool isTracking(android_view_KeyEvent& arg0);
 void performedLongPress(android_view_KeyEvent& arg0);
 void handleUpEvent(android_view_KeyEvent& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_KeyEvent_DispatcherState