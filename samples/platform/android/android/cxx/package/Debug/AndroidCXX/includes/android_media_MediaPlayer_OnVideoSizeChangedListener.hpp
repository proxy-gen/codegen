/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_media_MediaPlayer_OnVideoSizeChangedListener
#define _android_media_MediaPlayer_OnVideoSizeChangedListener
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

class android_media_MediaPlayer;

class android_media_MediaPlayer_OnVideoSizeChangedListener 
{
public:

	android_media_MediaPlayer_OnVideoSizeChangedListener(const android_media_MediaPlayer_OnVideoSizeChangedListener& cc);
	android_media_MediaPlayer_OnVideoSizeChangedListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_media_MediaPlayer_OnVideoSizeChangedListener();
	// Functions
	virtual void  onVideoSizeChanged(AndroidCXX::android_media_MediaPlayer const& arg0,int const& arg1,int const& arg2) ;

protected:
	android_media_MediaPlayer_OnVideoSizeChangedListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer_OnVideoSizeChangedListener