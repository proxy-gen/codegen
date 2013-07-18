/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
		
 			
 			


#ifndef _android_widget_RelativeLayout
#define _android_widget_RelativeLayout














#include <android_util_AttributeSet.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_widget_RelativeLayout_LayoutParams.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_RelativeLayout
{
public:
 bool dispatchPopulateAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 android_widget_RelativeLayout_LayoutParams generateLayoutParams(android_util_AttributeSet& arg0);
 bool shouldDelayChildPressedState();
 void requestLayout();
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 int getBaseline();
 void setGravity(int& arg0);
 int getGravity();
 void setHorizontalGravity(int& arg0);
 void setVerticalGravity(int& arg0);
 void setIgnoreGravity(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RelativeLayout