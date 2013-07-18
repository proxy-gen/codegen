/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
 			
		
 			
		
		
 			
		
 			

// Generated Code 

#ifndef _android_widget_Switch
#define _android_widget_Switch
//
// Scroll Down 
//






























#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_content_Context.hpp>

#include <android_graphics_Typeface.hpp>

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

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_content_Context;

class android_graphics_Typeface;

class android_graphics_drawable_Drawable;

class java_lang_CharSequence;

class android_widget_Switch
{
public:
 bool onTouchEvent(android_view_MotionEvent& arg0);
 void jumpDrawablesToCurrentState();
 void onPopulateAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void onMeasure(int& arg0);
 void setChecked(bool& arg0);
 int getCompoundPaddingLeft();
 int getCompoundPaddingRight();
 void setSwitchTextAppearance(android_content_Context& arg0,int& arg1);
 void setSwitchTypeface(android_graphics_Typeface& arg0,int& arg1);
 void setSwitchPadding(int& arg0);
 int getSwitchPadding();
 void setSwitchMinWidth(int& arg0);
 int getSwitchMinWidth();
 void setThumbTextPadding(int& arg0);
 int getThumbTextPadding();
 void setTrackDrawable(android_graphics_drawable_Drawable& arg0);
 void setTrackResource(int& arg0);
 android_graphics_drawable_Drawable getTrackDrawable();
 void setThumbDrawable(android_graphics_drawable_Drawable& arg0);
 void setThumbResource(int& arg0);
 android_graphics_drawable_Drawable getThumbDrawable();
 java_lang_CharSequence getTextOn();
 void setTextOn(java_lang_CharSequence& arg0);
 java_lang_CharSequence getTextOff();
 void setTextOff(java_lang_CharSequence& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Switch