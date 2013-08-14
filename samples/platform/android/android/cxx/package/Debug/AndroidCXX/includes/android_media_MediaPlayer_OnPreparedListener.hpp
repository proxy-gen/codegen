/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_media_MediaPlayer_OnPreparedListener
#define _android_media_MediaPlayer_OnPreparedListener
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

class android_media_MediaPlayer_OnPreparedListener : public java_lang_Object
{
public:

	android_media_MediaPlayer_OnPreparedListener(const android_media_MediaPlayer_OnPreparedListener& cc);
	android_media_MediaPlayer_OnPreparedListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_media_MediaPlayer_OnPreparedListener();
	// Functions
	virtual void  onPrepared(AndroidCXX::android_media_MediaPlayer const& arg0) ;

protected:
	android_media_MediaPlayer_OnPreparedListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer_OnPreparedListener