/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_graphics_Rect.hpp>

#include <android_graphics_Canvas.hpp>

#include <android_os_Parcel.hpp>

#include <java_lang_String.hpp>

#include <android_graphics_SurfaceTexture.hpp>


#include <android_os_Parcelable.hpp>

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

class android_graphics_Rect;

class android_graphics_Canvas;

class android_os_Parcel;

class java_lang_String;

class android_graphics_SurfaceTexture;

class android_view_Surface : public AndroidCXX::android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_view_Surface(AndroidCXX::android_graphics_SurfaceTexture const& arg0);
	android_view_Surface(const android_view_Surface& cc);
	android_view_Surface(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_Surface();
	// Functions
	virtual int  describeContents() ;
	virtual bool  isValid() ;
	virtual AndroidCXX::android_graphics_Canvas * lockCanvas(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  readFromParcel(AndroidCXX::android_os_Parcel const& arg0) ;
	virtual void  release() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  unlockCanvasAndPost(AndroidCXX::android_graphics_Canvas const& arg0) ;
	virtual void  unlockCanvas(AndroidCXX::android_graphics_Canvas const& arg0) ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_Surface