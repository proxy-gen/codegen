/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
		

// Generated Code 

#ifndef _android_widget_ViewSwitcher
#define _android_widget_ViewSwitcher
//
// Scroll Down 
//









#include <android_widget_ViewSwitcher_ViewFactory.hpp>

#include <android_view_View.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

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

class android_widget_ViewSwitcher_ViewFactory;

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_ViewSwitcher
{
public:
 void reset();
 void setFactory(android_widget_ViewSwitcher_ViewFactory& arg0);
 void addView(android_view_View& arg0,int& arg1,android_view_ViewGroup_LayoutParams& arg2);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 android_view_View getNextView();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ViewSwitcher