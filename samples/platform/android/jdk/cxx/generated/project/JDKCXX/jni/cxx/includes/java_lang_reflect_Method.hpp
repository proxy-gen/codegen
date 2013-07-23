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

namespace JDKCXX {

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
	// TODO: remove
	// 
	// java_lang_reflect_Method();
	// 
	// Default Destructor
	virtual ~java_lang_reflect_Method();
	// Functions
	 JDKCXX::java_lang_Object invoke(JDKCXX::java_lang_Object& arg0,std::vector<JDKCXX::java_lang_Object >& arg1);
	 bool equals(JDKCXX::java_lang_Object& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 int getModifiers();
	 JDKCXX::java_lang_String getName();
	 bool isSynthetic();
	 std::vector<JDKCXX::java_lang_reflect_TypeVariable > getTypeParameters();
	 JDKCXX::java_lang_Class getDeclaringClass();
	 JDKCXX::java_lang_annotation_Annotation getAnnotation(JDKCXX::java_lang_Class& arg0);
	 std::vector<JDKCXX::java_lang_annotation_Annotation > getDeclaredAnnotations();
	 JDKCXX::java_lang_Class getReturnType();
	 std::vector<JDKCXX::java_lang_Class > getParameterTypes();
	 JDKCXX::java_lang_String toGenericString();
	 JDKCXX::java_lang_reflect_Type getGenericReturnType();
	 std::vector<JDKCXX::java_lang_reflect_Type > getGenericParameterTypes();
	 std::vector<JDKCXX::java_lang_Class > getExceptionTypes();
	 std::vector<JDKCXX::java_lang_reflect_Type > getGenericExceptionTypes();
	 bool isBridge();
	 bool isVarArgs();
	 JDKCXX::java_lang_Object getDefaultValue();
	 std::vector<std::vector<JDKCXX::java_lang_annotation_Annotation > > getParameterAnnotations();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_Method