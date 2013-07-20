/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 

// Generated Code 

#ifndef _android_widget_RadioButton
#define _android_widget_RadioButton
//
// Scroll Down 
//






#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

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

class android_widget_RadioButton
{
public:
	android_widget_RadioButton(const android_widget_RadioButton& cc);
	android_widget_RadioButton(void * proxy);
	virtual ~android_widget_RadioButton();
	 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void toggle();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RadioButton