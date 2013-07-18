/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
 			
 			

// Generated Code 

#ifndef _android_widget_CompoundButton
#define _android_widget_CompoundButton
//
// Scroll Down 
//
















#include <android_os_Parcelable.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_CompoundButton_OnCheckedChangeListener.hpp>

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

class android_os_Parcelable;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_CompoundButton_OnCheckedChangeListener;

class android_graphics_drawable_Drawable;

class android_widget_CompoundButton
{
public:
 android_os_Parcelable onSaveInstanceState();
 void onRestoreInstanceState(android_os_Parcelable& arg0);
 void jumpDrawablesToCurrentState();
 bool performClick();
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setChecked(bool& arg0);
 bool isChecked();
 void toggle();
 int getCompoundPaddingLeft();
 int getCompoundPaddingRight();
 void setOnCheckedChangeListener(android_widget_CompoundButton_OnCheckedChangeListener& arg0);
 void setButtonDrawable(android_graphics_drawable_Drawable& arg0,int& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CompoundButton