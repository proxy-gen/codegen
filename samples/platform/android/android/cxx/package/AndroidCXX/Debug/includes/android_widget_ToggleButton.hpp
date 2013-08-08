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

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_graphics_drawable_Drawable;

class java_lang_CharSequence;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ToggleButton
{
public:

	android_widget_ToggleButton(const android_widget_ToggleButton& cc);
	android_widget_ToggleButton(Proxy proxy);
	// Public Constructors
	android_widget_ToggleButton(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_ToggleButton(AndroidCXX::android_content_Context const& arg0);
	android_widget_ToggleButton(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ToggleButton();
	// Functions
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void setBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setChecked(bool const& arg0);
	 AndroidCXX::java_lang_CharSequence getTextOn();
	 void setTextOn(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::java_lang_CharSequence getTextOff();
	 void setTextOff(AndroidCXX::java_lang_CharSequence const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ToggleButton