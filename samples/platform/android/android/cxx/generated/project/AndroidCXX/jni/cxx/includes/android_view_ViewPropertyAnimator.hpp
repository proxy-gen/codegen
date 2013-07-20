/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	
 		 
	
	
	
	
	
	
	
	
	
	
 		 
	
	
	
	
	
	
	
	
	
	
	
	
 		 
	
 		 
	

// Generated Code 

#ifndef _android_view_ViewPropertyAnimator
#define _android_view_ViewPropertyAnimator
//
// Scroll Down 
//



































#include <android_animation_TimeInterpolator.hpp>

#include <android_animation_Animator_AnimatorListener.hpp>

#include <java_lang_Runnable.hpp>

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

class android_view_ViewPropertyAnimator;

class android_animation_TimeInterpolator;

class android_animation_Animator_AnimatorListener;

class java_lang_Runnable;

class android_view_ViewPropertyAnimator
{
public:
	 void start();
	 android_view_ViewPropertyAnimator *  y(float& arg0);
	 android_view_ViewPropertyAnimator *  x(float& arg0);
	 void cancel();
	 android_view_ViewPropertyAnimator *  alpha(float& arg0);
	 android_view_ViewPropertyAnimator *  setInterpolator(android_animation_TimeInterpolator& arg0);
	 android_view_ViewPropertyAnimator *  setDuration(long& arg0);
	 long getDuration();
	 android_view_ViewPropertyAnimator *  rotation(float& arg0);
	 android_view_ViewPropertyAnimator *  rotationY(float& arg0);
	 android_view_ViewPropertyAnimator *  rotationX(float& arg0);
	 android_view_ViewPropertyAnimator *  scaleX(float& arg0);
	 android_view_ViewPropertyAnimator *  scaleY(float& arg0);
	 android_view_ViewPropertyAnimator *  translationX(float& arg0);
	 android_view_ViewPropertyAnimator *  translationY(float& arg0);
	 long getStartDelay();
	 android_view_ViewPropertyAnimator *  setStartDelay(long& arg0);
	 android_view_ViewPropertyAnimator *  setListener(android_animation_Animator_AnimatorListener& arg0);
	 android_view_ViewPropertyAnimator *  xBy(float& arg0);
	 android_view_ViewPropertyAnimator *  yBy(float& arg0);
	 android_view_ViewPropertyAnimator *  rotationBy(float& arg0);
	 android_view_ViewPropertyAnimator *  rotationXBy(float& arg0);
	 android_view_ViewPropertyAnimator *  rotationYBy(float& arg0);
	 android_view_ViewPropertyAnimator *  translationXBy(float& arg0);
	 android_view_ViewPropertyAnimator *  translationYBy(float& arg0);
	 android_view_ViewPropertyAnimator *  scaleXBy(float& arg0);
	 android_view_ViewPropertyAnimator *  scaleYBy(float& arg0);
	 android_view_ViewPropertyAnimator *  alphaBy(float& arg0);
	 android_view_ViewPropertyAnimator *  withLayer();
	 android_view_ViewPropertyAnimator *  withStartAction(java_lang_Runnable& arg0);
	 android_view_ViewPropertyAnimator *  withEndAction(java_lang_Runnable& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewPropertyAnimator