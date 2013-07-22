/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 


 		 










// Generated Code 

#ifndef _android_view_View_DragShadowBuilder
#define _android_view_View_DragShadowBuilder
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_graphics_Point.hpp>

#include <android_graphics_Canvas.hpp>

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

class android_view_View;

class android_graphics_Point;

class android_graphics_Canvas;

class android_view_View_DragShadowBuilder
{
public:

	android_view_View_DragShadowBuilder(const android_view_View_DragShadowBuilder& cc);
	android_view_View_DragShadowBuilder(void * proxy);
	// Public Constructors
	android_view_View_DragShadowBuilder(AndroidCXX::android_view_View& arg0);
	android_view_View_DragShadowBuilder();
	// Default Destructor
	virtual ~android_view_View_DragShadowBuilder();
	// Functions
	 AndroidCXX::android_view_View getView();
	 void onProvideShadowMetrics(AndroidCXX::android_graphics_Point& arg0,AndroidCXX::android_graphics_Point& arg1);
	 void onDrawShadow(AndroidCXX::android_graphics_Canvas& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_DragShadowBuilder