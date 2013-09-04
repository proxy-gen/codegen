/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
	
 		 
	
 		 
	
 		 
 		 
 		 

















// Generated Code 

#ifndef _android_graphics_Movie
#define _android_graphics_Movie
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_io_InputStream.hpp>

#include <android_graphics_Canvas.hpp>

#include <android_graphics_Paint.hpp>


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


class java_lang_String;

class java_io_InputStream;

class android_graphics_Canvas;

class android_graphics_Paint;

class android_graphics_Movie : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_graphics_Movie(const android_graphics_Movie& cc);
	android_graphics_Movie(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Movie();
	// Functions
	static AndroidCXX::android_graphics_Movie * decodeByteArray(std::vector<byte> const& arg0,int const& arg1,int const& arg2) ;
	static AndroidCXX::android_graphics_Movie * decodeFile(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::android_graphics_Movie * decodeStream(AndroidCXX::java_io_InputStream const& arg0) ;
	virtual void  draw(AndroidCXX::android_graphics_Canvas const& arg0,float const& arg1,float const& arg2,AndroidCXX::android_graphics_Paint const& arg3) ;
	virtual void  draw(AndroidCXX::android_graphics_Canvas const& arg0,float const& arg1,float const& arg2) ;
	virtual int  duration() ;
	virtual int  height() ;
	virtual bool  isOpaque() ;
	virtual bool  setTime(int const& arg0) ;
	virtual int  width() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Movie