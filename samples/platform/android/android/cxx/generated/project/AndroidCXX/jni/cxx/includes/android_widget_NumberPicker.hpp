/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 	
 		 
 	
 		 


 		 
 		 
 		 
 		 
 		 

































// Generated Code 

#ifndef _android_widget_NumberPicker
#define _android_widget_NumberPicker
//
// Scroll Down 
//


#include <android_view_MotionEvent.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeProvider.hpp>

#include <android_widget_NumberPicker_OnScrollListener.hpp>

#include <android_widget_NumberPicker_OnValueChangeListener.hpp>

#include <android_widget_NumberPicker_Formatter.hpp>

#include <java_lang_String.hpp>

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

class android_view_MotionEvent;

class android_view_KeyEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeProvider;

class android_widget_NumberPicker_OnScrollListener;

class android_widget_NumberPicker_OnValueChangeListener;

class android_widget_NumberPicker_Formatter;

class java_lang_String;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_NumberPicker
{
public:

	android_widget_NumberPicker(const android_widget_NumberPicker& cc);
	android_widget_NumberPicker(void * proxy);
	// Public Constructors
	android_widget_NumberPicker(AndroidCXX::android_content_Context& arg0);
	android_widget_NumberPicker(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_NumberPicker(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	// TODO: remove
	// 
	// android_widget_NumberPicker();
	// 
	// Default Destructor
	virtual ~android_widget_NumberPicker();
	// Functions
	 int getValue();
	 void setValue(int& arg0);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool dispatchKeyEvent(AndroidCXX::android_view_KeyEvent& arg0);
	 bool dispatchTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool dispatchTrackballEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool onInterceptTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 AndroidCXX::android_view_accessibility_AccessibilityNodeProvider getAccessibilityNodeProvider();
	 void setEnabled(bool& arg0);
	 void scrollBy(int& arg0,int& arg1);
	 void computeScroll();
	 int getSolidColor();
	 void setOnScrollListener(AndroidCXX::android_widget_NumberPicker_OnScrollListener& arg0);
	 void setOnValueChangedListener(AndroidCXX::android_widget_NumberPicker_OnValueChangeListener& arg0);
	 void setFormatter(AndroidCXX::android_widget_NumberPicker_Formatter& arg0);
	 bool getWrapSelectorWheel();
	 void setWrapSelectorWheel(bool& arg0);
	 void setOnLongPressUpdateInterval(long& arg0);
	 int getMinValue();
	 void setMinValue(int& arg0);
	 int getMaxValue();
	 void setMaxValue(int& arg0);
	 std::vector<AndroidCXX::java_lang_String > getDisplayedValues();
	 void setDisplayedValues(std::vector<AndroidCXX::java_lang_String >& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_NumberPicker