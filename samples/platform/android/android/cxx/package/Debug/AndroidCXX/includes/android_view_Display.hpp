/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
























// Generated Code 

#ifndef _android_view_Display
#define _android_view_Display
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_graphics_Point.hpp>

#include <android_graphics_Rect.hpp>

#include <android_util_DisplayMetrics.hpp>


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

class android_graphics_Point;

class android_graphics_Rect;

class android_util_DisplayMetrics;

class android_view_Display 
{
public:

	// Public ConstrucXXX
	android_view_Display(const android_view_Display& cc);
	android_view_Display(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_Display();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual void  getSize(AndroidCXX::android_graphics_Point const& arg0) ;
	virtual bool  isValid() ;
	virtual int  getOrientation() ;
	virtual int  getWidth() ;
	virtual int  getHeight() ;
	virtual int  getRotation() ;
	virtual int  getDisplayId() ;
	virtual int  getFlags() ;
	virtual void  getRectSize(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  getCurrentSizeRange(AndroidCXX::android_graphics_Point const& arg0,AndroidCXX::android_graphics_Point const& arg1) ;
	virtual int  getPixelFormat() ;
	virtual float  getRefreshRate() ;
	virtual void  getMetrics(AndroidCXX::android_util_DisplayMetrics const& arg0) ;
	virtual void  getRealSize(AndroidCXX::android_graphics_Point const& arg0) ;
	virtual void  getRealMetrics(AndroidCXX::android_util_DisplayMetrics const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_Display