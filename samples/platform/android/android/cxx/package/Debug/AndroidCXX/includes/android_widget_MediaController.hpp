/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_view_MotionEvent.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_View.hpp>

#include <android_widget_MediaController_MediaPlayerControl.hpp>

#include <android_view_View_OnClickListener.hpp>

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

class android_view_MotionEvent;

class android_view_KeyEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_View;

class android_widget_MediaController_MediaPlayerControl;

class android_view_View_OnClickListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_MediaController
{
public:

	android_widget_MediaController(const android_widget_MediaController& cc);
	android_widget_MediaController(Proxy proxy);
	// Public Constructors
	android_widget_MediaController(AndroidCXX::android_content_Context const& arg0,bool const& arg1);
	android_widget_MediaController(AndroidCXX::android_content_Context const& arg0);
	android_widget_MediaController(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_MediaController();
	// Functions
	 void show();
	 void show(int const& arg0);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool onTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void setEnabled(bool const& arg0);
	 void onFinishInflate();
	 void hide();
	 bool isShowing();
	 void setAnchorView(AndroidCXX::android_view_View const& arg0);
	 void setMediaPlayer(AndroidCXX::android_widget_MediaController_MediaPlayerControl const& arg0);
	 void setPrevNextListeners(AndroidCXX::android_view_View_OnClickListener const& arg0,AndroidCXX::android_view_View_OnClickListener const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_MediaController