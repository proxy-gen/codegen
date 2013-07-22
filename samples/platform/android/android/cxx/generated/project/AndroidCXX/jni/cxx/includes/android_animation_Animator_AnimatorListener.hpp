/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 











// Generated Code 

#ifndef _android_animation_Animator_AnimatorListener
#define _android_animation_Animator_AnimatorListener
//
// Scroll Down 
//


#include <android_animation_Animator.hpp>

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

// Forward Declarations

class android_animation_Animator;

class android_animation_Animator_AnimatorListener
{
public:

	android_animation_Animator_AnimatorListener(const android_animation_Animator_AnimatorListener& cc);
	android_animation_Animator_AnimatorListener(void * proxy);
	// Public Constructors
	android_animation_Animator_AnimatorListener();
	// Default Destructor
	virtual ~android_animation_Animator_AnimatorListener();
	// Functions
	 void onAnimationStart(AndroidCXX::android_animation_Animator& arg0);
	 void onAnimationEnd(AndroidCXX::android_animation_Animator& arg0);
	 void onAnimationRepeat(AndroidCXX::android_animation_Animator& arg0);
	 void onAnimationCancel(AndroidCXX::android_animation_Animator& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_Animator_AnimatorListener