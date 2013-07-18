/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
 			
 			
 			
 			
 			
 			
 			

// Generated Code 

#ifndef _android_widget_SlidingDrawer
#define _android_widget_SlidingDrawer
//
// Scroll Down 
//






















#include <android_view_View.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_SlidingDrawer_OnDrawerOpenListener.hpp>

#include <android_widget_SlidingDrawer_OnDrawerCloseListener.hpp>

#include <android_widget_SlidingDrawer_OnDrawerScrollListener.hpp>

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

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_SlidingDrawer_OnDrawerOpenListener;

class android_widget_SlidingDrawer_OnDrawerCloseListener;

class android_widget_SlidingDrawer_OnDrawerScrollListener;

class android_widget_SlidingDrawer
{
public:
 void lock();
 void close();
 android_view_View getContent();
 void open();
 android_view_View getHandle();
 void unlock();
 bool onTouchEvent(android_view_MotionEvent& arg0);
 bool onInterceptTouchEvent(android_view_MotionEvent& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void toggle();
 void animateToggle();
 void animateClose();
 void animateOpen();
 void setOnDrawerOpenListener(android_widget_SlidingDrawer_OnDrawerOpenListener& arg0);
 void setOnDrawerCloseListener(android_widget_SlidingDrawer_OnDrawerCloseListener& arg0);
 void setOnDrawerScrollListener(android_widget_SlidingDrawer_OnDrawerScrollListener& arg0);
 bool isOpened();
 bool isMoving();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SlidingDrawer