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

#include <android_content_Context.hpp>

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

class android_graphics_Canvas;

class android_content_Context;

class android_widget_EdgeEffect
{
public:

	android_widget_EdgeEffect(const android_widget_EdgeEffect& cc);
	android_widget_EdgeEffect(Proxy proxy);
	// Public Constructors
	android_widget_EdgeEffect(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_EdgeEffect();
	// Functions
	 void setSize(int const& arg0,int const& arg1);
	 void finish();
	 bool draw(AndroidCXX::android_graphics_Canvas const& arg0);
	 bool isFinished();
	 void onPull(float const& arg0);
	 void onRelease();
	 void onAbsorb(int const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_EdgeEffect