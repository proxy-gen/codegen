/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 

















// Generated Code 

#ifndef _android_widget_StackView
#define _android_widget_StackView
//
// Scroll Down 
//


#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_os_Bundle.hpp>

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

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_os_Bundle;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_StackView
{
public:

	android_widget_StackView(const android_widget_StackView& cc);
	android_widget_StackView(void * proxy);
	// Public Constructors
	android_widget_StackView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_StackView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_StackView(AndroidCXX::android_content_Context& arg0);
	android_widget_StackView();
	// Default Destructor
	virtual ~android_widget_StackView();
	// Functions
	 void advance();
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool onGenericMotionEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool onInterceptTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 bool performAccessibilityAction(int& arg0,AndroidCXX::android_os_Bundle& arg1);
	 void showNext();
	 void showPrevious();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_StackView