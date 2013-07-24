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
	android_widget_TimePicker(void * proxy);
	// Public Constructors
	android_widget_TimePicker(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_TimePicker(AndroidCXX::android_content_Context& arg0);
	android_widget_TimePicker(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	// TODO: remove
	// 
	// android_widget_TimePicker();
	// 
	// Default Destructor
	virtual ~android_widget_TimePicker();
	// Functions
	 bool isEnabled();
	 bool dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setEnabled(bool& arg0);
	 int getBaseline();
	 void setOnTimeChangedListener(AndroidCXX::android_widget_TimePicker_OnTimeChangedListener& arg0);
	 AndroidCXX::java_lang_Integer getCurrentHour();
	 void setCurrentHour(AndroidCXX::java_lang_Integer& arg0);
	 void setIs24HourView(AndroidCXX::java_lang_Boolean& arg0);
	 bool is24HourView();
	 AndroidCXX::java_lang_Integer getCurrentMinute();
	 void setCurrentMinute(AndroidCXX::java_lang_Integer& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TimePicker