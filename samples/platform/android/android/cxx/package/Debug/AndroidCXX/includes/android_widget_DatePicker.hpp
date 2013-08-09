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

class android_widget_DatePicker_OnDateChangedListener;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_CalendarView;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_DatePicker
{
public:

	android_widget_DatePicker(const android_widget_DatePicker& cc);
	android_widget_DatePicker(Proxy proxy);
	// Public Constructors
	android_widget_DatePicker(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_DatePicker(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_DatePicker(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_DatePicker();
	// Functions
	 void init(int const& arg0,int const& arg1,int const& arg2,AndroidCXX::android_widget_DatePicker_OnDateChangedListener const& arg3);
	 int getYear();
	 int getMonth();
	 int getDayOfMonth();
	 bool isEnabled();
	 bool dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void setEnabled(bool const& arg0);
	 long getMinDate();
	 void setMinDate(long const& arg0);
	 long getMaxDate();
	 void setMaxDate(long const& arg0);
	 bool getCalendarViewShown();
	 AndroidCXX::android_widget_CalendarView getCalendarView();
	 void setCalendarViewShown(bool const& arg0);
	 bool getSpinnersShown();
	 void setSpinnersShown(bool const& arg0);
	 void updateDate(int const& arg0,int const& arg1,int const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_DatePicker