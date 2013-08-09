/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	
 		 
	
 		 
	
	




















// Generated Code 

#ifndef _android_view_SurfaceHolder
#define _android_view_SurfaceHolder
//
// Scroll Down 
//


#include <android_view_SurfaceHolder_Callback.hpp>

#include <android_graphics_Canvas.hpp>

#include <android_graphics_Rect.hpp>

#include <android_view_Surface.hpp>

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

class android_view_SurfaceHolder_Callback;

class android_graphics_Canvas;

class android_graphics_Rect;

class android_view_Surface;

class android_view_SurfaceHolder
{
public:

	android_view_SurfaceHolder(const android_view_SurfaceHolder& cc);
	android_view_SurfaceHolder(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_SurfaceHolder();
	// Functions
	 void setFormat(int const& arg0);
	 void setType(int const& arg0);
	 void setKeepScreenOn(bool const& arg0);
	 void addCallback(AndroidCXX::android_view_SurfaceHolder_Callback const& arg0);
	 void removeCallback(AndroidCXX::android_view_SurfaceHolder_Callback const& arg0);
	 bool isCreating();
	 void setFixedSize(int const& arg0,int const& arg1);
	 void setSizeFromLayout();
	 AndroidCXX::android_graphics_Canvas lockCanvas();
	 AndroidCXX::android_graphics_Canvas lockCanvas(AndroidCXX::android_graphics_Rect const& arg0);
	 void unlockCanvasAndPost(AndroidCXX::android_graphics_Canvas const& arg0);
	 AndroidCXX::android_graphics_Rect getSurfaceFrame();
	 AndroidCXX::android_view_Surface getSurface();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_SurfaceHolder