/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	
 		 
	
 		 

// Generated Code 

#ifndef _android_widget_ToggleButton
#define _android_widget_ToggleButton
//
// Scroll Down 
//











#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <java_lang_CharSequence.hpp>

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

class android_graphics_drawable_Drawable;

class java_lang_CharSequence;

class android_widget_ToggleButton
{
public:
	 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setBackgroundDrawable(android_graphics_drawable_Drawable& arg0);
	 void setChecked(bool& arg0);
	 java_lang_CharSequence *  getTextOn();
	 void setTextOn(java_lang_CharSequence& arg0);
	 java_lang_CharSequence *  getTextOff();
	 void setTextOff(java_lang_CharSequence& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ToggleButton