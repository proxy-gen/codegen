/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
 	
	
 		 
 	
 		 
 	
 		 
 	
 		 
	
 	
 		 
 		 
 	
	
 		 
 	
 		 
 	
 		 
 	
 		 
	
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 	
 		 

// Generated Code 

#ifndef _java_lang_reflect_Constructor
#define _java_lang_reflect_Constructor
//
// Scroll Down 
//





















#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_lang_reflect_TypeVariable.hpp>


#include <java_lang_Class.hpp>

#include <java_lang_annotation_Annotation.hpp>

#include <java_lang_reflect_Type.hpp>

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

class java_lang_Object;

class java_lang_String;

class java_lang_reflect_TypeVariable;

class java_lang_reflect_Constructor;

class java_lang_Class;

class java_lang_annotation_Annotation;

class java_lang_reflect_Type;

class java_lang_reflect_Constructor
{
public:
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 int getModifiers();
	 java_lang_String *  getName();
	 java_lang_Object *  newInstance(std::vector<long>& arg0);
	 bool isSynthetic();
	 std::vector<long> getTypeParameters();
	 java_lang_Class *  getDeclaringClass();
	 java_lang_annotation_Annotation *  getAnnotation(java_lang_Class& arg0);
	 std::vector<long> getDeclaredAnnotations();
	 std::vector<long> getParameterTypes();
	 java_lang_String *  toGenericString();
	 std::vector<long> getGenericParameterTypes();
	 std::vector<long> getExceptionTypes();
	 std::vector<long> getGenericExceptionTypes();
	 bool isVarArgs();
	 std::vector<long> getParameterAnnotations();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_Constructor