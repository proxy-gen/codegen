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


using namespace AndroidCXX;

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_lang_reflect_TypeVariable;

class java_lang_reflect_Method;

class java_lang_Class;

class java_lang_annotation_Annotation;

class java_lang_reflect_Type;

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
	 java_lang_Object invoke(java_lang_Object& arg0,std::vector<java_lang_Object >& arg1);
	 bool equals(java_lang_Object& arg0);
	 java_lang_String toString();
	 int hashCode();
	 int getModifiers();
	 java_lang_String getName();
	 bool isSynthetic();
	 std::vector<java_lang_reflect_TypeVariable > getTypeParameters();
	 java_lang_Class getDeclaringClass();
	 java_lang_annotation_Annotation getAnnotation(java_lang_Class& arg0);
	 std::vector<java_lang_annotation_Annotation > getDeclaredAnnotations();
	 java_lang_Class getReturnType();
	 std::vector<java_lang_Class > getParameterTypes();
	 java_lang_String toGenericString();
	 java_lang_reflect_Type getGenericReturnType();
	 std::vector<java_lang_reflect_Type > getGenericParameterTypes();
	 std::vector<java_lang_Class > getExceptionTypes();
	 std::vector<java_lang_reflect_Type > getGenericExceptionTypes();
	 bool isBridge();
	 bool isVarArgs();
	 java_lang_Object getDefaultValue();
	 std::vector<std::vector<java_lang_annotation_Annotation > > getParameterAnnotations();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_Method