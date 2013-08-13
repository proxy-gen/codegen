/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_graphics_SurfaceTexture_OnFrameAvailableListener
#define _android_graphics_SurfaceTexture_OnFrameAvailableListener
//
// Scroll Down 
//



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

class android_graphics_SurfaceTexture;

class android_graphics_SurfaceTexture_OnFrameAvailableListener 
{
public:

	android_graphics_SurfaceTexture_OnFrameAvailableListener(const android_graphics_SurfaceTexture_OnFrameAvailableListener& cc);
	android_graphics_SurfaceTexture_OnFrameAvailableListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_SurfaceTexture_OnFrameAvailableListener();
	// Functions
	virtual void  onFrameAvailable(AndroidCXX::android_graphics_SurfaceTexture const& arg0) ;

protected:
	android_graphics_SurfaceTexture_OnFrameAvailableListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_SurfaceTexture_OnFrameAvailableListener