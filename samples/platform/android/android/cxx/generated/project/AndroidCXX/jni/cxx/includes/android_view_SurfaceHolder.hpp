/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		
 			
		
		


#ifndef _android_view_SurfaceHolder
#define _android_view_SurfaceHolder














#include <android_graphics_Canvas.hpp>
#include <android_view_SurfaceHolder_Callback.hpp>
#include <android_view_Surface.hpp>
#include <android_graphics_Rect.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_SurfaceHolder
{
public:
	void setFormat(int& arg0);
	void setType(int& arg0);
	void setKeepScreenOn(bool& arg0);
	void addCallback(android_view_SurfaceHolder_Callback& arg0);
	void removeCallback(android_view_SurfaceHolder_Callback& arg0);
	bool isCreating();
	void setFixedSize(int& arg0);
	void setSizeFromLayout();
	android_graphics_Canvas lockCanvas(android_graphics_Rect& arg0);
	void unlockCanvasAndPost(android_graphics_Canvas& arg0);
	android_graphics_Rect getSurfaceFrame();
	android_view_Surface getSurface();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_SurfaceHolder