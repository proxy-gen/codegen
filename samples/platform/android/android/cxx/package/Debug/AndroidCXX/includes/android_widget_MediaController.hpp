/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 






















// Generated Code 

#ifndef _android_widget_MediaController
#define _android_widget_MediaController
//
// Scroll Down 
//


#include <android_view_KeyEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_View.hpp>

#include <android_widget_MediaController_MediaPlayerControl.hpp>

#include <android_view_View_OnClickListener.hpp>

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

class android_view_KeyEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_MotionEvent;

class android_view_View;

class android_widget_MediaController_MediaPlayerControl;

class android_view_View_OnClickListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_MediaController : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_MediaController(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_MediaController(AndroidCXX::android_content_Context const& arg0);
	android_widget_MediaController(AndroidCXX::android_content_Context const& arg0,bool const& arg1);
	android_widget_MediaController(const android_widget_MediaController& cc);
	android_widget_MediaController(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_MediaController();
	// Functions
	virtual bool  dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual void  hide() ;
	virtual bool  isShowing() ;
	virtual void  onFinishInflate() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  setAnchorView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setEnabled(bool const& arg0) ;
	virtual void  setMediaPlayer(AndroidCXX::android_widget_MediaController_MediaPlayerControl const& arg0) ;
	virtual void  setPrevNextListeners(AndroidCXX::android_view_View_OnClickListener const& arg0,AndroidCXX::android_view_View_OnClickListener const& arg1) ;
	virtual void  show() ;
	virtual void  show(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_MediaController