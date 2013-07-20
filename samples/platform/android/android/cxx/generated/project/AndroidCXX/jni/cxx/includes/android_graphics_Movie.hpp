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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_graphics_Canvas;

class android_graphics_Paint;

class java_io_InputStream;

class android_graphics_Movie;

class java_lang_String;

class android_graphics_Movie
{
public:
	 bool isOpaque();
	 bool setTime(int& arg0);
	 int width();
	 int height();
	 void draw(android_graphics_Canvas& arg0,float& arg1,android_graphics_Paint& arg2);
	 int duration();
	static android_graphics_Movie *  decodeStream(java_io_InputStream& arg0);
	static android_graphics_Movie *  decodeByteArray(std::vector<char>& arg0,int& arg1);
	static android_graphics_Movie *  decodeFile(java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Movie