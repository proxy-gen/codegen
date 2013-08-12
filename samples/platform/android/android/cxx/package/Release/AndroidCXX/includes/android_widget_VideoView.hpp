/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 



































// Generated Code 

#ifndef _android_widget_VideoView
#define _android_widget_VideoView
//
// Scroll Down 
//


#include <android_view_KeyEvent.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <java_lang_String.hpp>

#include <android_net_Uri.hpp>

#include <android_widget_MediaController.hpp>

#include <android_media_MediaPlayer_OnPreparedListener.hpp>

#include <android_media_MediaPlayer_OnCompletionListener.hpp>

#include <android_media_MediaPlayer_OnErrorListener.hpp>

#include <android_media_MediaPlayer_OnInfoListener.hpp>

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

class android_view_KeyEvent;

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class java_lang_String;

class android_net_Uri;

class android_widget_MediaController;

class android_media_MediaPlayer_OnPreparedListener;

class android_media_MediaPlayer_OnCompletionListener;

class android_media_MediaPlayer_OnErrorListener;

class android_media_MediaPlayer_OnInfoListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_VideoView
{
public:

	android_widget_VideoView(const android_widget_VideoView& cc);
	android_widget_VideoView(Proxy proxy);
	// Public Constructors
	android_widget_VideoView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_VideoView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_VideoView(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_VideoView();
	// Functions
	 void start();
	 void suspend();
	 void resume();
	 bool onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool onTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 int getDuration();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void pause();
	 int getCurrentPosition();
	 void seekTo(int const& arg0);
	 bool isPlaying();
	 int getBufferPercentage();
	 bool canPause();
	 bool canSeekBackward();
	 bool canSeekForward();
	 int getAudioSessionId();
	 int resolveAdjustedSize(int const& arg0,int const& arg1);
	 void setVideoPath(AndroidCXX::java_lang_String const& arg0);
	 void setVideoURI(AndroidCXX::android_net_Uri const& arg0);
	 void stopPlayback();
	 void setMediaController(AndroidCXX::android_widget_MediaController const& arg0);
	 void setOnPreparedListener(AndroidCXX::android_media_MediaPlayer_OnPreparedListener const& arg0);
	 void setOnCompletionListener(AndroidCXX::android_media_MediaPlayer_OnCompletionListener const& arg0);
	 void setOnErrorListener(AndroidCXX::android_media_MediaPlayer_OnErrorListener const& arg0);
	 void setOnInfoListener(AndroidCXX::android_media_MediaPlayer_OnInfoListener const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_VideoView