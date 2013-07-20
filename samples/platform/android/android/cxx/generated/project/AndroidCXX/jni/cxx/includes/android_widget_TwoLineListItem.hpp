/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
	
	

// Generated Code 

#ifndef _android_widget_TwoLineListItem
#define _android_widget_TwoLineListItem
//
// Scroll Down 
//







#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_TextView.hpp>

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

class android_widget_TextView;

class android_widget_TwoLineListItem
{
public:
	android_widget_TwoLineListItem(const android_widget_TwoLineListItem& cc);
	android_widget_TwoLineListItem(void * proxy);
	virtual ~android_widget_TwoLineListItem();
	 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
	 android_widget_TextView *  getText1();
	 android_widget_TextView *  getText2();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TwoLineListItem