/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
	
	
 		 
 		 
 		 
	

// Generated Code 

#ifndef _android_view_animation_LayoutAnimationController
#define _android_view_animation_LayoutAnimationController
//
// Scroll Down 
//















#include <android_view_animation_Interpolator.hpp>

#include <android_content_Context.hpp>

#include <android_view_animation_Animation.hpp>

#include <android_view_View.hpp>

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

class android_view_animation_Interpolator;

class android_content_Context;

class android_view_animation_Animation;

class android_view_View;

class android_view_animation_LayoutAnimationController
{
public:
	 void start();
	 void setInterpolator(android_view_animation_Interpolator& arg0,android_content_Context& arg1,int& arg2);
	 android_view_animation_Animation *  getAnimation();
	 android_view_animation_Interpolator *  getInterpolator();
	 void setAnimation(android_view_animation_Animation& arg0,android_content_Context& arg1,int& arg2);
	 int getOrder();
	 void setOrder(int& arg0);
	 float getDelay();
	 void setDelay(float& arg0);
	 bool willOverlap();
	 android_view_animation_Animation *  getAnimationForView(android_view_View& arg0);
	 bool isDone();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_animation_LayoutAnimationController