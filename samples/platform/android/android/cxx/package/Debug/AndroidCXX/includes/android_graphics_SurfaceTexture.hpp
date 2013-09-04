/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
 		 
















// Generated Code 

#ifndef _android_graphics_SurfaceTexture
#define _android_graphics_SurfaceTexture
//
// Scroll Down 
//


#include <android_graphics_SurfaceTexture_OnFrameAvailableListener.hpp>


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

class android_graphics_SurfaceTexture_OnFrameAvailableListener;

class android_graphics_SurfaceTexture : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_graphics_SurfaceTexture(int const& arg0,Proxy * aProxy = new Proxy());
	android_graphics_SurfaceTexture(const android_graphics_SurfaceTexture& cc);
	android_graphics_SurfaceTexture(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_graphics_SurfaceTexture();
	// Functions
	virtual void  attachToGLContext(int const& arg0) ;
	virtual void  detachFromGLContext() ;
	virtual long  getTimestamp() ;
	virtual void  getTransformMatrix(std::vector<float> const& arg0) ;
	virtual void  release() ;
	virtual void  setDefaultBufferSize(int const& arg0,int const& arg1) ;
	virtual void  setOnFrameAvailableListener(AndroidCXX::android_graphics_SurfaceTexture_OnFrameAvailableListener const& arg0) ;
	virtual void  updateTexImage() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_SurfaceTexture