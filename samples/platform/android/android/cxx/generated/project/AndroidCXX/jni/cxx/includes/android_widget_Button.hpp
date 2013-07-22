/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 


 		 
 		 
 		 
 		 
 		 










// Generated Code 

#ifndef _android_widget_Button
#define _android_widget_Button
//
// Scroll Down 
//


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

// Forward Declarations

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_Button
{
public:

	android_widget_Button(const android_widget_Button& cc);
	android_widget_Button(void * proxy);
	// Public Constructors
	android_widget_Button(AndroidCXX::android_content_Context& arg0);
	android_widget_Button(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_Button(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_Button();
	// Default Destructor
	virtual ~android_widget_Button();
	// Functions
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Button