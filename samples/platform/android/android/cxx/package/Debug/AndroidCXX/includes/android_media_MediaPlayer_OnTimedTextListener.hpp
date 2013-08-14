/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#ifndef _android_media_MediaPlayer_OnTimedTextListener
#define _android_media_MediaPlayer_OnTimedTextListener
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

class android_media_TimedText;

class android_media_MediaPlayer_OnTimedTextListener : public java_lang_Object
{
public:

	android_media_MediaPlayer_OnTimedTextListener(const android_media_MediaPlayer_OnTimedTextListener& cc);
	android_media_MediaPlayer_OnTimedTextListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_media_MediaPlayer_OnTimedTextListener();
	// Functions
	virtual void  onTimedText(AndroidCXX::android_media_MediaPlayer const& arg0,AndroidCXX::android_media_TimedText const& arg1) ;

protected:
	android_media_MediaPlayer_OnTimedTextListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer_OnTimedTextListener