/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
	


 		 
 		 
 		 













// Generated Code 

#ifndef _android_widget_ViewSwitcher
#define _android_widget_ViewSwitcher
//
// Scroll Down 
//


#include <android_widget_ViewSwitcher_ViewFactory.hpp>

#include <android_view_View.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

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

// Forward Declarations

class android_widget_ViewSwitcher_ViewFactory;

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ViewSwitcher
{
public:

	android_widget_ViewSwitcher(const android_widget_ViewSwitcher& cc);
	android_widget_ViewSwitcher(void * proxy);
	// Public Constructors
	android_widget_ViewSwitcher(AndroidCXX::android_content_Context& arg0);
	android_widget_ViewSwitcher(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_ViewSwitcher();
	// Default Destructor
	virtual ~android_widget_ViewSwitcher();
	// Functions
	 void reset();
	 void setFactory(AndroidCXX::android_widget_ViewSwitcher_ViewFactory& arg0);
	 void addView(AndroidCXX::android_view_View& arg0,int& arg1,AndroidCXX::android_view_ViewGroup_LayoutParams& arg2);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 AndroidCXX::android_view_View getNextView();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ViewSwitcher