/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
 			
 			
 			
		


#ifndef _android_widget_FrameLayout
#define _android_widget_FrameLayout
















#include <android_util_AttributeSet.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_widget_FrameLayout_LayoutParams.hpp>
#include <android_graphics_Canvas.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_graphics_drawable_Drawable.hpp>
#include <android_graphics_Region.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_FrameLayout
{
public:
 android_widget_FrameLayout_LayoutParams generateLayoutParams(android_util_AttributeSet& arg0);
 bool gatherTransparentRegion(android_graphics_Region& arg0);
 void jumpDrawablesToCurrentState();
 bool shouldDelayChildPressedState();
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void draw(android_graphics_Canvas& arg0);
 int getForegroundGravity();
 void setForegroundGravity(int& arg0);
 void setForeground(android_graphics_drawable_Drawable& arg0);
 android_graphics_drawable_Drawable getForeground();
 void setMeasureAllChildren(bool& arg0);
 bool getConsiderGoneChildrenWhenMeasuring();
 bool getMeasureAllChildren();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_FrameLayout