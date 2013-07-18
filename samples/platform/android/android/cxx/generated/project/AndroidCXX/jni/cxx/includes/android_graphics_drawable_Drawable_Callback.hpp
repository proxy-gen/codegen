/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			


#ifndef _android_graphics_drawable_Drawable_Callback
#define _android_graphics_drawable_Drawable_Callback





#include <android_graphics_drawable_Drawable.hpp>
#include <java_lang_Runnable.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_graphics_drawable_Drawable_Callback
{
public:
	void invalidateDrawable(android_graphics_drawable_Drawable& arg0);
	void scheduleDrawable(android_graphics_drawable_Drawable& arg0,java_lang_Runnable& arg1,long& arg2);
	void unscheduleDrawable(android_graphics_drawable_Drawable& arg0,java_lang_Runnable& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_drawable_Drawable_Callback