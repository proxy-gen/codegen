/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_widget_CalendarView.hpp>

#include <android_widget_DatePicker_OnDateChangedListener.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

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

class android_view_accessibility_AccessibilityEvent;

class android_widget_CalendarView;

class android_widget_DatePicker_OnDateChangedListener;

class android_view_accessibility_AccessibilityNodeInfo;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_DatePicker : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_DatePicker(AndroidCXX::android_content_Context const& arg0);
	android_widget_DatePicker(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_DatePicker(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_DatePicker(const android_widget_DatePicker& cc);
	android_widget_DatePicker(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_DatePicker();
	// Functions
	virtual bool  dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual AndroidCXX::android_widget_CalendarView * getCalendarView() ;
	virtual bool  getCalendarViewShown() ;
	virtual int  getDayOfMonth() ;
	virtual long  getMaxDate() ;
	virtual long  getMinDate() ;
	virtual int  getMonth() ;
	virtual bool  getSpinnersShown() ;
	virtual int  getYear() ;
	virtual void  init(int const& arg0,int const& arg1,int const& arg2,AndroidCXX::android_widget_DatePicker_OnDateChangedListener const& arg3) ;
	virtual bool  isEnabled() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  setCalendarViewShown(bool const& arg0) ;
	virtual void  setEnabled(bool const& arg0) ;
	virtual void  setMaxDate(long const& arg0) ;
	virtual void  setMinDate(long const& arg0) ;
	virtual void  setSpinnersShown(bool const& arg0) ;
	virtual void  updateDate(int const& arg0,int const& arg1,int const& arg2) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_DatePicker