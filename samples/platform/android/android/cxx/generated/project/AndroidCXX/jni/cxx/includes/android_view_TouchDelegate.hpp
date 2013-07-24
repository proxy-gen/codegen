/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 


 		 
 		 







// Generated Code 

#ifndef _android_view_TouchDelegate
#define _android_view_TouchDelegate
//
// Scroll Down 
//


#include <android_view_MotionEvent.hpp>

#include <android_graphics_Rect.hpp>

#include <android_view_View.hpp>

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

class android_view_MotionEvent;

class android_graphics_Rect;

class android_view_View;

class android_view_TouchDelegate
{
public:

	android_view_TouchDelegate(const android_view_TouchDelegate& cc);
	android_view_TouchDelegate(void * proxy);
	// Public Constructors
	android_view_TouchDelegate(AndroidCXX::android_graphics_Rect& arg0,AndroidCXX::android_view_View& arg1);
	// TODO: remove
	// 
	// android_view_TouchDelegate();
	// 
	// Default Destructor
	virtual ~android_view_TouchDelegate();
	// Functions
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_TouchDelegate