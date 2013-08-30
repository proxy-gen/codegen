/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#ifndef _android_media_MediaPlayer_OnBufferingUpdateListener
#define _android_media_MediaPlayer_OnBufferingUpdateListener
//
// Scroll Down 
//


#include <android_media_MediaPlayer.hpp>

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

class android_media_MediaPlayer_OnBufferingUpdateListener
{
public:

	android_media_MediaPlayer_OnBufferingUpdateListener(const android_media_MediaPlayer_OnBufferingUpdateListener& cc);
	android_media_MediaPlayer_OnBufferingUpdateListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_media_MediaPlayer_OnBufferingUpdateListener();
	// Functions
	 void onBufferingUpdate(AndroidCXX::android_media_MediaPlayer const& arg0,int const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer_OnBufferingUpdateListener