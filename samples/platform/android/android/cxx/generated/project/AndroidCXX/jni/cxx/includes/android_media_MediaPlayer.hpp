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

#include <android_media_MediaPlayer_OnBufferingUpdateListener.hpp>

#include <android_media_MediaPlayer_OnSeekCompleteListener.hpp>

#include <android_media_MediaPlayer_OnVideoSizeChangedListener.hpp>

#include <android_media_MediaPlayer_OnTimedTextListener.hpp>

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

class android_content_Context;

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

class android_media_MediaPlayer_OnBufferingUpdateListener;

class android_media_MediaPlayer_OnSeekCompleteListener;

class android_media_MediaPlayer_OnVideoSizeChangedListener;

class android_media_MediaPlayer_OnTimedTextListener;

class android_media_MediaPlayer
{
public:
 void start();
 void stop();
 void reset();
 void release();
static android_media_MediaPlayer create(android_content_Context& arg0,int& arg1,android_net_Uri& arg2,android_view_SurfaceHolder& arg3);
 int getDuration();
 void prepare();
 void pause();
 int getCurrentPosition();
 void seekTo(int& arg0);
 bool isPlaying();
 void setOnPreparedListener(android_media_MediaPlayer_OnPreparedListener& arg0);
 void setOnCompletionListener(android_media_MediaPlayer_OnCompletionListener& arg0);
 void setOnErrorListener(android_media_MediaPlayer_OnErrorListener& arg0);
 void setOnInfoListener(android_media_MediaPlayer_OnInfoListener& arg0);
 void setDisplay(android_view_SurfaceHolder& arg0);
 void setSurface(android_view_Surface& arg0);
 void setVideoScalingMode(int& arg0);
 void setDataSource(android_content_Context& arg0,android_net_Uri& arg1,java_io_FileDescriptor& arg2,java_lang_String& arg3,java_util_Map& arg4,long& arg5);
 void prepareAsync();
 void setWakeMode(android_content_Context& arg0,int& arg1);
 void setScreenOnWhilePlaying(bool& arg0);
 int getVideoWidth();
 int getVideoHeight();
 void setNextMediaPlayer(android_media_MediaPlayer& arg0);
 void setAudioStreamType(int& arg0);
 void setLooping(bool& arg0);
 bool isLooping();
 void setVolume(float& arg0);
 void setAudioSessionId(int& arg0);
 int getAudioSessionId();
 void attachAuxEffect(int& arg0);
 void setAuxEffectSendLevel(float& arg0);
 std::vector<long> getTrackInfo();
 void addTimedTextSource(java_io_FileDescriptor& arg0,java_lang_String& arg1,android_content_Context& arg2,android_net_Uri& arg3,long& arg4);
 void selectTrack(int& arg0);
 void deselectTrack(int& arg0);
 void setOnBufferingUpdateListener(android_media_MediaPlayer_OnBufferingUpdateListener& arg0);
 void setOnSeekCompleteListener(android_media_MediaPlayer_OnSeekCompleteListener& arg0);
 void setOnVideoSizeChangedListener(android_media_MediaPlayer_OnVideoSizeChangedListener& arg0);
 void setOnTimedTextListener(android_media_MediaPlayer_OnTimedTextListener& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer