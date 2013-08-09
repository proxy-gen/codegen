/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 
	


 		 
 		 
 		 
 		 
 		 






















// Generated Code 

#ifndef _android_widget_AbsSeekBar
#define _android_widget_AbsSeekBar
//
// Scroll Down 
//


#include <android_view_KeyEvent.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_os_Bundle.hpp>

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

class android_view_KeyEvent;

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_os_Bundle;

class android_graphics_drawable_Drawable;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_AbsSeekBar
{
public:

	android_widget_AbsSeekBar(const android_widget_AbsSeekBar& cc);
	android_widget_AbsSeekBar(Proxy proxy);
	// Public Constructors
	android_widget_AbsSeekBar(AndroidCXX::android_content_Context const& arg0);
	android_widget_AbsSeekBar(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_AbsSeekBar(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AbsSeekBar();
	// Functions
	 bool onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 void jumpDrawablesToCurrentState();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 bool performAccessibilityAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void onRtlPropertiesChanged(int const& arg0);
	 void setMax(int const& arg0);
	 void setThumb(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getThumb();
	 int getThumbOffset();
	 void setThumbOffset(int const& arg0);
	 void setKeyProgressIncrement(int const& arg0);
	 int getKeyProgressIncrement();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AbsSeekBar