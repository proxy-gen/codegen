/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 








































// Generated Code 

#ifndef _android_widget_ScrollView
#define _android_widget_ScrollView
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_graphics_Rect.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_os_Bundle.hpp>

#include <android_graphics_Canvas.hpp>

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

// Forward Declarations

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_view_MotionEvent;

class android_view_KeyEvent;

class android_graphics_Rect;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_os_Bundle;

class android_graphics_Canvas;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ScrollView
{
public:

	android_widget_ScrollView(const android_widget_ScrollView& cc);
	android_widget_ScrollView(Proxy proxy);
	// Public Constructors
	android_widget_ScrollView(AndroidCXX::android_content_Context const& arg0);
	android_widget_ScrollView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_ScrollView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ScrollView();
	// Functions
	 void addView(AndroidCXX::android_view_View const& arg0,int const& arg1);
	 void addView(AndroidCXX::android_view_View const& arg0);
	 void addView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg1);
	 void addView(AndroidCXX::android_view_View const& arg0,int const& arg1,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg2);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool onGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0);
	 void requestChildFocus(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1);
	 bool requestChildRectangleOnScreen(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1,bool const& arg2);
	 void requestDisallowInterceptTouchEvent(bool const& arg0);
	 bool onInterceptTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool shouldDelayChildPressedState();
	 void requestLayout();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 bool performAccessibilityAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void scrollTo(int const& arg0,int const& arg1);
	 void computeScroll();
	 void draw(AndroidCXX::android_graphics_Canvas const& arg0);
	 void setOverScrollMode(int const& arg0);
	 void smoothScrollBy(int const& arg0,int const& arg1);
	 int getMaxScrollAmount();
	 void fling(int const& arg0);
	 bool isFillViewport();
	 void setFillViewport(bool const& arg0);
	 bool isSmoothScrollingEnabled();
	 void setSmoothScrollingEnabled(bool const& arg0);
	 bool executeKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0);
	 bool pageScroll(int const& arg0);
	 bool fullScroll(int const& arg0);
	 bool arrowScroll(int const& arg0);
	 void smoothScrollTo(int const& arg0,int const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ScrollView