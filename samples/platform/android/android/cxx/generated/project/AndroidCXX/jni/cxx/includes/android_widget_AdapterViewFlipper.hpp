/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			

// Generated Code 

#ifndef _android_widget_AdapterViewFlipper
#define _android_widget_AdapterViewFlipper
//
// Scroll Down 
//
















#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_Adapter.hpp>

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

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_Adapter;

class android_widget_AdapterViewFlipper
{
public:
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setAdapter(android_widget_Adapter& arg0);
 void fyiWillBeAdvancedByHostKThx();
 void showNext();
 void showPrevious();
 int getFlipInterval();
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

#endif // _android_widget_AdapterViewFlipper