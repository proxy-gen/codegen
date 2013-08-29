/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 






























// Generated Code 

#ifndef _android_widget_Gallery
#define _android_widget_Gallery
//
// Scroll Down 
//


#include <android_view_KeyEvent.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_os_Bundle.hpp>

#include <android_view_View.hpp>

#include <android_content_Context.hpp>


#include <android_view_GestureDetector_OnGestureListener.hpp>

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

class android_view_KeyEvent;

class android_util_AttributeSet;

class android_view_ViewGroup_LayoutParams;

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_os_Bundle;

class android_view_View;

class android_content_Context;

class android_widget_Gallery : public AndroidCXX::android_view_GestureDetector_OnGestureListener
{
public:

	// Public Constructor
	android_widget_Gallery(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	android_widget_Gallery(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,Proxy * aProxy = new Proxy());
	android_widget_Gallery(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	android_widget_Gallery(const android_widget_Gallery& cc);
	android_widget_Gallery(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_Gallery();
	// Functions
	virtual bool  dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual void  dispatchSetSelected(bool const& arg0) ;
	virtual AndroidCXX::android_view_ViewGroup_LayoutParams * generateLayoutParams(AndroidCXX::android_util_AttributeSet const& arg0) ;
	virtual bool  onDown(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onFling(AndroidCXX::android_view_MotionEvent const& arg0,AndroidCXX::android_view_MotionEvent const& arg1,float const& arg2,float const& arg3) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual void  onLongPress(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onScroll(AndroidCXX::android_view_MotionEvent const& arg0,AndroidCXX::android_view_MotionEvent const& arg1,float const& arg2,float const& arg3) ;
	virtual void  onShowPress(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onSingleTapUp(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  performAccessibilityAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  setAnimationDuration(int const& arg0) ;
	virtual void  setCallbackDuringFling(bool const& arg0) ;
	virtual void  setGravity(int const& arg0) ;
	virtual void  setSpacing(int const& arg0) ;
	virtual void  setUnselectedAlpha(float const& arg0) ;
	virtual bool  showContextMenuForChild(AndroidCXX::android_view_View const& arg0) ;
	virtual bool  showContextMenu() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Gallery