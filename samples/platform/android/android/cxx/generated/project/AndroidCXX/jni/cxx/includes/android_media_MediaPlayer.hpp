/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


























































// Generated Code 

#ifndef _android_media_MediaPlayer
#define _android_media_MediaPlayer
//
// Scroll Down 
//


#include <android_content_Context.hpp>


#include <android_net_Uri.hpp>

#include <android_view_SurfaceHolder.hpp>

#include <android_media_MediaPlayer_OnPreparedListener.hpp>

#include <android_media_MediaPlayer_OnCompletionListener.hpp>

#include <android_media_MediaPlayer_OnErrorListener.hpp>

#include <android_media_MediaPlayer_OnInfoListener.hpp>

#include <android_view_Surface.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_lang_String.hpp>

#include <java_util_Map.hpp>

#include <android_media_MediaPlayer_TrackInfo.hpp>

#include <android_media_MediaPlayer_OnBufferingUpdateListener.hpp>

#include <android_media_MediaPlayer_OnSeekCompleteListener.hpp>

#include <android_media_MediaPlayer_OnVideoSizeChangedListener.hpp>

#include <android_media_MediaPlayer_OnTimedTextListener.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_content_Context;

class android_media_MediaPlayer;

class android_net_Uri;

class android_view_SurfaceHolder;

class android_media_MediaPlayer_OnPreparedListener;

class android_media_MediaPlayer_OnCompletionListener;

class android_media_MediaPlayer_OnErrorListener;

class android_media_MediaPlayer_OnInfoListener;

class android_view_Surface;

class java_io_FileDescriptor;

class java_lang_String;

class java_util_Map;

class android_media_MediaPlayer_TrackInfo;

class android_media_MediaPlayer_OnBufferingUpdateListener;

class android_media_MediaPlayer_OnSeekCompleteListener;

class android_media_MediaPlayer_OnVideoSizeChangedListener;

class android_media_MediaPlayer_OnTimedTextListener;

class android_media_MediaPlayer
{
public:

	android_media_MediaPlayer(const android_media_MediaPlayer& cc);
	android_media_MediaPlayer(void * proxy);
	// Public Constructors
	android_media_MediaPlayer();
	// Default Destructor
	virtual ~android_media_MediaPlayer();
	// Functions
	 void start();
	 void stop();
	 void reset();
	 void release();
	static AndroidCXX::android_media_MediaPlayer create(AndroidCXX::android_content_Context& arg0,int& arg1);
	static AndroidCXX::android_media_MediaPlayer create(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_net_Uri& arg1,AndroidCXX::android_view_SurfaceHolder& arg2);
	static AndroidCXX::android_media_MediaPlayer create(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_net_Uri& arg1);
	 int getDuration();
	 void prepare();
	 void pause();
	 int getCurrentPosition();
	 void seekTo(int& arg0);
	 bool isPlaying();
	 void setOnPreparedListener(AndroidCXX::android_media_MediaPlayer_OnPreparedListener& arg0);
	 void setOnCompletionListener(AndroidCXX::android_media_MediaPlayer_OnCompletionListener& arg0);
	 void setOnErrorListener(AndroidCXX::android_media_MediaPlayer_OnErrorListener& arg0);
	 void setOnInfoListener(AndroidCXX::android_media_MediaPlayer_OnInfoListener& arg0);
	 void setDisplay(AndroidCXX::android_view_SurfaceHolder& arg0);
	 void setSurface(AndroidCXX::android_view_Surface& arg0);
	 void setVideoScalingMode(int& arg0);
	 void setDataSource(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_net_Uri& arg1);
	 void setDataSource(AndroidCXX::java_io_FileDescriptor& arg0);
	 void setDataSource(AndroidCXX::java_lang_String& arg0);
	 void setDataSource(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_net_Uri& arg1,AndroidCXX::java_util_Map& arg2);
	 void setDataSource(AndroidCXX::java_io_FileDescriptor& arg0,long& arg1,long& arg2);
	 void prepareAsync();
	 void setWakeMode(AndroidCXX::android_content_Context& arg0,int& arg1);
	 void setScreenOnWhilePlaying(bool& arg0);
	 int getVideoWidth();
	 int getVideoHeight();
	 void setNextMediaPlayer(AndroidCXX::android_media_MediaPlayer& arg0);
	 void setAudioStreamType(int& arg0);
	 void setLooping(bool& arg0);
	 bool isLooping();
	 void setVolume(float& arg0,float& arg1);
	 void setAudioSessionId(int& arg0);
	 int getAudioSessionId();
	 void attachAuxEffect(int& arg0);
	 void setAuxEffectSendLevel(float& arg0);
	 std::vector<android_media_MediaPlayer_TrackInfo > getTrackInfo();
	 void addTimedTextSource(AndroidCXX::java_io_FileDescriptor& arg0,AndroidCXX::java_lang_String& arg1);
	 void addTimedTextSource(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_net_Uri& arg1,AndroidCXX::java_lang_String& arg2);
	 void addTimedTextSource(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 void addTimedTextSource(AndroidCXX::java_io_FileDescriptor& arg0,long& arg1,long& arg2,AndroidCXX::java_lang_String& arg3);
	 void selectTrack(int& arg0);
	 void deselectTrack(int& arg0);
	 void setOnBufferingUpdateListener(AndroidCXX::android_media_MediaPlayer_OnBufferingUpdateListener& arg0);
	 void setOnSeekCompleteListener(AndroidCXX::android_media_MediaPlayer_OnSeekCompleteListener& arg0);
	 void setOnVideoSizeChangedListener(AndroidCXX::android_media_MediaPlayer_OnVideoSizeChangedListener& arg0);
	 void setOnTimedTextListener(AndroidCXX::android_media_MediaPlayer_OnTimedTextListener& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer