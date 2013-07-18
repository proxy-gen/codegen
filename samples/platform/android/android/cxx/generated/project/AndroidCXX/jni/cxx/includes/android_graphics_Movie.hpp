/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		
		
 			
		


#ifndef _android_graphics_Movie
#define _android_graphics_Movie











#include <java_lang_String.hpp>
#include <java_io_InputStream.hpp>
#include <android_graphics_Paint.hpp>
#include <android_graphics_Canvas.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_graphics_Movie
{
public:
 bool isOpaque();
 bool setTime(int& arg0);
 int width();
 int height();
 void draw(android_graphics_Canvas& arg0,float& arg1,android_graphics_Paint& arg2);
 int duration();
static android_graphics_Movie decodeStream(java_io_InputStream& arg0);
static android_graphics_Movie decodeByteArray(std::vector<char>& arg0,int& arg1);
static android_graphics_Movie decodeFile(java_lang_String& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Movie