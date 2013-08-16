/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_view_SurfaceHolder_Callback;

class android_graphics_Rect;

class android_view_Surface;

class android_graphics_Canvas;

class android_view_SurfaceHolder : public java_lang_Object
{
public:

	android_view_SurfaceHolder(const android_view_SurfaceHolder& cc);
	android_view_SurfaceHolder(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_SurfaceHolder();
	// Functions
	virtual void  addCallback(AndroidCXX::android_view_SurfaceHolder_Callback const& arg0) ;
	virtual AndroidCXX::android_graphics_Rect * getSurfaceFrame() ;
	virtual AndroidCXX::android_view_Surface * getSurface() ;
	virtual bool  isCreating() ;
	virtual AndroidCXX::android_graphics_Canvas * lockCanvas(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual AndroidCXX::android_graphics_Canvas * lockCanvas() ;
	virtual void  removeCallback(AndroidCXX::android_view_SurfaceHolder_Callback const& arg0) ;
	virtual void  setFixedSize(int const& arg0,int const& arg1) ;
	virtual void  setFormat(int const& arg0) ;
	virtual void  setKeepScreenOn(bool const& arg0) ;
	virtual void  setSizeFromLayout() ;
	virtual void  setType(int const& arg0) ;
	virtual void  unlockCanvasAndPost(AndroidCXX::android_graphics_Canvas const& arg0) ;

protected:
	android_view_SurfaceHolder();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_SurfaceHolder