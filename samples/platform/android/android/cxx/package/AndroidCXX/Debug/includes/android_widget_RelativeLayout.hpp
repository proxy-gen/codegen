/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	
 		 
 		 


 		 
 		 
 		 
 		 
 		 




















// Generated Code 

#ifndef _android_widget_RelativeLayout
#define _android_widget_RelativeLayout
//
// Scroll Down 
//


#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_widget_RelativeLayout_LayoutParams.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_content_Context.hpp>

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

class android_util_AttributeSet;

class android_widget_RelativeLayout_LayoutParams;

class android_view_accessibility_AccessibilityNodeInfo;

class android_content_Context;

class android_widget_RelativeLayout
{
public:

	android_widget_RelativeLayout(const android_widget_RelativeLayout& cc);
	android_widget_RelativeLayout(Proxy proxy);
	// Public Constructors
	android_widget_RelativeLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_RelativeLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_RelativeLayout(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_RelativeLayout();
	// Functions
	 bool dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 AndroidCXX::android_widget_RelativeLayout_LayoutParams generateLayoutParams(AndroidCXX::android_util_AttributeSet const& arg0);
	 bool shouldDelayChildPressedState();
	 void requestLayout();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 int getBaseline();
	 void setGravity(int const& arg0);
	 int getGravity();
	 void setHorizontalGravity(int const& arg0);
	 void setVerticalGravity(int const& arg0);
	 void setIgnoreGravity(int const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RelativeLayout