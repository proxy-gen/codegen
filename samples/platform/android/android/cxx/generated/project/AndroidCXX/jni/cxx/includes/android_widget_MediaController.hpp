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

class android_view_MotionEvent;

class android_view_KeyEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_View;

class android_widget_MediaController_MediaPlayerControl;

class android_view_View_OnClickListener;

class android_widget_MediaController
{
public:
	 void show(int& arg0);
	 bool onTouchEvent(android_view_MotionEvent& arg0);
	 bool onTrackballEvent(android_view_MotionEvent& arg0);
	 bool dispatchKeyEvent(android_view_KeyEvent& arg0);
	 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setEnabled(bool& arg0);
	 void onFinishInflate();
	 void hide();
	 bool isShowing();
	 void setAnchorView(android_view_View& arg0);
	 void setMediaPlayer(android_widget_MediaController_MediaPlayerControl& arg0);
	 void setPrevNextListeners(android_view_View_OnClickListener& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_MediaController