/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

	android_view_Display(const android_view_Display& cc);
	android_view_Display(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_Display();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_lang_String getName();
	 void getSize(AndroidCXX::android_graphics_Point const& arg0);
	 bool isValid();
	 int getFlags();
	 int getWidth();
	 int getHeight();
	 int getRotation();
	 int getDisplayId();
	 void getRectSize(AndroidCXX::android_graphics_Rect const& arg0);
	 void getCurrentSizeRange(AndroidCXX::android_graphics_Point const& arg0,AndroidCXX::android_graphics_Point const& arg1);
	 int getOrientation();
	 int getPixelFormat();
	 float getRefreshRate();
	 void getMetrics(AndroidCXX::android_util_DisplayMetrics const& arg0);
	 void getRealSize(AndroidCXX::android_graphics_Point const& arg0);
	 void getRealMetrics(AndroidCXX::android_util_DisplayMetrics const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_Display