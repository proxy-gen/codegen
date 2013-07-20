/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
	
 		 
 		 

// Generated Code 

#ifndef _android_widget_GridLayout
#define _android_widget_GridLayout
//
// Scroll Down 
//






















#include <android_util_AttributeSet.hpp>

#include <android_widget_GridLayout_LayoutParams.hpp>

#include <android_widget_GridLayout_Alignment.hpp>

#include <android_widget_GridLayout_Spec.hpp>

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

class android_util_AttributeSet;

class android_widget_GridLayout_LayoutParams;

class android_widget_GridLayout_Alignment;

class android_widget_GridLayout_Spec;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_GridLayout
{
public:
	 android_widget_GridLayout_LayoutParams *  generateLayoutParams(android_util_AttributeSet& arg0);
	static android_widget_GridLayout_Spec *  spec(int& arg0,android_widget_GridLayout_Alignment& arg1);
	 void requestLayout();
	 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
	 int getOrientation();
	 int getColumnCount();
	 void setOrientation(int& arg0);
	 int getRowCount();
	 void setRowCount(int& arg0);
	 void setColumnCount(int& arg0);
	 bool getUseDefaultMargins();
	 void setUseDefaultMargins(bool& arg0);
	 int getAlignmentMode();
	 void setAlignmentMode(int& arg0);
	 bool isRowOrderPreserved();
	 void setRowOrderPreserved(bool& arg0);
	 bool isColumnOrderPreserved();
	 void setColumnOrderPreserved(bool& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_GridLayout