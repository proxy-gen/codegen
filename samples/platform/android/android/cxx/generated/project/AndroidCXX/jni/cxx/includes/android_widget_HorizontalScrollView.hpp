/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			


#ifndef _android_widget_HorizontalScrollView
#define _android_widget_HorizontalScrollView































#include <android_os_Bundle.hpp>
#include <android_view_ViewGroup_LayoutParams.hpp>
#include <android_graphics_Canvas.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_MotionEvent.hpp>
#include <android_graphics_Rect.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_view_View.hpp>
#include <android_view_KeyEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_HorizontalScrollView
{
public:
 void addView(android_view_View& arg0,int& arg1,android_view_ViewGroup_LayoutParams& arg2);
 bool onTouchEvent(android_view_MotionEvent& arg0);
 bool onGenericMotionEvent(android_view_MotionEvent& arg0);
 bool dispatchKeyEvent(android_view_KeyEvent& arg0);
 void requestChildFocus(android_view_View& arg0);
 bool requestChildRectangleOnScreen(android_view_View& arg0,android_graphics_Rect& arg1,bool& arg2);
 void requestDisallowInterceptTouchEvent(bool& arg0);
 bool onInterceptTouchEvent(android_view_MotionEvent& arg0);
 bool shouldDelayChildPressedState();
 void requestLayout();
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 bool performAccessibilityAction(int& arg0,android_os_Bundle& arg1);
 void scrollTo(int& arg0);
 void computeScroll();
 void draw(android_graphics_Canvas& arg0);
 void setOverScrollMode(int& arg0);
 void smoothScrollBy(int& arg0);
 int getMaxScrollAmount();
 void fling(int& arg0);
 bool isFillViewport();
 void setFillViewport(bool& arg0);
 bool isSmoothScrollingEnabled();
 void setSmoothScrollingEnabled(bool& arg0);
 bool executeKeyEvent(android_view_KeyEvent& arg0);
 bool pageScroll(int& arg0);
 bool fullScroll(int& arg0);
 bool arrowScroll(int& arg0);
 void smoothScrollTo(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_HorizontalScrollView