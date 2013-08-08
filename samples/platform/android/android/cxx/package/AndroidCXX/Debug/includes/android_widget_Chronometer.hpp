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
	android_widget_Chronometer(Proxy proxy);
	// Public Constructors
	android_widget_Chronometer(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_Chronometer(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_Chronometer(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_Chronometer();
	// Functions
	 void start();
	 void stop();
	 AndroidCXX::java_lang_String getFormat();
	 void setFormat(AndroidCXX::java_lang_String const& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void setBase(long const& arg0);
	 long getBase();
	 void setOnChronometerTickListener(AndroidCXX::android_widget_Chronometer_OnChronometerTickListener const& arg0);
	 AndroidCXX::android_widget_Chronometer_OnChronometerTickListener getOnChronometerTickListener();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Chronometer