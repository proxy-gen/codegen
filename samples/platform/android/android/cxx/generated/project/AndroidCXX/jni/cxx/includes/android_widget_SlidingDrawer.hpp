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

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_view_View;

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_SlidingDrawer_OnDrawerOpenListener;

class android_widget_SlidingDrawer_OnDrawerCloseListener;

class android_widget_SlidingDrawer_OnDrawerScrollListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_SlidingDrawer
{
public:

	android_widget_SlidingDrawer(const android_widget_SlidingDrawer& cc);
	android_widget_SlidingDrawer(void * proxy);
	// Public Constructors
	android_widget_SlidingDrawer(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_SlidingDrawer(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_SlidingDrawer();
	// Default Destructor
	virtual ~android_widget_SlidingDrawer();
	// Functions
	 void lock();
	 void close();
	 AndroidCXX::android_view_View getContent();
	 void open();
	 AndroidCXX::android_view_View getHandle();
	 void unlock();
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool onInterceptTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void toggle();
	 void animateToggle();
	 void animateClose();
	 void animateOpen();
	 void setOnDrawerOpenListener(AndroidCXX::android_widget_SlidingDrawer_OnDrawerOpenListener& arg0);
	 void setOnDrawerCloseListener(AndroidCXX::android_widget_SlidingDrawer_OnDrawerCloseListener& arg0);
	 void setOnDrawerScrollListener(AndroidCXX::android_widget_SlidingDrawer_OnDrawerScrollListener& arg0);
	 bool isOpened();
	 bool isMoving();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SlidingDrawer