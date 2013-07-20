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
	 java_lang_String *  getLanguage();
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 int getTrackType();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer_TrackInfo