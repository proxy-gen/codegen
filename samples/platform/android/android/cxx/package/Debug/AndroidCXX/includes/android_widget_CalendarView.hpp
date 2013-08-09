/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
	
 		 


 		 
 		 
 		 
 		 
 		 











































// Generated Code 

#ifndef _android_widget_CalendarView
#define _android_widget_CalendarView
//
// Scroll Down 
//


#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_widget_CalendarView_OnDateChangeListener.hpp>

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

class android_widget_CalendarView_OnDateChangeListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_CalendarView
{
public:

	android_widget_CalendarView(const android_widget_CalendarView& cc);
	android_widget_CalendarView(Proxy proxy);
	// Public Constructors
	android_widget_CalendarView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_CalendarView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_CalendarView(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_CalendarView();
	// Functions
	 long getDate();
	 void setDate(long const& arg0,bool const& arg1,bool const& arg2);
	 void setDate(long const& arg0);
	 bool isEnabled();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void setEnabled(bool const& arg0);
	 void setShownWeekCount(int const& arg0);
	 int getShownWeekCount();
	 void setSelectedWeekBackgroundColor(int const& arg0);
	 int getSelectedWeekBackgroundColor();
	 void setFocusedMonthDateColor(int const& arg0);
	 int getFocusedMonthDateColor();
	 void setUnfocusedMonthDateColor(int const& arg0);
	 int getUnfocusedMonthDateColor();
	 void setWeekNumberColor(int const& arg0);
	 int getWeekNumberColor();
	 void setWeekSeparatorLineColor(int const& arg0);
	 int getWeekSeparatorLineColor();
	 void setSelectedDateVerticalBar(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setSelectedDateVerticalBar(int const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getSelectedDateVerticalBar();
	 void setWeekDayTextAppearance(int const& arg0);
	 int getWeekDayTextAppearance();
	 void setDateTextAppearance(int const& arg0);
	 int getDateTextAppearance();
	 long getMinDate();
	 void setMinDate(long const& arg0);
	 long getMaxDate();
	 void setMaxDate(long const& arg0);
	 void setShowWeekNumber(bool const& arg0);
	 bool getShowWeekNumber();
	 int getFirstDayOfWeek();
	 void setFirstDayOfWeek(int const& arg0);
	 void setOnDateChangeListener(AndroidCXX::android_widget_CalendarView_OnDateChangeListener const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CalendarView