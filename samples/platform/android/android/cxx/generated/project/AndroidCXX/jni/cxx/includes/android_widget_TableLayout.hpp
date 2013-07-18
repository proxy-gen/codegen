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

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_view_ViewGroup_OnHierarchyChangeListener;

class android_util_AttributeSet;

class android_widget_TableLayout_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_TableLayout
{
public:
 void addView(android_view_View& arg0,int& arg1,android_view_ViewGroup_LayoutParams& arg2);
 void setOnHierarchyChangeListener(android_view_ViewGroup_OnHierarchyChangeListener& arg0);
 android_widget_TableLayout_LayoutParams generateLayoutParams(android_util_AttributeSet& arg0);
 void requestLayout();
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
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