/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
		

// Generated Code 

#ifndef _android_widget_DatePicker
#define _android_widget_DatePicker
//
// Scroll Down 
//























#include <android_widget_DatePicker_OnDateChangedListener.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_CalendarView.hpp>

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

class android_widget_DatePicker_OnDateChangedListener;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_CalendarView;

class android_widget_DatePicker
{
public:
 void init(int& arg0,android_widget_DatePicker_OnDateChangedListener& arg1);
 int getYear();
 int getMonth();
 int getDayOfMonth();
 bool isEnabled();
 bool dispatchPopulateAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onPopulateAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setEnabled(bool& arg0);
 long getMinDate();
 void setMinDate(long& arg0);
 long getMaxDate();
 void setMaxDate(long& arg0);
 bool getCalendarViewShown();
 android_widget_CalendarView getCalendarView();
 void setCalendarViewShown(bool& arg0);
 bool getSpinnersShown();
 void setSpinnersShown(bool& arg0);
 void updateDate(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_DatePicker