/*
 * Header (Instance CXX)
 * Author: codegen
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

	// Public ConstrucXXX
	android_media_MediaPlayer();
	android_media_MediaPlayer(const android_media_MediaPlayer& cc);
	android_media_MediaPlayer(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_media_MediaPlayer();
	// Functions
	virtual void  start() ;
	virtual void  stop() ;
	virtual void  reset() ;
	virtual void  release() ;
	static AndroidCXX::android_media_MediaPlayer * create(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_net_Uri const& arg1,AndroidCXX::android_view_SurfaceHolder const& arg2) ;
	static AndroidCXX::android_media_MediaPlayer * create(AndroidCXX::android_content_Context const& arg0,int const& arg1) ;
	static AndroidCXX::android_media_MediaPlayer * create(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_net_Uri const& arg1) ;
	virtual void  pause() ;
	virtual int  getDuration() ;
	virtual int  getCurrentPosition() ;
	virtual void  seekTo(int const& arg0) ;
	virtual bool  isPlaying() ;
	virtual int  getAudioSessionId() ;
	virtual void  setOnPreparedListener(AndroidCXX::android_media_MediaPlayer_OnPreparedListener const& arg0) ;
	virtual void  setOnCompletionListener(AndroidCXX::android_media_MediaPlayer_OnCompletionListener const& arg0) ;
	virtual void  setOnErrorListener(AndroidCXX::android_media_MediaPlayer_OnErrorListener const& arg0) ;
	virtual void  setOnInfoListener(AndroidCXX::android_media_MediaPlayer_OnInfoListener const& arg0) ;
	virtual void  prepare() ;
	virtual void  setDisplay(AndroidCXX::android_view_SurfaceHolder const& arg0) ;
	virtual void  setSurface(AndroidCXX::android_view_Surface const& arg0) ;
	virtual void  setVideoScalingMode(int const& arg0) ;
	virtual void  setDataSource(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_net_Uri const& arg1,AndroidCXX::java_util_Map const& arg2) ;
	virtual void  setDataSource(AndroidCXX::java_io_FileDescriptor const& arg0) ;
	virtual void  setDataSource(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_net_Uri const& arg1) ;
	virtual void  setDataSource(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setDataSource(AndroidCXX::java_io_FileDescriptor const& arg0,long const& arg1,long const& arg2) ;
	virtual void  prepareAsync() ;
	virtual void  setWakeMode(AndroidCXX::android_content_Context const& arg0,int const& arg1) ;
	virtual void  setScreenOnWhilePlaying(bool const& arg0) ;
	virtual int  getVideoWidth() ;
	virtual int  getVideoHeight() ;
	virtual void  setNextMediaPlayer(AndroidCXX::android_media_MediaPlayer const& arg0) ;
	virtual void  setAudioStreamType(int const& arg0) ;
	virtual void  setLooping(bool const& arg0) ;
	virtual bool  isLooping() ;
	virtual void  setVolume(float const& arg0,float const& arg1) ;
	virtual void  setAudioSessionId(int const& arg0) ;
	virtual void  attachAuxEffect(int const& arg0) ;
	virtual void  setAuxEffectSendLevel(float const& arg0) ;
	virtual std::vector<android_media_MediaPlayer_TrackInfo>  getTrackInfo() ;
	virtual void  addTimedTextSource(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_net_Uri const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual void  addTimedTextSource(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  addTimedTextSource(AndroidCXX::java_io_FileDescriptor const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  addTimedTextSource(AndroidCXX::java_io_FileDescriptor const& arg0,long const& arg1,long const& arg2,AndroidCXX::java_lang_String const& arg3) ;
	virtual void  selectTrack(int const& arg0) ;
	virtual void  deselectTrack(int const& arg0) ;
	virtual void  setOnBufferingUpdateListener(AndroidCXX::android_media_MediaPlayer_OnBufferingUpdateListener const& arg0) ;
	virtual void  setOnSeekCompleteListener(AndroidCXX::android_media_MediaPlayer_OnSeekCompleteListener const& arg0) ;
	virtual void  setOnVideoSizeChangedListener(AndroidCXX::android_media_MediaPlayer_OnVideoSizeChangedListener const& arg0) ;
	virtual void  setOnTimedTextListener(AndroidCXX::android_media_MediaPlayer_OnTimedTextListener const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer