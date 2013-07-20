/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 

// Generated Code 

#ifndef _android_widget_TextSwitcher
#define _android_widget_TextSwitcher
//
// Scroll Down 
//








#include <java_lang_CharSequence.hpp>

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

class java_lang_CharSequence;

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_TextSwitcher
{
public:
	android_widget_TextSwitcher(const android_widget_TextSwitcher& cc);
	android_widget_TextSwitcher(void * proxy);
	virtual ~android_widget_TextSwitcher();
	 void setText(java_lang_CharSequence& arg0);
	 void addView(android_view_View& arg0,int& arg1,android_view_ViewGroup_LayoutParams& arg2);
	 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setCurrentText(java_lang_CharSequence& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TextSwitcher