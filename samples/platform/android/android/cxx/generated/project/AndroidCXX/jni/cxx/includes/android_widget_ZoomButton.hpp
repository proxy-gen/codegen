/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			


#ifndef _android_widget_ZoomButton
#define _android_widget_ZoomButton










#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_view_View.hpp>
#include <android_view_MotionEvent.hpp>
#include <android_view_KeyEvent.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_ZoomButton
{
public:
 bool onKeyUp(int& arg0,android_view_KeyEvent& arg1);
 bool onTouchEvent(android_view_MotionEvent& arg0);
 bool dispatchUnhandledMove(android_view_View& arg0,int& arg1);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setEnabled(bool& arg0);
 bool onLongClick(android_view_View& arg0);
 void setZoomSpeed(long& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ZoomButton