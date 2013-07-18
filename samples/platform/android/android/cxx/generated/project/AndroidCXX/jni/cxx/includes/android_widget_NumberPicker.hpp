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

class android_view_KeyEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeProvider;

class android_widget_NumberPicker_OnScrollListener;

class android_widget_NumberPicker_OnValueChangeListener;

class android_widget_NumberPicker_Formatter;

class android_widget_NumberPicker
{
public:
 int getValue();
 void setValue(int& arg0);
 bool onTouchEvent(android_view_MotionEvent& arg0);
 bool dispatchKeyEvent(android_view_KeyEvent& arg0);
 bool dispatchTouchEvent(android_view_MotionEvent& arg0);
 bool dispatchTrackballEvent(android_view_MotionEvent& arg0);
 bool onInterceptTouchEvent(android_view_MotionEvent& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 android_view_accessibility_AccessibilityNodeProvider getAccessibilityNodeProvider();
 void setEnabled(bool& arg0);
 void scrollBy(int& arg0);
 void computeScroll();
 int getSolidColor();
 void setOnScrollListener(android_widget_NumberPicker_OnScrollListener& arg0);
 void setOnValueChangedListener(android_widget_NumberPicker_OnValueChangeListener& arg0);
 void setFormatter(android_widget_NumberPicker_Formatter& arg0);
 bool getWrapSelectorWheel();
 void setWrapSelectorWheel(bool& arg0);
 void setOnLongPressUpdateInterval(long& arg0);
 int getMinValue();
 void setMinValue(int& arg0);
 int getMaxValue();
 void setMaxValue(int& arg0);
 std::vector<long> getDisplayedValues();
 void setDisplayedValues(std::vector<long>& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_NumberPicker