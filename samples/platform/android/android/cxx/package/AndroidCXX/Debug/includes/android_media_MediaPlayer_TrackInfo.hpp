/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 











// Generated Code 

#ifndef _android_media_MediaPlayer_TrackInfo
#define _android_media_MediaPlayer_TrackInfo
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

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

class java_lang_String;

class android_os_Parcel;

class android_media_MediaPlayer_TrackInfo
{
public:

	android_media_MediaPlayer_TrackInfo(const android_media_MediaPlayer_TrackInfo& cc);
	android_media_MediaPlayer_TrackInfo(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_media_MediaPlayer_TrackInfo();
	// Functions
	 AndroidCXX::java_lang_String getLanguage();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 int getTrackType();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer_TrackInfo