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

#include <java_lang_Class.hpp>

#include <java_lang_annotation_Annotation.hpp>

#include <java_lang_reflect_Type.hpp>

#include <java_lang_String.hpp>

#include <java_lang_reflect_TypeVariable.hpp>


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

class java_lang_Class;

class java_lang_annotation_Annotation;

class java_lang_reflect_Type;

class java_lang_String;

class java_lang_reflect_TypeVariable;


class java_lang_reflect_Constructor : public AndroidCXX::java_lang_reflect_GenericDeclaration,public AndroidCXX::java_lang_reflect_Member
{
public:

	// Public Constructor
	java_lang_reflect_Constructor(const java_lang_reflect_Constructor& cc);
	java_lang_reflect_Constructor(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_lang_reflect_Constructor();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_annotation_Annotation * getAnnotation(AndroidCXX::java_lang_Class const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_annotation_Annotation>  getDeclaredAnnotations() ;
	virtual AndroidCXX::java_lang_Class * getDeclaringClass() ;
	virtual std::vector<AndroidCXX::java_lang_Class>  getExceptionTypes() ;
	virtual std::vector<AndroidCXX::java_lang_reflect_Type>  getGenericExceptionTypes() ;
	virtual std::vector<AndroidCXX::java_lang_reflect_Type>  getGenericParameterTypes() ;
	virtual int  getModifiers() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual std::vector<std::vector<AndroidCXX::java_lang_annotation_Annotation> >  getParameterAnnotations() ;
	virtual std::vector<AndroidCXX::java_lang_Class>  getParameterTypes() ;
	virtual std::vector<AndroidCXX::java_lang_reflect_TypeVariable>  getTypeParameters() ;
	virtual int  hashCode() ;
	virtual bool  isSynthetic() ;
	virtual bool  isVarArgs() ;
	virtual AndroidCXX::java_lang_Object * newInstance(std::vector<AndroidCXX::java_lang_Object> const& arg0) ;
	virtual AndroidCXX::java_lang_String * toGenericString() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_Constructor