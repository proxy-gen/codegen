/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			


#ifndef _android_widget_StackView
#define _android_widget_StackView











#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_os_Bundle.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_MotionEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_StackView
{
public:
 void advance();
 bool onTouchEvent(android_view_MotionEvent& arg0);
 bool onGenericMotionEvent(android_view_MotionEvent& arg0);
 bool onInterceptTouchEvent(android_view_MotionEvent& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 bool performAccessibilityAction(int& arg0,android_os_Bundle& arg1);
 void showNext();
 void showPrevious();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_StackView