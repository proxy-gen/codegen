/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_os_Bundle.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_graphics_Rect.hpp>

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

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_accessibility_AccessibilityEvent;

class android_os_Bundle;

class android_view_KeyEvent;

class android_graphics_Rect;

class android_graphics_Canvas;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ScrollView 
{
public:

	// Public ConstrucXXX
	android_widget_ScrollView(AndroidCXX::android_content_Context const& arg0);
	android_widget_ScrollView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_ScrollView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_ScrollView(const android_widget_ScrollView& cc);
	android_widget_ScrollView(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ScrollView();
	// Functions
	virtual void  addView(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg1) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0,int const& arg1,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg2) ;
	virtual void  setOverScrollMode(int const& arg0) ;
	virtual void  computeScroll() ;
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  shouldDelayChildPressedState() ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual bool  performAccessibilityAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual bool  dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  requestChildRectangleOnScreen(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1,bool const& arg2) ;
	virtual void  requestChildFocus(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1) ;
	virtual void  requestDisallowInterceptTouchEvent(bool const& arg0) ;
	virtual bool  onInterceptTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  requestLayout() ;
	virtual void  scrollTo(int const& arg0,int const& arg1) ;
	virtual void  draw(AndroidCXX::android_graphics_Canvas const& arg0) ;
	virtual void  smoothScrollBy(int const& arg0,int const& arg1) ;
	virtual int  getMaxScrollAmount() ;
	virtual bool  isFillViewport() ;
	virtual void  setFillViewport(bool const& arg0) ;
	virtual bool  isSmoothScrollingEnabled() ;
	virtual void  setSmoothScrollingEnabled(bool const& arg0) ;
	virtual bool  executeKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  pageScroll(int const& arg0) ;
	virtual bool  fullScroll(int const& arg0) ;
	virtual bool  arrowScroll(int const& arg0) ;
	virtual void  smoothScrollTo(int const& arg0,int const& arg1) ;
	virtual void  fling(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ScrollView