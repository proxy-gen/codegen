/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
		
 			
 			
		
 			

// Generated Code 

#ifndef _android_widget_TimePicker
#define _android_widget_TimePicker
//
// Scroll Down 
//

















#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_TimePicker_OnTimeChangedListener.hpp>

#include <java_lang_Integer.hpp>

#include <java_lang_Boolean.hpp>

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

class android_widget_TimePicker_OnTimeChangedListener;

class java_lang_Integer;

class java_lang_Boolean;

class android_widget_TimePicker
{
public:
 bool isEnabled();
 bool dispatchPopulateAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onPopulateAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setEnabled(bool& arg0);
 int getBaseline();
 void setOnTimeChangedListener(android_widget_TimePicker_OnTimeChangedListener& arg0);
 java_lang_Integer getCurrentHour();
 void setCurrentHour(java_lang_Integer& arg0);
 void setIs24HourView(java_lang_Boolean& arg0);
 bool is24HourView();
 java_lang_Integer getCurrentMinute();
 void setCurrentMinute(java_lang_Integer& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TimePicker