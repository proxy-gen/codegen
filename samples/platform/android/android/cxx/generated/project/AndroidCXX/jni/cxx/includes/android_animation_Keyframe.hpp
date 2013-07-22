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
// 
// 
// 

// Forward Declarations

class android_animation_Keyframe;

class java_lang_Object;

class java_lang_Class;

class android_animation_TimeInterpolator;

class android_animation_Keyframe
{
public:

	android_animation_Keyframe(const android_animation_Keyframe& cc);
	android_animation_Keyframe(void * proxy);
	// Public Constructors
	android_animation_Keyframe();
	// Default Destructor
	virtual ~android_animation_Keyframe();
	// Functions
	 AndroidCXX::android_animation_Keyframe clone();
	 AndroidCXX::java_lang_Object getValue();
	 AndroidCXX::java_lang_Class getType();
	 void setValue(AndroidCXX::java_lang_Object& arg0);
	 void setInterpolator(AndroidCXX::android_animation_TimeInterpolator& arg0);
	 float getFraction();
	 AndroidCXX::android_animation_TimeInterpolator getInterpolator();
	 bool hasValue();
	static AndroidCXX::android_animation_Keyframe ofInt(float& arg0);
	static AndroidCXX::android_animation_Keyframe ofInt(float& arg0,int& arg1);
	static AndroidCXX::android_animation_Keyframe ofFloat(float& arg0);
	static AndroidCXX::android_animation_Keyframe ofFloat(float& arg0,float& arg1);
	static AndroidCXX::android_animation_Keyframe ofObject(float& arg0);
	static AndroidCXX::android_animation_Keyframe ofObject(float& arg0,AndroidCXX::java_lang_Object& arg1);
	 void setFraction(float& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_Keyframe