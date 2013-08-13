/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
	
 		 


 		 














// Generated Code 

#ifndef _android_graphics_Picture
#define _android_graphics_Picture
//
// Scroll Down 
//


#include <android_graphics_Canvas.hpp>

#include <java_io_InputStream.hpp>

#include <java_io_OutputStream.hpp>


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

class android_graphics_Canvas;

class java_io_InputStream;


class java_io_OutputStream;

class android_graphics_Picture 
{
public:

	// Public ConstrucXXX
	android_graphics_Picture();
	android_graphics_Picture(AndroidCXX::android_graphics_Picture const& arg0);
	android_graphics_Picture(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Picture();
	// Functions
	virtual int  getWidth() ;
	virtual int  getHeight() ;
	virtual void  draw(AndroidCXX::android_graphics_Canvas const& arg0) ;
	static AndroidCXX::android_graphics_Picture * createFromStream(AndroidCXX::java_io_InputStream const& arg0) ;
	virtual AndroidCXX::android_graphics_Canvas * beginRecording(int const& arg0,int const& arg1) ;
	virtual void  endRecording() ;
	virtual void  writeToStream(AndroidCXX::java_io_OutputStream const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Picture