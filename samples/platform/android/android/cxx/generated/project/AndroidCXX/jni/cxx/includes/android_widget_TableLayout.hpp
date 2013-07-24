/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 


 		 
 		 
 		 


























// Generated Code 

#ifndef _android_widget_TableLayout
#define _android_widget_TableLayout
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_ViewGroup_OnHierarchyChangeListener.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_widget_TableLayout_LayoutParams.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

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

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_view_ViewGroup_OnHierarchyChangeListener;

class android_util_AttributeSet;

class android_widget_TableLayout_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_content_Context;

class android_widget_TableLayout
{
public:

	android_widget_TableLayout(const android_widget_TableLayout& cc);
	android_widget_TableLayout(void * proxy);
	// Public Constructors
	android_widget_TableLayout(AndroidCXX::android_content_Context& arg0);
	android_widget_TableLayout(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	// TODO: remove
	// 
	// android_widget_TableLayout();
	// 
	// Default Destructor
	virtual ~android_widget_TableLayout();
	// Functions
	 void addView(AndroidCXX::android_view_View& arg0,int& arg1);
	 void addView(AndroidCXX::android_view_View& arg0);
	 void addView(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams& arg1);
	 void addView(AndroidCXX::android_view_View& arg0,int& arg1,AndroidCXX::android_view_ViewGroup_LayoutParams& arg2);
	 void setOnHierarchyChangeListener(AndroidCXX::android_view_ViewGroup_OnHierarchyChangeListener& arg0);
	 AndroidCXX::android_widget_TableLayout_LayoutParams generateLayoutParams(AndroidCXX::android_util_AttributeSet& arg0);
	 void requestLayout();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 bool isShrinkAllColumns();
	 void setShrinkAllColumns(bool& arg0);
	 bool isStretchAllColumns();
	 void setStretchAllColumns(bool& arg0);
	 void setColumnCollapsed(int& arg0,bool& arg1);
	 bool isColumnCollapsed(int& arg0);
	 void setColumnStretchable(int& arg0,bool& arg1);
	 bool isColumnStretchable(int& arg0);
	 void setColumnShrinkable(int& arg0,bool& arg1);
	 bool isColumnShrinkable(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TableLayout