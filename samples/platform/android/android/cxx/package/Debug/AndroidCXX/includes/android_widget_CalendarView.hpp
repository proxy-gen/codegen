/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_graphics_drawable_Drawable.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_CalendarView_OnDateChangeListener.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


#include <java_lang_Object.hpp>

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

class android_graphics_drawable_Drawable;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_CalendarView_OnDateChangeListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_CalendarView : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_CalendarView(AndroidCXX::android_content_Context const& arg0);
	android_widget_CalendarView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_CalendarView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_CalendarView(const android_widget_CalendarView& cc);
	android_widget_CalendarView(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_CalendarView();
	// Functions
	virtual long  getDate() ;
	virtual int  getDateTextAppearance() ;
	virtual int  getFirstDayOfWeek() ;
	virtual int  getFocusedMonthDateColor() ;
	virtual long  getMaxDate() ;
	virtual long  getMinDate() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getSelectedDateVerticalBar() ;
	virtual int  getSelectedWeekBackgroundColor() ;
	virtual bool  getShowWeekNumber() ;
	virtual int  getShownWeekCount() ;
	virtual int  getUnfocusedMonthDateColor() ;
	virtual int  getWeekDayTextAppearance() ;
	virtual int  getWeekNumberColor() ;
	virtual int  getWeekSeparatorLineColor() ;
	virtual bool  isEnabled() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  setDate(long const& arg0,bool const& arg1,bool const& arg2) ;
	virtual void  setDate(long const& arg0) ;
	virtual void  setDateTextAppearance(int const& arg0) ;
	virtual void  setEnabled(bool const& arg0) ;
	virtual void  setFirstDayOfWeek(int const& arg0) ;
	virtual void  setFocusedMonthDateColor(int const& arg0) ;
	virtual void  setMaxDate(long const& arg0) ;
	virtual void  setMinDate(long const& arg0) ;
	virtual void  setOnDateChangeListener(AndroidCXX::android_widget_CalendarView_OnDateChangeListener const& arg0) ;
	virtual void  setSelectedDateVerticalBar(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setSelectedDateVerticalBar(int const& arg0) ;
	virtual void  setSelectedWeekBackgroundColor(int const& arg0) ;
	virtual void  setShowWeekNumber(bool const& arg0) ;
	virtual void  setShownWeekCount(int const& arg0) ;
	virtual void  setUnfocusedMonthDateColor(int const& arg0) ;
	virtual void  setWeekDayTextAppearance(int const& arg0) ;
	virtual void  setWeekNumberColor(int const& arg0) ;
	virtual void  setWeekSeparatorLineColor(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CalendarView