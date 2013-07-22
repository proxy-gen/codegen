/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 










// Generated Code 

#ifndef _android_view_animation_Animation_AnimationListener
#define _android_view_animation_Animation_AnimationListener
//
// Scroll Down 
//


#include <android_view_animation_Animation.hpp>

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

class android_view_animation_Animation;

class android_view_animation_Animation_AnimationListener
{
public:

	android_view_animation_Animation_AnimationListener(const android_view_animation_Animation_AnimationListener& cc);
	android_view_animation_Animation_AnimationListener(void * proxy);
	// Public Constructors
	android_view_animation_Animation_AnimationListener();
	// Default Destructor
	virtual ~android_view_animation_Animation_AnimationListener();
	// Functions
	 void onAnimationStart(AndroidCXX::android_view_animation_Animation& arg0);
	 void onAnimationEnd(AndroidCXX::android_view_animation_Animation& arg0);
	 void onAnimationRepeat(AndroidCXX::android_view_animation_Animation& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_animation_Animation_AnimationListener