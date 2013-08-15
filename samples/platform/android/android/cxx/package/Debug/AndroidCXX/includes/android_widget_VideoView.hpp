/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_KeyEvent.hpp>

#include <java_lang_String.hpp>

#include <android_net_Uri.hpp>

#include <android_widget_MediaController.hpp>

#include <android_media_MediaPlayer_OnPreparedListener.hpp>

#include <android_media_MediaPlayer_OnCompletionListener.hpp>

#include <android_media_MediaPlayer_OnErrorListener.hpp>

#include <android_media_MediaPlayer_OnInfoListener.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


#include <android_widget_MediaController_MediaPlayerControl.hpp>

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

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_KeyEvent;

class java_lang_String;

class android_net_Uri;

class android_widget_MediaController;

class android_media_MediaPlayer_OnPreparedListener;

class android_media_MediaPlayer_OnCompletionListener;

class android_media_MediaPlayer_OnErrorListener;

class android_media_MediaPlayer_OnInfoListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_VideoView : public android_widget_MediaController_MediaPlayerControl
{
public:

	// Public ConstrucXXX
	android_widget_VideoView(AndroidCXX::android_content_Context const& arg0);
	android_widget_VideoView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_VideoView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_VideoView(const android_widget_VideoView& cc);
	android_widget_VideoView(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_VideoView();
	// Functions
	virtual void  start() ;
	virtual void  suspend() ;
	virtual void  resume() ;
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual int  getDuration() ;
	virtual int  resolveAdjustedSize(int const& arg0,int const& arg1) ;
	virtual void  setVideoPath(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setVideoURI(AndroidCXX::android_net_Uri const& arg0) ;
	virtual void  stopPlayback() ;
	virtual void  setMediaController(AndroidCXX::android_widget_MediaController const& arg0) ;
	virtual void  setOnPreparedListener(AndroidCXX::android_media_MediaPlayer_OnPreparedListener const& arg0) ;
	virtual void  setOnCompletionListener(AndroidCXX::android_media_MediaPlayer_OnCompletionListener const& arg0) ;
	virtual void  setOnErrorListener(AndroidCXX::android_media_MediaPlayer_OnErrorListener const& arg0) ;
	virtual void  setOnInfoListener(AndroidCXX::android_media_MediaPlayer_OnInfoListener const& arg0) ;
	virtual void  pause() ;
	virtual int  getCurrentPosition() ;
	virtual void  seekTo(int const& arg0) ;
	virtual bool  isPlaying() ;
	virtual int  getBufferPercentage() ;
	virtual bool  canPause() ;
	virtual bool  canSeekBackward() ;
	virtual bool  canSeekForward() ;
	virtual int  getAudioSessionId() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_VideoView