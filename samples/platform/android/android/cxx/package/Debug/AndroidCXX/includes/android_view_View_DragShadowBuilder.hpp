/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_graphics_Canvas.hpp>

#include <android_graphics_Point.hpp>


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

class android_view_View;

class android_graphics_Canvas;

class android_graphics_Point;

class android_view_View_DragShadowBuilder 
{
public:

	// Public ConstrucXXX
	android_view_View_DragShadowBuilder();
	android_view_View_DragShadowBuilder(AndroidCXX::android_view_View const& arg0);
	android_view_View_DragShadowBuilder(const android_view_View_DragShadowBuilder& cc);
	android_view_View_DragShadowBuilder(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_View_DragShadowBuilder();
	// Functions
	virtual AndroidCXX::android_view_View * getView() ;
	virtual void  onDrawShadow(AndroidCXX::android_graphics_Canvas const& arg0) ;
	virtual void  onProvideShadowMetrics(AndroidCXX::android_graphics_Point const& arg0,AndroidCXX::android_graphics_Point const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_DragShadowBuilder