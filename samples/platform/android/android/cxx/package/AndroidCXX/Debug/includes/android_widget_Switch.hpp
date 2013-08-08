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

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_content_Context;

class android_graphics_Typeface;

class android_graphics_drawable_Drawable;

class java_lang_CharSequence;

class android_util_AttributeSet;

class android_widget_Switch
{
public:

	android_widget_Switch(const android_widget_Switch& cc);
	android_widget_Switch(Proxy proxy);
	// Public Constructors
	android_widget_Switch(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_Switch(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_Switch(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_Switch();
	// Functions
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 void jumpDrawablesToCurrentState();
	 void onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void onMeasure(int const& arg0,int const& arg1);
	 void setChecked(bool const& arg0);
	 int getCompoundPaddingLeft();
	 int getCompoundPaddingRight();
	 void setSwitchTextAppearance(AndroidCXX::android_content_Context const& arg0,int const& arg1);
	 void setSwitchTypeface(AndroidCXX::android_graphics_Typeface const& arg0,int const& arg1);
	 void setSwitchTypeface(AndroidCXX::android_graphics_Typeface const& arg0);
	 void setSwitchPadding(int const& arg0);
	 int getSwitchPadding();
	 void setSwitchMinWidth(int const& arg0);
	 int getSwitchMinWidth();
	 void setThumbTextPadding(int const& arg0);
	 int getThumbTextPadding();
	 void setTrackDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setTrackResource(int const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getTrackDrawable();
	 void setThumbDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setThumbResource(int const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getThumbDrawable();
	 AndroidCXX::java_lang_CharSequence getTextOn();
	 void setTextOn(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::java_lang_CharSequence getTextOff();
	 void setTextOff(AndroidCXX::java_lang_CharSequence const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Switch