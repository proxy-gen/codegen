/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#ifndef _android_media_MediaPlayer_OnInfoListener
#define _android_media_MediaPlayer_OnInfoListener
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

class android_media_MediaPlayer_OnInfoListener
{
public:

	android_media_MediaPlayer_OnInfoListener(const android_media_MediaPlayer_OnInfoListener& cc);
	android_media_MediaPlayer_OnInfoListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_media_MediaPlayer_OnInfoListener();
	// Functions
	 bool onInfo(AndroidCXX::android_media_MediaPlayer const& arg0,int const& arg1,int const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer_OnInfoListener