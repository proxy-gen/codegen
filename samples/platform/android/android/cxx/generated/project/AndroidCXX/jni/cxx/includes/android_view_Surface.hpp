/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
		
 			
 			

// Generated Code 

#ifndef _android_view_Surface
#define _android_view_Surface
//
// Scroll Down 
//












#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <android_graphics_Rect.hpp>

#include <android_graphics_Canvas.hpp>

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

class android_graphics_Rect;

class android_graphics_Canvas;

class android_view_Surface
{
public:
 java_lang_String toString();
 void release();
 bool isValid();
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
 void readFromParcel(android_os_Parcel& arg0);
 android_graphics_Canvas lockCanvas(android_graphics_Rect& arg0);
 void unlockCanvasAndPost(android_graphics_Canvas& arg0);
 void unlockCanvas(android_graphics_Canvas& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_Surface