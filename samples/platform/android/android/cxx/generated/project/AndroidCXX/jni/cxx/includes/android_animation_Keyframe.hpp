/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	
 		 
 		 
	
	
	
 		 
	

// Generated Code 

#ifndef _android_animation_Keyframe
#define _android_animation_Keyframe
//
// Scroll Down 
//
















#include <java_lang_Object.hpp>

#include <java_lang_Class.hpp>

#include <android_animation_TimeInterpolator.hpp>

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

class android_animation_Keyframe;

class java_lang_Object;

class java_lang_Class;

class android_animation_TimeInterpolator;

class android_animation_Keyframe
{
public:
	 android_animation_Keyframe *  clone();
	 java_lang_Object *  getValue();
	 java_lang_Class *  getType();
	 void setValue(java_lang_Object& arg0);
	 void setInterpolator(android_animation_TimeInterpolator& arg0);
	 float getFraction();
	 android_animation_TimeInterpolator *  getInterpolator();
	 bool hasValue();
	static android_animation_Keyframe *  ofInt(float& arg0,int& arg1);
	static android_animation_Keyframe *  ofFloat(float& arg0);
	static android_animation_Keyframe *  ofObject(float& arg0,java_lang_Object& arg1);
	 void setFraction(float& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_Keyframe