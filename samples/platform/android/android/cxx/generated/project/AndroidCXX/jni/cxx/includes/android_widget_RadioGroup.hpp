/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
		
 			
 			
 			


#ifndef _android_widget_RadioGroup
#define _android_widget_RadioGroup











#include <android_util_AttributeSet.hpp>
#include <android_widget_RadioGroup_LayoutParams.hpp>
#include <android_view_ViewGroup_LayoutParams.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_ViewGroup_OnHierarchyChangeListener.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_view_View.hpp>
#include <android_widget_RadioGroup_OnCheckedChangeListener.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_RadioGroup
{
public:
 void check(int& arg0);
 void addView(android_view_View& arg0,int& arg1,android_view_ViewGroup_LayoutParams& arg2);
 void setOnHierarchyChangeListener(android_view_ViewGroup_OnHierarchyChangeListener& arg0);
 android_widget_RadioGroup_LayoutParams generateLayoutParams(android_util_AttributeSet& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setOnCheckedChangeListener(android_widget_RadioGroup_OnCheckedChangeListener& arg0);
 int getCheckedRadioButtonId();
 void clearCheck();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RadioGroup