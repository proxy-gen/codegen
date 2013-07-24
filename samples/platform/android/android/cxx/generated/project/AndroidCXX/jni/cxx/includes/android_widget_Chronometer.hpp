/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
 		 
 		 
 		 
	


 		 
 		 
 		 
 		 
 		 


















// Generated Code 

#ifndef _android_widget_Chronometer
#define _android_widget_Chronometer
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_Chronometer_OnChronometerTickListener.hpp>

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

class java_lang_String;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_Chronometer_OnChronometerTickListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_Chronometer
{
public:

	android_widget_Chronometer(const android_widget_Chronometer& cc);
	android_widget_Chronometer(void * proxy);
	// Public Constructors
	android_widget_Chronometer(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_Chronometer(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_Chronometer(AndroidCXX::android_content_Context& arg0);
	// TODO: remove
	// 
	// android_widget_Chronometer();
	// 
	// Default Destructor
	virtual ~android_widget_Chronometer();
	// Functions
	 void start();
	 void stop();
	 AndroidCXX::java_lang_String getFormat();
	 void setFormat(AndroidCXX::java_lang_String& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setBase(long& arg0);
	 long getBase();
	 void setOnChronometerTickListener(AndroidCXX::android_widget_Chronometer_OnChronometerTickListener& arg0);
	 AndroidCXX::android_widget_Chronometer_OnChronometerTickListener getOnChronometerTickListener();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Chronometer