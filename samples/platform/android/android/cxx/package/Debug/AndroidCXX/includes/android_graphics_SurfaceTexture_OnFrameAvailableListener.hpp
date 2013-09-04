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

class android_graphics_SurfaceTexture;

class android_graphics_SurfaceTexture_OnFrameAvailableListener : public AndroidCXX::java_lang_Object
{
public:

	android_graphics_SurfaceTexture_OnFrameAvailableListener(const android_graphics_SurfaceTexture_OnFrameAvailableListener& cc);
	android_graphics_SurfaceTexture_OnFrameAvailableListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_graphics_SurfaceTexture_OnFrameAvailableListener();
	// Functions
	virtual void  onFrameAvailable(AndroidCXX::android_graphics_SurfaceTexture const& arg0) ;

protected:
	android_graphics_SurfaceTexture_OnFrameAvailableListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_SurfaceTexture_OnFrameAvailableListener