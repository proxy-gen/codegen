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

class android_widget_VideoView
{
public:
 void start();
 void suspend();
 void resume();
 bool onKeyDown(int& arg0,android_view_KeyEvent& arg1);
 bool onTouchEvent(android_view_MotionEvent& arg0);
 bool onTrackballEvent(android_view_MotionEvent& arg0);
 int getDuration();
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void pause();
 int getCurrentPosition();
 void seekTo(int& arg0);
 bool isPlaying();
 int getBufferPercentage();
 bool canPause();
 bool canSeekBackward();
 bool canSeekForward();
 int resolveAdjustedSize(int& arg0);
 void setVideoPath(java_lang_String& arg0);
 void setVideoURI(android_net_Uri& arg0);
 void stopPlayback();
 void setMediaController(android_widget_MediaController& arg0);
 void setOnPreparedListener(android_media_MediaPlayer_OnPreparedListener& arg0);
 void setOnCompletionListener(android_media_MediaPlayer_OnCompletionListener& arg0);
 void setOnErrorListener(android_media_MediaPlayer_OnErrorListener& arg0);
 void setOnInfoListener(android_media_MediaPlayer_OnInfoListener& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_VideoView