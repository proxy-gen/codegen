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

class android_util_AttributeSet;

class android_widget_LinearLayout_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_graphics_drawable_Drawable;

class android_content_Context;

class android_widget_LinearLayout
{
public:

	android_widget_LinearLayout(const android_widget_LinearLayout& cc);
	android_widget_LinearLayout(void * proxy);
	// Public Constructors
	android_widget_LinearLayout(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_LinearLayout(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_LinearLayout(AndroidCXX::android_content_Context& arg0);
	// TODO: remove
	// 
	// android_widget_LinearLayout();
	// 
	// Default Destructor
	virtual ~android_widget_LinearLayout();
	// Functions
	 AndroidCXX::android_widget_LinearLayout_LayoutParams generateLayoutParams(AndroidCXX::android_util_AttributeSet& arg0);
	 bool shouldDelayChildPressedState();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 int getBaseline();
	 int getOrientation();
	 void setGravity(int& arg0);
	 void setShowDividers(int& arg0);
	 int getShowDividers();
	 AndroidCXX::android_graphics_drawable_Drawable getDividerDrawable();
	 void setDividerDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
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