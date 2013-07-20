/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
	
 		 
	
 		 
	
 		 
 		 
 	
 		 
 	
	
 		 
 		 
 		 
 		 
 	
 		 
 	
	
 		 
 		 
 		 
 		 
 	
 		 
 	
 	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 	
	
 		 
 	
 	
 	
 		 

// Generated Code 

#ifndef _android_animation_ObjectAnimator
#define _android_animation_ObjectAnimator
//
// Scroll Down 
//





















#include <android_util_Property.hpp>

#include <java_lang_String.hpp>


#include <java_lang_Object.hpp>

#include <java_lang_Integer.hpp>

#include <java_lang_Float.hpp>

#include <android_animation_TypeEvaluator.hpp>

#include <android_animation_PropertyValuesHolder.hpp>

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

class android_util_Property;

class java_lang_String;

class android_animation_ObjectAnimator;

class java_lang_Object;

class java_lang_Integer;

class java_lang_Float;

class android_animation_TypeEvaluator;

class android_animation_PropertyValuesHolder;

class android_animation_ObjectAnimator
{
public:
	android_animation_ObjectAnimator(const android_animation_ObjectAnimator& cc);
	android_animation_ObjectAnimator(void * proxy);
	virtual ~android_animation_ObjectAnimator();
	 void setProperty(android_util_Property& arg0);
	 java_lang_String *  toString();
	 android_animation_ObjectAnimator *  clone();
	 void start();
	 android_animation_ObjectAnimator *  setDuration(long& arg0);
	 void setTarget(java_lang_Object& arg0);
	 java_lang_Object *  getTarget();
	 void setupStartValues();
	 void setupEndValues();
	 void setPropertyName(java_lang_String& arg0);
	 java_lang_String *  getPropertyName();
	static android_animation_ObjectAnimator *  ofInt(java_lang_Object& arg0,java_lang_String& arg1,std::vector<int>& arg2,android_util_Property& arg3);
	static android_animation_ObjectAnimator *  ofFloat(java_lang_Object& arg0,java_lang_String& arg1,std::vector<float>& arg2,android_util_Property& arg3);
	static android_animation_ObjectAnimator *  ofObject(java_lang_Object& arg0,android_util_Property& arg1,android_animation_TypeEvaluator& arg2,std::vector<long>& arg3,java_lang_String& arg4,android_animation_TypeEvaluator& arg5);
	static android_animation_ObjectAnimator *  ofPropertyValuesHolder(java_lang_Object& arg0,std::vector<long>& arg1);
	 void setIntValues(std::vector<int>& arg0);
	 void setFloatValues(std::vector<float>& arg0);
	 void setObjectValues(std::vector<long>& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_ObjectAnimator