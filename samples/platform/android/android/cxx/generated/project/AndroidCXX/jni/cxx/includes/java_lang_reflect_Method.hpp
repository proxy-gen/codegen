/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 	
	
 		 
 		 
	
	
 	
 		 
 	
 		 
	
 	
 		 
 		 
 	
	
 		 
 	
 		 
	
 	
 		 
 	
 		 
 	
 		 
	
	
 	
 		 
 	
 		 
 	
 		 
 	
 		 
	
 	
 	
 		 





























// Generated Code 

#ifndef _java_lang_reflect_Method
#define _java_lang_reflect_Method
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

class AndroidCXX::java_lang_Object;

class AndroidCXX::java_lang_String;

class AndroidCXX::java_lang_reflect_TypeVariable;

class AndroidCXX::java_lang_reflect_Method;

class AndroidCXX::java_lang_Class;

class AndroidCXX::java_lang_annotation_Annotation;

class AndroidCXX::java_lang_reflect_Type;

class java_lang_reflect_Method
{
public:

	java_lang_reflect_Method(const java_lang_reflect_Method& cc);
	java_lang_reflect_Method(void * proxy);
	// Public Constructors
	java_lang_reflect_Method();
	// Default Destructor
	virtual ~java_lang_reflect_Method();
	// Functions
	 AndroidCXX::java_lang_Object invoke(AndroidCXX::java_lang_Object& arg0,std::vector<java_lang_Object >& arg1);
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int getModifiers();
	 AndroidCXX::java_lang_String getName();
	 bool isSynthetic();
	 std::vector<java_lang_reflect_TypeVariable > getTypeParameters();
	 AndroidCXX::java_lang_Class getDeclaringClass();
	 AndroidCXX::java_lang_annotation_Annotation getAnnotation(AndroidCXX::java_lang_Class& arg0);
	 std::vector<java_lang_annotation_Annotation > getDeclaredAnnotations();
	 AndroidCXX::java_lang_Class getReturnType();
	 std::vector<java_lang_Class > getParameterTypes();
	 AndroidCXX::java_lang_String toGenericString();
	 AndroidCXX::java_lang_reflect_Type getGenericReturnType();
	 std::vector<java_lang_reflect_Type > getGenericParameterTypes();
	 std::vector<java_lang_Class > getExceptionTypes();
	 std::vector<java_lang_reflect_Type > getGenericExceptionTypes();
	 bool isBridge();
	 bool isVarArgs();
	 AndroidCXX::java_lang_Object getDefaultValue();
	 std::vector<std::vector<java_lang_annotation_Annotation > > getParameterAnnotations();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_Method