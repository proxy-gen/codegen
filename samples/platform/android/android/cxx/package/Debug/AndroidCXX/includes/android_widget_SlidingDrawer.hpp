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

#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_SlidingDrawer_OnDrawerOpenListener.hpp>

#include <android_widget_SlidingDrawer_OnDrawerCloseListener.hpp>

#include <android_widget_SlidingDrawer_OnDrawerScrollListener.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


#include <java_lang_Object.hpp>

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

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_SlidingDrawer_OnDrawerOpenListener;

class android_widget_SlidingDrawer_OnDrawerCloseListener;

class android_widget_SlidingDrawer_OnDrawerScrollListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_SlidingDrawer : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_SlidingDrawer(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_SlidingDrawer(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_SlidingDrawer(const android_widget_SlidingDrawer& cc);
	android_widget_SlidingDrawer(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SlidingDrawer();
	// Functions
	virtual void  lock() ;
	virtual void  close() ;
	virtual AndroidCXX::android_view_View * getContent() ;
	virtual void  open() ;
	virtual AndroidCXX::android_view_View * getHandle() ;
	virtual void  unlock() ;
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual bool  onInterceptTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  toggle() ;
	virtual void  animateToggle() ;
	virtual void  animateClose() ;
	virtual void  animateOpen() ;
	virtual void  setOnDrawerOpenListener(AndroidCXX::android_widget_SlidingDrawer_OnDrawerOpenListener const& arg0) ;
	virtual void  setOnDrawerCloseListener(AndroidCXX::android_widget_SlidingDrawer_OnDrawerCloseListener const& arg0) ;
	virtual void  setOnDrawerScrollListener(AndroidCXX::android_widget_SlidingDrawer_OnDrawerScrollListener const& arg0) ;
	virtual bool  isOpened() ;
	virtual bool  isMoving() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SlidingDrawer