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

#include <android_util_AttributeSet.hpp>

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
// 

// Forward Declarations

class android_view_animation_Interpolator;

class android_content_Context;

class android_view_animation_Animation;

class android_view_View;

class android_util_AttributeSet;

class android_view_animation_LayoutAnimationController
{
public:

	android_view_animation_LayoutAnimationController(const android_view_animation_LayoutAnimationController& cc);
	android_view_animation_LayoutAnimationController(void * proxy);
	// Public Constructors
	android_view_animation_LayoutAnimationController(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_view_animation_LayoutAnimationController(AndroidCXX::android_view_animation_Animation& arg0);
	android_view_animation_LayoutAnimationController(AndroidCXX::android_view_animation_Animation& arg0,float& arg1);
	android_view_animation_LayoutAnimationController();
	// Default Destructor
	virtual ~android_view_animation_LayoutAnimationController();
	// Functions
	 void start();
	 void setInterpolator(AndroidCXX::android_view_animation_Interpolator& arg0);
	 void setInterpolator(AndroidCXX::android_content_Context& arg0,int& arg1);
	 AndroidCXX::android_view_animation_Animation getAnimation();
	 AndroidCXX::android_view_animation_Interpolator getInterpolator();
	 void setAnimation(AndroidCXX::android_view_animation_Animation& arg0);
	 void setAnimation(AndroidCXX::android_content_Context& arg0,int& arg1);
	 int getOrder();
	 void setOrder(int& arg0);
	 float getDelay();
	 void setDelay(float& arg0);
	 bool willOverlap();
	 AndroidCXX::android_view_animation_Animation getAnimationForView(AndroidCXX::android_view_View& arg0);
	 bool isDone();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_animation_LayoutAnimationController