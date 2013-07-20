/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
	
 		 

// Generated Code 

#ifndef _android_widget_LinearLayout
#define _android_widget_LinearLayout
//
// Scroll Down 
//



























#include <android_util_AttributeSet.hpp>

#include <android_widget_LinearLayout_LayoutParams.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_graphics_drawable_Drawable.hpp>

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

class android_widget_LinearLayout_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_graphics_drawable_Drawable;

class android_widget_LinearLayout
{
public:
	 android_widget_LinearLayout_LayoutParams *  generateLayoutParams(android_util_AttributeSet& arg0);
	 bool shouldDelayChildPressedState();
	 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
	 int getBaseline();
	 int getOrientation();
	 void setGravity(int& arg0);
	 void setShowDividers(int& arg0);
	 int getShowDividers();
	 android_graphics_drawable_Drawable *  getDividerDrawable();
	 void setDividerDrawable(android_graphics_drawable_Drawable& arg0);
	 void setDividerPadding(int& arg0);
	 int getDividerPadding();
	 bool isBaselineAligned();
	 void setBaselineAligned(bool& arg0);
	 bool isMeasureWithLargestChildEnabled();
	 void setMeasureWithLargestChildEnabled(bool& arg0);
	 int getBaselineAlignedChildIndex();
	 void setBaselineAlignedChildIndex(int& arg0);
	 float getWeightSum();
	 void setWeightSum(float& arg0);
	 void setOrientation(int& arg0);
	 void setHorizontalGravity(int& arg0);
	 void setVerticalGravity(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_LinearLayout