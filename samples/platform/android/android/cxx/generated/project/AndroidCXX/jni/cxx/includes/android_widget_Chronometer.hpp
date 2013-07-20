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

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_Chronometer_OnChronometerTickListener;

class android_widget_Chronometer
{
public:
	 void start();
	 void stop();
	 java_lang_String *  getFormat();
	 void setFormat(java_lang_String& arg0);
	 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setBase(long& arg0);
	 long getBase();
	 void setOnChronometerTickListener(android_widget_Chronometer_OnChronometerTickListener& arg0);
	 android_widget_Chronometer_OnChronometerTickListener *  getOnChronometerTickListener();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Chronometer