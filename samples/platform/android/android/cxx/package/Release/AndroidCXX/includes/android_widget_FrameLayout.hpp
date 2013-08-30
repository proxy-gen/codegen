/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
 		 
 		 
 		 
 		 
	


 		 
 		 
 		 
 		 
 		 






















// Generated Code 

#ifndef _android_widget_FrameLayout
#define _android_widget_FrameLayout
//
// Scroll Down 
//


#include <android_util_AttributeSet.hpp>

#include <android_widget_FrameLayout_LayoutParams.hpp>

#include <android_graphics_Region.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_graphics_Canvas.hpp>

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

class android_widget_FrameLayout_LayoutParams;

class android_graphics_Region;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_graphics_Canvas;

class android_graphics_drawable_Drawable;

class android_content_Context;

class android_widget_FrameLayout
{
public:

	android_widget_FrameLayout(const android_widget_FrameLayout& cc);
	android_widget_FrameLayout(Proxy proxy);
	// Public Constructors
	android_widget_FrameLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_FrameLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_FrameLayout(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_FrameLayout();
	// Functions
	 AndroidCXX::android_widget_FrameLayout_LayoutParams generateLayoutParams(AndroidCXX::android_util_AttributeSet const& arg0);
	 bool gatherTransparentRegion(AndroidCXX::android_graphics_Region const& arg0);
	 void jumpDrawablesToCurrentState();
	 bool shouldDelayChildPressedState();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void draw(AndroidCXX::android_graphics_Canvas const& arg0);
	 int getForegroundGravity();
	 void setForegroundGravity(int const& arg0);
	 void setForeground(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getForeground();
	 void setMeasureAllChildren(bool const& arg0);
	 bool getConsiderGoneChildrenWhenMeasuring();
	 bool getMeasureAllChildren();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_FrameLayout