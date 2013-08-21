/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//





















// Generated Code 

#ifndef _android_widget_MediaController_MediaPlayerControl
#define _android_widget_MediaController_MediaPlayerControl
//
// Scroll Down 
//



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

class android_widget_MediaController_MediaPlayerControl : public AndroidCXX::java_lang_Object
{
public:

	android_widget_MediaController_MediaPlayerControl(const android_widget_MediaController_MediaPlayerControl& cc);
	android_widget_MediaController_MediaPlayerControl(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_MediaController_MediaPlayerControl();
	// Functions
	virtual bool  canPause() ;
	virtual bool  canSeekBackward() ;
	virtual bool  canSeekForward() ;
	virtual int  getAudioSessionId() ;
	virtual int  getBufferPercentage() ;
	virtual int  getCurrentPosition() ;
	virtual int  getDuration() ;
	virtual bool  isPlaying() ;
	virtual void  pause() ;
	virtual void  seekTo(int const& arg0) ;
	virtual void  start() ;

protected:
	android_widget_MediaController_MediaPlayerControl();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_MediaController_MediaPlayerControl