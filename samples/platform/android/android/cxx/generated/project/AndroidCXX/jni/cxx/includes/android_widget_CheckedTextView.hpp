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

class android_content_Context;

class android_util_AttributeSet;

class android_widget_CheckedTextView
{
public:

	android_widget_CheckedTextView(const android_widget_CheckedTextView& cc);
	android_widget_CheckedTextView(void * proxy);
	// Public Constructors
	android_widget_CheckedTextView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_CheckedTextView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_CheckedTextView(AndroidCXX::android_content_Context& arg0);
	android_widget_CheckedTextView();
	// Default Destructor
	virtual ~android_widget_CheckedTextView();
	// Functions
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void onRtlPropertiesChanged(int& arg0);
	 void setChecked(bool& arg0);
	 bool isChecked();
	 void toggle();
	 void setCheckMarkDrawable(int& arg0);
	 void setCheckMarkDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getCheckMarkDrawable();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CheckedTextView