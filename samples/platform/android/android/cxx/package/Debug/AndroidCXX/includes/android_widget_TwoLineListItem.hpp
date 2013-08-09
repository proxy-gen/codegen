/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	
	


 		 
 		 
 		 
 		 
 		 












// Generated Code 

#ifndef _android_widget_TwoLineListItem
#define _android_widget_TwoLineListItem
//
// Scroll Down 
//


#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_TextView.hpp>

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

class android_widget_TextView;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_TwoLineListItem
{
public:

	android_widget_TwoLineListItem(const android_widget_TwoLineListItem& cc);
	android_widget_TwoLineListItem(Proxy proxy);
	// Public Constructors
	android_widget_TwoLineListItem(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_TwoLineListItem(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_TwoLineListItem(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TwoLineListItem();
	// Functions
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 AndroidCXX::android_widget_TextView getText1();
	 AndroidCXX::android_widget_TextView getText2();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TwoLineListItem