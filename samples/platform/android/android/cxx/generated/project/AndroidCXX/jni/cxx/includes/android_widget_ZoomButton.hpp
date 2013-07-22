/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 
















// Generated Code 

#ifndef _android_widget_ZoomButton
#define _android_widget_ZoomButton
//
// Scroll Down 
//


#include <android_view_KeyEvent.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_View.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_view_KeyEvent;

class android_view_MotionEvent;

class android_view_View;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ZoomButton
{
public:

	android_widget_ZoomButton(const android_widget_ZoomButton& cc);
	android_widget_ZoomButton(void * proxy);
	// Public Constructors
	android_widget_ZoomButton(AndroidCXX::android_content_Context& arg0);
	android_widget_ZoomButton(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_ZoomButton(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_ZoomButton();
	// Default Destructor
	virtual ~android_widget_ZoomButton();
	// Functions
	 bool onKeyUp(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool dispatchUnhandledMove(AndroidCXX::android_view_View& arg0,int& arg1);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setEnabled(bool& arg0);
	 bool onLongClick(AndroidCXX::android_view_View& arg0);
	 void setZoomSpeed(long& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ZoomButton