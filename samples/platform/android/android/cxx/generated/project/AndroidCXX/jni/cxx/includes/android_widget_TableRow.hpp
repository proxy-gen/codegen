/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
		
 			
 			
		


#ifndef _android_widget_TableRow
#define _android_widget_TableRow








#include <android_util_AttributeSet.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_ViewGroup_OnHierarchyChangeListener.hpp>
#include <android_widget_TableRow_LayoutParams.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_view_View.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_TableRow
{
public:
 void setOnHierarchyChangeListener(android_view_ViewGroup_OnHierarchyChangeListener& arg0);
 android_widget_TableRow_LayoutParams generateLayoutParams(android_util_AttributeSet& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 android_view_View getVirtualChildAt(int& arg0);
 int getVirtualChildCount();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TableRow