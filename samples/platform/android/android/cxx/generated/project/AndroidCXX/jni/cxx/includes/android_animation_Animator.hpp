/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
	
 		 
 		 
 		 
	
 	
 		 

// Generated Code 

#ifndef _android_animation_Animator
#define _android_animation_Animator
//
// Scroll Down 
//






















#include <android_animation_TimeInterpolator.hpp>

#include <java_lang_Object.hpp>

#include <android_animation_Animator_AnimatorListener.hpp>

#include <java_util_ArrayList.hpp>

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

class android_animation_Animator;

class android_animation_TimeInterpolator;

class java_lang_Object;

class android_animation_Animator_AnimatorListener;

class java_util_ArrayList;

class android_animation_Animator
{
public:
	 android_animation_Animator *  clone();
	 void start();
	 void end();
	 void cancel();
	 void setInterpolator(android_animation_TimeInterpolator& arg0);
	 android_animation_Animator *  setDuration(long& arg0);
	 long getDuration();
	 void setTarget(java_lang_Object& arg0);
	 long getStartDelay();
	 void setStartDelay(long& arg0);
	 bool isRunning();
	 bool isStarted();
	 void addListener(android_animation_Animator_AnimatorListener& arg0);
	 void removeListener(android_animation_Animator_AnimatorListener& arg0);
	 java_util_ArrayList *  getListeners();
	 void removeAllListeners();
	 void setupStartValues();
	 void setupEndValues();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_Animator