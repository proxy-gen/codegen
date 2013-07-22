/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_graphics_Canvas.hpp>

#include <android_graphics_Paint.hpp>

#include <java_io_InputStream.hpp>


#include <java_lang_String.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_graphics_Canvas;

class android_graphics_Paint;

class java_io_InputStream;

class android_graphics_Movie;

class java_lang_String;

class android_graphics_Movie
{
public:

	android_graphics_Movie(const android_graphics_Movie& cc);
	android_graphics_Movie(void * proxy);
	// Public Constructors
	android_graphics_Movie();
	// Default Destructor
	virtual ~android_graphics_Movie();
	// Functions
	 bool isOpaque();
	 bool setTime(int& arg0);
	 int width();
	 int height();
	 void draw(AndroidCXX::android_graphics_Canvas& arg0,float& arg1,float& arg2,AndroidCXX::android_graphics_Paint& arg3);
	 void draw(AndroidCXX::android_graphics_Canvas& arg0,float& arg1,float& arg2);
	 int duration();
	static AndroidCXX::android_graphics_Movie decodeStream(AndroidCXX::java_io_InputStream& arg0);
	static AndroidCXX::android_graphics_Movie decodeByteArray(std::vector<byte>& arg0,int& arg1,int& arg2);
	static AndroidCXX::android_graphics_Movie decodeFile(AndroidCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Movie