/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//





#ifndef _android_widget_MediaController_MediaPlayerControl
#define _android_widget_MediaController_MediaPlayerControl












#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_MediaController_MediaPlayerControl
{
public:
	void start();
	int getDuration();
	void pause();
	int getCurrentPosition();
	void seekTo(int& arg0);
	bool isPlaying();
	int getBufferPercentage();
	bool canPause();
	bool canSeekBackward();
	bool canSeekForward();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_MediaController_MediaPlayerControl