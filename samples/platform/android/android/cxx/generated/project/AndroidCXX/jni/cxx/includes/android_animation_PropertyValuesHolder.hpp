/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
 			
		
 			
 			
		
 			
 			
		
 			
 			
 			
 			
		
 			
 			
 			
		


#ifndef _android_animation_PropertyValuesHolder
#define _android_animation_PropertyValuesHolder
















#include <android_animation_TypeEvaluator.hpp>
#include <java_lang_String.hpp>
#include <android_util_Property.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_animation_PropertyValuesHolder
{
public:
 void setProperty(android_util_Property& arg0);
 java_lang_String toString();
 android_animation_PropertyValuesHolder clone();
 void setPropertyName(java_lang_String& arg0);
 java_lang_String getPropertyName();
static android_animation_PropertyValuesHolder ofInt(java_lang_String& arg0,std::vector<int>& arg1,android_util_Property& arg2);
static android_animation_PropertyValuesHolder ofFloat(android_util_Property& arg0,std::vector<float>& arg1,java_lang_String& arg2);
static android_animation_PropertyValuesHolder ofObject(java_lang_String& arg0,android_animation_TypeEvaluator& arg1,std::vector<long>& arg2,android_util_Property& arg3,android_animation_TypeEvaluator& arg4);
 void setIntValues(std::vector<int>& arg0);
 void setFloatValues(std::vector<float>& arg0);
 void setObjectValues(std::vector<long>& arg0);
 void setEvaluator(android_animation_TypeEvaluator& arg0);
static android_animation_PropertyValuesHolder ofKeyframe(android_util_Property& arg0,std::vector<long>& arg1,java_lang_String& arg2);
 void setKeyframes(std::vector<long>& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_PropertyValuesHolder