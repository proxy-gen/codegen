/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			


#ifndef _android_media_MediaPlayer_TrackInfo
#define _android_media_MediaPlayer_TrackInfo






#include <android_os_Parcel.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_media_MediaPlayer_TrackInfo
{
public:
 java_lang_String getLanguage();
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
 int getTrackType();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_MediaPlayer_TrackInfo