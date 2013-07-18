/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		

// Generated Code 

#ifndef _android_widget_CheckedTextView
#define _android_widget_CheckedTextView
//
// Scroll Down 
//











#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_graphics_drawable_Drawable.hpp>

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

class android_widget_CheckedTextView
{
public:
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void onRtlPropertiesChanged(int& arg0);
 void setChecked(bool& arg0);
 bool isChecked();
 void toggle();
 void setCheckMarkDrawable(int& arg0,android_graphics_drawable_Drawable& arg1);
 android_graphics_drawable_Drawable getCheckMarkDrawable();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CheckedTextView