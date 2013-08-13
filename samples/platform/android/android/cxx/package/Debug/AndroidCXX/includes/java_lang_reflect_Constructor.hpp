/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_reflect_GenericDeclaration.hpp>

#include <java_lang_reflect_Member.hpp>

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

class java_lang_Object;

class java_lang_String;

class java_lang_reflect_TypeVariable;


class java_lang_Class;

class java_lang_annotation_Annotation;

class java_lang_reflect_Type;

class java_lang_reflect_Constructor : public java_lang_reflect_GenericDeclaration,public java_lang_reflect_Member
{
public:

	// Public ConstrucXXX
	java_lang_reflect_Constructor(const java_lang_reflect_Constructor& cc);
	java_lang_reflect_Constructor(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_reflect_Constructor();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual int  getModifiers() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual AndroidCXX::java_lang_Object * newInstance(std::vector<java_lang_Object> const& arg0) ;
	virtual bool  isSynthetic() ;
	virtual std::vector<java_lang_reflect_TypeVariable>  getTypeParameters() ;
	virtual AndroidCXX::java_lang_Class * getDeclaringClass() ;
	virtual AndroidCXX::java_lang_annotation_Annotation * getAnnotation(AndroidCXX::java_lang_Class const& arg0) ;
	virtual std::vector<java_lang_annotation_Annotation>  getDeclaredAnnotations() ;
	virtual std::vector<java_lang_Class>  getParameterTypes() ;
	virtual AndroidCXX::java_lang_String * toGenericString() ;
	virtual std::vector<java_lang_reflect_Type>  getGenericParameterTypes() ;
	virtual std::vector<java_lang_Class>  getExceptionTypes() ;
	virtual std::vector<java_lang_reflect_Type>  getGenericExceptionTypes() ;
	virtual bool  isVarArgs() ;
	virtual std::vector<std::vector<java_lang_annotation_Annotation> >  getParameterAnnotations() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_Constructor