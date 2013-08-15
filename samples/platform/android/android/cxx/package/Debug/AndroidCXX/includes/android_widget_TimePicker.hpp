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

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_TimePicker_OnTimeChangedListener.hpp>

#include <java_lang_Integer.hpp>

#include <java_lang_Boolean.hpp>

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

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_TimePicker_OnTimeChangedListener;

class java_lang_Integer;

class java_lang_Boolean;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_TimePicker : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_TimePicker(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_TimePicker(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_TimePicker(AndroidCXX::android_content_Context const& arg0);
	android_widget_TimePicker(const android_widget_TimePicker& cc);
	android_widget_TimePicker(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TimePicker();
	// Functions
	virtual bool  isEnabled() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual int  getBaseline() ;
	virtual bool  dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  setEnabled(bool const& arg0) ;
	virtual void  setOnTimeChangedListener(AndroidCXX::android_widget_TimePicker_OnTimeChangedListener const& arg0) ;
	virtual AndroidCXX::java_lang_Integer * getCurrentHour() ;
	virtual void  setCurrentHour(AndroidCXX::java_lang_Integer const& arg0) ;
	virtual void  setIs24HourView(AndroidCXX::java_lang_Boolean const& arg0) ;
	virtual bool  is24HourView() ;
	virtual AndroidCXX::java_lang_Integer * getCurrentMinute() ;
	virtual void  setCurrentMinute(AndroidCXX::java_lang_Integer const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TimePicker