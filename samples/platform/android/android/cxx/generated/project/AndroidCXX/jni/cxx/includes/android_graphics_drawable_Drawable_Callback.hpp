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

// Forward Declarations

class android_graphics_drawable_Drawable;

class java_lang_Runnable;

class android_graphics_drawable_Drawable_Callback
{
public:

	android_graphics_drawable_Drawable_Callback(const android_graphics_drawable_Drawable_Callback& cc);
	android_graphics_drawable_Drawable_Callback(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_drawable_Drawable_Callback();
	// Functions
	 void invalidateDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void scheduleDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::java_lang_Runnable const& arg1,long const& arg2);
	 void unscheduleDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::java_lang_Runnable const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_drawable_Drawable_Callback