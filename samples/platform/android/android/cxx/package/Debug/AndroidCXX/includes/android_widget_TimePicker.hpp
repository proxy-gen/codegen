/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <java_lang_Integer.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <java_lang_Boolean.hpp>

#include <android_widget_TimePicker_OnTimeChangedListener.hpp>

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

class java_lang_Integer;

class android_view_accessibility_AccessibilityNodeInfo;

class java_lang_Boolean;

class android_widget_TimePicker_OnTimeChangedListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_TimePicker 
{
public:

	// Public Constructor
	android_widget_TimePicker(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	android_widget_TimePicker(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,Proxy * aProxy = new Proxy());
	android_widget_TimePicker(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	android_widget_TimePicker(const android_widget_TimePicker& cc);
	android_widget_TimePicker(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_TimePicker();
	// Functions
	virtual bool  dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual int  getBaseline() ;
	virtual AndroidCXX::java_lang_Integer * getCurrentHour() ;
	virtual AndroidCXX::java_lang_Integer * getCurrentMinute() ;
	virtual bool  is24HourView() ;
	virtual bool  isEnabled() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  setCurrentHour(AndroidCXX::java_lang_Integer const& arg0) ;
	virtual void  setCurrentMinute(AndroidCXX::java_lang_Integer const& arg0) ;
	virtual void  setEnabled(bool const& arg0) ;
	virtual void  setIs24HourView(AndroidCXX::java_lang_Boolean const& arg0) ;
	virtual void  setOnTimeChangedListener(AndroidCXX::android_widget_TimePicker_OnTimeChangedListener const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TimePicker