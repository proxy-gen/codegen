/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
 		 
	
 		 
 	
	
 		 
 	
 	
	
 		 
 		 
 		 
 	
 	
	
 		 
 		 
 		 
 	
	
 		 
 		 
 	
	
 		 
 		 
 		 
 	
 	
	
 		 
 		 
 	
 	
 	
 		 
 		 
 		 
 	
	
 		 
 		 
 	
	
 		 
 	
 		 

























// Generated Code 

#ifndef _android_animation_PropertyValuesHolder
#define _android_animation_PropertyValuesHolder
//
// Scroll Down 
//


#include <android_util_Property.hpp>

#include <java_lang_String.hpp>


#include <java_lang_Integer.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_Float.hpp>

#include <android_animation_TypeEvaluator.hpp>

#include <android_animation_Keyframe.hpp>

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

class android_util_Property;

class java_lang_String;

class android_animation_PropertyValuesHolder;

class java_lang_Integer;

class java_lang_Object;

class java_lang_Float;

class android_animation_TypeEvaluator;

class android_animation_Keyframe;

class android_animation_PropertyValuesHolder
{
public:

	android_animation_PropertyValuesHolder(const android_animation_PropertyValuesHolder& cc);
	android_animation_PropertyValuesHolder(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_animation_PropertyValuesHolder();
	// Functions
	 void setProperty(AndroidCXX::android_util_Property const& arg0);
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::android_animation_PropertyValuesHolder clone();
	 void setPropertyName(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getPropertyName();
	static AndroidCXX::android_animation_PropertyValuesHolder ofInt(AndroidCXX::java_lang_String const& arg0,std::vector<int> const& arg1);
	static AndroidCXX::android_animation_PropertyValuesHolder ofInt(AndroidCXX::android_util_Property const& arg0,std::vector<int> const& arg1);
	static AndroidCXX::android_animation_PropertyValuesHolder ofFloat(AndroidCXX::android_util_Property const& arg0,std::vector<float> const& arg1);
	static AndroidCXX::android_animation_PropertyValuesHolder ofFloat(AndroidCXX::java_lang_String const& arg0,std::vector<float> const& arg1);
	static AndroidCXX::android_animation_PropertyValuesHolder ofObject(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_animation_TypeEvaluator const& arg1,std::vector<AndroidCXX::java_lang_Object > const& arg2);
	static AndroidCXX::android_animation_PropertyValuesHolder ofObject(AndroidCXX::android_util_Property const& arg0,AndroidCXX::android_animation_TypeEvaluator const& arg1,std::vector<AndroidCXX::java_lang_Object > const& arg2);
	 void setIntValues(std::vector<int> const& arg0);
	 void setFloatValues(std::vector<float> const& arg0);
	 void setObjectValues(std::vector<AndroidCXX::java_lang_Object > const& arg0);
	 void setEvaluator(AndroidCXX::android_animation_TypeEvaluator const& arg0);
	static AndroidCXX::android_animation_PropertyValuesHolder ofKeyframe(AndroidCXX::android_util_Property const& arg0,std::vector<AndroidCXX::android_animation_Keyframe > const& arg1);
	static AndroidCXX::android_animation_PropertyValuesHolder ofKeyframe(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::android_animation_Keyframe > const& arg1);
	 void setKeyframes(std::vector<AndroidCXX::android_animation_Keyframe > const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_PropertyValuesHolder