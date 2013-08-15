/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	


 		 
 		 
 		 
 		 
 		 















// Generated Code 

#ifndef _android_view_SurfaceView
#define _android_view_SurfaceView
//
// Scroll Down 
//


#include <android_graphics_Region.hpp>

#include <android_graphics_Canvas.hpp>

#include <android_view_SurfaceHolder.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


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

class android_graphics_Region;

class android_graphics_Canvas;

class android_view_SurfaceHolder;

class android_content_Context;

class android_util_AttributeSet;

class android_view_SurfaceView : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_view_SurfaceView(AndroidCXX::android_content_Context const& arg0);
	android_view_SurfaceView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_view_SurfaceView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_view_SurfaceView(const android_view_SurfaceView& cc);
	android_view_SurfaceView(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_SurfaceView();
	// Functions
	virtual bool  gatherTransparentRegion(AndroidCXX::android_graphics_Region const& arg0) ;
	virtual void  setVisibility(int const& arg0) ;
	virtual void  draw(AndroidCXX::android_graphics_Canvas const& arg0) ;
	virtual AndroidCXX::android_view_SurfaceHolder * getHolder() ;
	virtual void  setZOrderMediaOverlay(bool const& arg0) ;
	virtual void  setZOrderOnTop(bool const& arg0) ;
	virtual void  setSecure(bool const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_SurfaceView