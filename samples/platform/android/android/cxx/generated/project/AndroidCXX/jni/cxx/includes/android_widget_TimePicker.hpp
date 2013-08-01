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

class android_widget_TimePicker_OnTimeChangedListener;

class java_lang_Integer;

class java_lang_Boolean;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_TimePicker
{
public:

	android_widget_TimePicker(const android_widget_TimePicker& cc);
	android_widget_TimePicker(Proxy proxy);
	// Public Constructors
	android_widget_TimePicker(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_TimePicker(AndroidCXX::android_content_Context const& arg0);
	android_widget_TimePicker(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TimePicker();
	// Functions
	 bool isEnabled();
	 bool dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void setEnabled(bool const& arg0);
	 int getBaseline();
	 void setOnTimeChangedListener(AndroidCXX::android_widget_TimePicker_OnTimeChangedListener const& arg0);
	 AndroidCXX::java_lang_Integer getCurrentHour();
	 void setCurrentHour(AndroidCXX::java_lang_Integer const& arg0);
	 void setIs24HourView(AndroidCXX::java_lang_Boolean const& arg0);
	 bool is24HourView();
	 AndroidCXX::java_lang_Integer getCurrentMinute();
	 void setCurrentMinute(AndroidCXX::java_lang_Integer const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TimePicker