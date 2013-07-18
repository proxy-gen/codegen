/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
		
		
 			


#ifndef _android_graphics_Picture
#define _android_graphics_Picture









#include <java_io_OutputStream.hpp>
#include <java_io_InputStream.hpp>
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

class android_graphics_Picture
{
public:
 int getWidth();
 int getHeight();
 void draw(android_graphics_Canvas& arg0);
static android_graphics_Picture createFromStream(java_io_InputStream& arg0);
 android_graphics_Canvas beginRecording(int& arg0);
 void endRecording();
 void writeToStream(java_io_OutputStream& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Picture