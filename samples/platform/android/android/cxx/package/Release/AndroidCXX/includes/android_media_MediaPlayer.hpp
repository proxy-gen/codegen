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

#include <java_util_Map.hpp>

#include <java_lang_String.hpp>

#include <java_io_FileDescriptor.hpp>

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

// Forward Declarations

class android_content_Context;

class android_net_Uri;

class android_media_MediaPlayer;

class android_view_SurfaceHolder;

class android_media_MediaPlayer_OnPreparedListener;

class android_media_MediaPlayer_OnCompletionListener;

class android_media_MediaPlayer_OnErrorListener;

class android_media_MediaPlayer_OnInfoListener;

class android_view_Surface;

class java_util_Map;

class java_lang_String;

class java_io_FileDescriptor;

class android_media_MediaPlayer_TrackInfo;

class android_media_MediaPlayer_OnBufferingUpdateListener;

class android_media_MediaPlayer_OnSeekCompleteListener;

class android_media_MediaPlayer_OnVideoSizeChangedListener;

class android_media_MediaPlayer_OnTimedTextListener;

class android_media_MediaPlayer
{
public:

	android_media_MediaPlayer(const android_media_MediaPlayer& cc);
	android_media_MediaPlayer(Proxy proxy);
	// Public Constructors
	android_media_MediaPlayer();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_media_MediaPlayer();
	// Functions
	 void start();
	 void stop();
	 void reset();
	 void release();
	static AndroidCXX::android_media_MediaPlayer create(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_net_Uri const& arg1);
	static AndroidCXX::android_media_MediaPlayer create(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_net_Uri const& arg1,AndroidCXX::android_view_SurfaceHolder const& arg2);
	static AndroidCXX::android_media_MediaPlayer create(AndroidCXX::android_content_Context const& arg0,int const& arg1);
	 int getDuration();
	 void prepare();
	 void pause();
	 int getCurrentPosition();
	 void seekTo(int const& arg0);
	 bool isPlaying();
	 int getAudioSessionId();
	 void setOnPreparedListener(AndroidCXX::android_media_MediaPlayer_OnPreparedListener const& arg0);
	 void setOnCompletionListener(AndroidCXX::android_media_MediaPlayer_OnCompletionListener const& arg0);
	 void setOnErrorListener(AndroidCXX::android_media_MediaPlayer_OnErrorListener const& arg0);
	 void setOnInfoListener(AndroidCXX::android_media_MediaPlayer_OnInfoListener const& arg0);
	 void setDisplay(AndroidCXX::android_view_SurfaceHolder const& arg0);
	 void setSurface(AndroidCXX::android_view_Surface const& arg0);
	 void setVideoScalingMode(int const& arg0);
	 void setDataSource(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_net_Uri const& arg1,AndroidCXX::java_util_Map const& arg2);
	 void setDataSource(AndroidCXX::java_io_FileDescriptor const& arg0,long const& arg1,long const& arg2);
	 void setDataSource(AndroidCXX::java_io_FileDescriptor const& arg0);
	 void setDataSource(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_net_Uri const& arg1);
	 void setDataSource(AndroidCXX::java_lang_String const& arg0);
	 void prepareAsync();
	 void setWakeMode(AndroidCXX::android_content_Context const& arg0,int const& arg1);
	 void setScreenOnWhilePlaying(bool const& arg0);
	 int getVideoWidth();
	 int getVideoHeight();
	 void setNextMediaPlayer(AndroidCXX::android_media_MediaPlayer const& arg0);
	 void setAudioStreamType(int const& arg0);
	 void setLooping(bool const& arg0);
	 bool isLooping();
	 void setVolume(float const& arg0,float const& arg1);
	 void setAudioSessionId(int const& arg0);
	 void attachAuxEffect(int const& arg0);
	 void setAuxEffectSendLevel(float const& arg0);
	 std::vector<android_media_MediaPlayer_TrackInfo> getTrackInfo();
	 void addTimedTextSource(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_net_Uri const& arg1,AndroidCXX::java_lang_String const& arg2);
	 void addTimedTextSource(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 void addTimedTextSource(AndroidCXX::java_io_FileDescriptor const& arg0,AndroidCXX::java_lang_String const& arg1);
	 void addTimedTextSource(AndroidCXX::java_io_FileDescriptor const& arg0,long const& arg1,long const& arg2,AndroidCXX::java_lang_String const& arg3);
	 void selectTrack(int const& arg0);
	 void deselectTrack(int const& arg0);
	 void setOnBufferingUpdateListener(AndroidCXX::android_media_MediaPlayer_OnBufferingUpdateListener const& arg0);
	 void setOnSeekCompleteListener(AndroidCXX::android_media_MediaPlayer_OnSeekCompleteListener const& arg0);
	 void setOnVideoSizeChangedListener(AndroidCXX::android_media_MediaPlayer_OnVideoSizeChangedListener const& arg0);
	 void setOnTimedTextListener(AndroidCXX::android_media_MediaPlayer_OnTimedTextListener const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer