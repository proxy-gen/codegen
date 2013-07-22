/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 










// Generated Code 

#ifndef _android_graphics_drawable_Drawable_Callback
#define _android_graphics_drawable_Drawable_Callback
//
// Scroll Down 
//


#include <android_graphics_drawable_Drawable.hpp>

#include <java_lang_Runnable.hpp>

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

// Forward Declarations

class android_graphics_drawable_Drawable;

class java_lang_Runnable;

class android_graphics_drawable_Drawable_Callback
{
public:

	android_graphics_drawable_Drawable_Callback(const android_graphics_drawable_Drawable_Callback& cc);
	android_graphics_drawable_Drawable_Callback(void * proxy);
	// Public Constructors
	android_graphics_drawable_Drawable_Callback();
	// Default Destructor
	virtual ~android_graphics_drawable_Drawable_Callback();
	// Functions
	 void invalidateDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 void scheduleDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0,AndroidCXX::java_lang_Runnable& arg1,long& arg2);
	 void unscheduleDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0,AndroidCXX::java_lang_Runnable& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_drawable_Drawable_Callback