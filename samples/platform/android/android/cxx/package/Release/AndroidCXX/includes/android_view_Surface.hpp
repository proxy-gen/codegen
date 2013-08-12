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

#include <android_graphics_SurfaceTexture.hpp>

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

class android_graphics_Rect;

class android_graphics_Canvas;

class android_graphics_SurfaceTexture;

class android_view_Surface
{
public:

	android_view_Surface(const android_view_Surface& cc);
	android_view_Surface(Proxy proxy);
	// Public Constructors
	android_view_Surface(AndroidCXX::android_graphics_SurfaceTexture const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_Surface();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 void release();
	 bool isValid();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 void readFromParcel(AndroidCXX::android_os_Parcel const& arg0);
	 AndroidCXX::android_graphics_Canvas lockCanvas(AndroidCXX::android_graphics_Rect const& arg0);
	 void unlockCanvasAndPost(AndroidCXX::android_graphics_Canvas const& arg0);
	 void unlockCanvas(AndroidCXX::android_graphics_Canvas const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_Surface