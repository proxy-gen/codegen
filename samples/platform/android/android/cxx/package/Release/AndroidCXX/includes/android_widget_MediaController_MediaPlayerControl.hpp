/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class android_widget_MediaController_MediaPlayerControl
{
public:

	android_widget_MediaController_MediaPlayerControl(const android_widget_MediaController_MediaPlayerControl& cc);
	android_widget_MediaController_MediaPlayerControl(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_MediaController_MediaPlayerControl();
	// Functions
	 void start();
	 int getDuration();
	 void pause();
	 int getCurrentPosition();
	 void seekTo(int const& arg0);
	 bool isPlaying();
	 int getBufferPercentage();
	 bool canPause();
	 bool canSeekBackward();
	 bool canSeekForward();
	 int getAudioSessionId();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_MediaController_MediaPlayerControl