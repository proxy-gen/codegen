/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_graphics_drawable_Drawable;

class java_lang_Runnable;

class android_graphics_drawable_Drawable_Callback : public java_lang_Object
{
public:

	android_graphics_drawable_Drawable_Callback(const android_graphics_drawable_Drawable_Callback& cc);
	android_graphics_drawable_Drawable_Callback(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_drawable_Drawable_Callback();
	// Functions
	virtual void  invalidateDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  scheduleDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::java_lang_Runnable const& arg1,long const& arg2) ;
	virtual void  unscheduleDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::java_lang_Runnable const& arg1) ;

protected:
	android_graphics_drawable_Drawable_Callback();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_drawable_Drawable_Callback