/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		
 			


#ifndef _android_widget_CalendarView
#define _android_widget_CalendarView



































#include <android_widget_CalendarView_OnDateChangeListener.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_graphics_drawable_Drawable.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_CalendarView
{
public:
 long getDate();
 void setDate(long& arg0,bool& arg1);
 bool isEnabled();
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setEnabled(bool& arg0);
 void setShownWeekCount(int& arg0);
 int getShownWeekCount();
 void setSelectedWeekBackgroundColor(int& arg0);
 int getSelectedWeekBackgroundColor();
 void setFocusedMonthDateColor(int& arg0);
 int getFocusedMonthDateColor();
 void setUnfocusedMonthDateColor(int& arg0);
 int getUnfocusedMonthDateColor();
 void setWeekNumberColor(int& arg0);
 int getWeekNumberColor();
 void setWeekSeparatorLineColor(int& arg0);
 int getWeekSeparatorLineColor();
 void setSelectedDateVerticalBar(android_graphics_drawable_Drawable& arg0,int& arg1);
 android_graphics_drawable_Drawable getSelectedDateVerticalBar();
 void setWeekDayTextAppearance(int& arg0);
 int getWeekDayTextAppearance();
 void setDateTextAppearance(int& arg0);
 int getDateTextAppearance();
 long getMinDate();
 void setMinDate(long& arg0);
 long getMaxDate();
 void setMaxDate(long& arg0);
 void setShowWeekNumber(bool& arg0);
 bool getShowWeekNumber();
 int getFirstDayOfWeek();
 void setFirstDayOfWeek(int& arg0);
 void setOnDateChangeListener(android_widget_CalendarView_OnDateChangeListener& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CalendarView