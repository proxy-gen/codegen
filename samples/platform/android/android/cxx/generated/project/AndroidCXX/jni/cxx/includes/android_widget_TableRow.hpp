/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	
 		 
 		 
	


 		 
 		 
 		 













// Generated Code 

#ifndef _android_widget_TableRow
#define _android_widget_TableRow
//
// Scroll Down 
//


#include <android_view_ViewGroup_OnHierarchyChangeListener.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_widget_TableRow_LayoutParams.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_View.hpp>

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

class android_view_ViewGroup_OnHierarchyChangeListener;

class android_util_AttributeSet;

class android_widget_TableRow_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_View;

class android_content_Context;

class android_widget_TableRow
{
public:

	android_widget_TableRow(const android_widget_TableRow& cc);
	android_widget_TableRow(void * proxy);
	// Public Constructors
	android_widget_TableRow(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_TableRow(AndroidCXX::android_content_Context& arg0);
	// TODO: remove
	// 
	// android_widget_TableRow();
	// 
	// Default Destructor
	virtual ~android_widget_TableRow();
	// Functions
	 void setOnHierarchyChangeListener(AndroidCXX::android_view_ViewGroup_OnHierarchyChangeListener& arg0);
	 AndroidCXX::android_widget_TableRow_LayoutParams generateLayoutParams(AndroidCXX::android_util_AttributeSet& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 AndroidCXX::android_view_View getVirtualChildAt(int& arg0);
	 int getVirtualChildCount();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TableRow