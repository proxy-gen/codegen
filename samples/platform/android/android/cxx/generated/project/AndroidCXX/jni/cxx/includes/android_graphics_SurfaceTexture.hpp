/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class android_graphics_SurfaceTexture
{
public:

	android_graphics_SurfaceTexture(const android_graphics_SurfaceTexture& cc);
	android_graphics_SurfaceTexture(Proxy proxy);
	// Public Constructors
	android_graphics_SurfaceTexture(int const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_SurfaceTexture();
	// Functions
	 void release();
	 long getTimestamp();
	 void setOnFrameAvailableListener(AndroidCXX::android_graphics_SurfaceTexture_OnFrameAvailableListener const& arg0);
	 void setDefaultBufferSize(int const& arg0,int const& arg1);
	 void updateTexImage();
	 void detachFromGLContext();
	 void attachToGLContext(int const& arg0);
	 void getTransformMatrix(std::vector<float> const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_SurfaceTexture