/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_media_MediaPlayer_OnErrorListener
#define _android_media_MediaPlayer_OnErrorListener
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

class android_media_MediaPlayer_OnErrorListener 
{
public:

	android_media_MediaPlayer_OnErrorListener(const android_media_MediaPlayer_OnErrorListener& cc);
	android_media_MediaPlayer_OnErrorListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_media_MediaPlayer_OnErrorListener();
	// Functions
	virtual bool  onError(AndroidCXX::android_media_MediaPlayer const& arg0,int const& arg1,int const& arg2) ;

protected:
	android_media_MediaPlayer_OnErrorListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer_OnErrorListener