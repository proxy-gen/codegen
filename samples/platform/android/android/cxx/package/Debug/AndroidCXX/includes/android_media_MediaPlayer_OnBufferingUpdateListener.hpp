/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_media_MediaPlayer;

class android_media_MediaPlayer_OnBufferingUpdateListener : public AndroidCXX::java_lang_Object
{
public:

	android_media_MediaPlayer_OnBufferingUpdateListener(const android_media_MediaPlayer_OnBufferingUpdateListener& cc);
	android_media_MediaPlayer_OnBufferingUpdateListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_media_MediaPlayer_OnBufferingUpdateListener();
	// Functions
	virtual void  onBufferingUpdate(AndroidCXX::android_media_MediaPlayer const& arg0,int const& arg1) ;

protected:
	android_media_MediaPlayer_OnBufferingUpdateListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer_OnBufferingUpdateListener