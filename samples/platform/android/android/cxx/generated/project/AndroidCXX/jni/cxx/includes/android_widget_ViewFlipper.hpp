/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			


#ifndef _android_widget_ViewFlipper
#define _android_widget_ViewFlipper










#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
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

class android_widget_ViewFlipper
{
public:
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setFlipInterval(int& arg0);
 void startFlipping();
 void stopFlipping();
 bool isFlipping();
 void setAutoStart(bool& arg0);
 bool isAutoStart();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ViewFlipper