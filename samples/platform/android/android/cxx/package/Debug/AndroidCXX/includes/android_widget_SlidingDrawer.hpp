/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_widget_SlidingDrawer_OnDrawerCloseListener.hpp>

#include <android_widget_SlidingDrawer_OnDrawerOpenListener.hpp>

#include <android_widget_SlidingDrawer_OnDrawerScrollListener.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


#include <android_view_ViewGroup.hpp>

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

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_MotionEvent;

class android_widget_SlidingDrawer_OnDrawerCloseListener;

class android_widget_SlidingDrawer_OnDrawerOpenListener;

class android_widget_SlidingDrawer_OnDrawerScrollListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_SlidingDrawer : public AndroidCXX::android_view_ViewGroup
{
public:

	// Public Constructor
	android_widget_SlidingDrawer(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,Proxy * aProxy = new Proxy());
	android_widget_SlidingDrawer(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	android_widget_SlidingDrawer(const android_widget_SlidingDrawer& cc);
	android_widget_SlidingDrawer(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_SlidingDrawer();
	// Functions
	virtual void  animateClose() ;
	virtual void  animateOpen() ;
	virtual void  animateToggle() ;
	virtual void  close() ;
	virtual AndroidCXX::android_view_View * getContent() ;
	virtual AndroidCXX::android_view_View * getHandle() ;
	virtual bool  isMoving() ;
	virtual bool  isOpened() ;
	virtual void  lock() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual bool  onInterceptTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  open() ;
	virtual void  setOnDrawerCloseListener(AndroidCXX::android_widget_SlidingDrawer_OnDrawerCloseListener const& arg0) ;
	virtual void  setOnDrawerOpenListener(AndroidCXX::android_widget_SlidingDrawer_OnDrawerOpenListener const& arg0) ;
	virtual void  setOnDrawerScrollListener(AndroidCXX::android_widget_SlidingDrawer_OnDrawerScrollListener const& arg0) ;
	virtual void  toggle() ;
	virtual void  unlock() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SlidingDrawer