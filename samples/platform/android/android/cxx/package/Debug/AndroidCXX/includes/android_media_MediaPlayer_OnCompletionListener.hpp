/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_media_MediaPlayer_OnCompletionListener
#define _android_media_MediaPlayer_OnCompletionListener
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

class android_media_MediaPlayer_OnCompletionListener 
{
public:

	android_media_MediaPlayer_OnCompletionListener(const android_media_MediaPlayer_OnCompletionListener& cc);
	android_media_MediaPlayer_OnCompletionListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_media_MediaPlayer_OnCompletionListener();
	// Functions
	virtual void  onCompletion(AndroidCXX::android_media_MediaPlayer const& arg0) ;

protected:
	android_media_MediaPlayer_OnCompletionListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer_OnCompletionListener