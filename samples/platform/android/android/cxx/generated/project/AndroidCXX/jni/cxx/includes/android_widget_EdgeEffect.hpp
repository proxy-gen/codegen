/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 

// Generated Code 

#ifndef _android_widget_EdgeEffect
#define _android_widget_EdgeEffect
//
// Scroll Down 
//










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

// Forward Declarations

class android_graphics_Canvas;

class android_widget_EdgeEffect
{
public:
	android_widget_EdgeEffect(const android_widget_EdgeEffect& cc);
	android_widget_EdgeEffect(void * proxy);
	virtual ~android_widget_EdgeEffect();
	 void setSize(int& arg0);
	 void finish();
	 bool draw(android_graphics_Canvas& arg0);
	 bool isFinished();
	 void onPull(float& arg0);
	 void onRelease();
	 void onAbsorb(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_EdgeEffect