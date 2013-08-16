/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
	
 		 
 	
 		 
 	
 		 
 		 
 	
 		 











// Generated Code 

#ifndef _java_lang_reflect_AnnotatedElement
#define _java_lang_reflect_AnnotatedElement
//
// Scroll Down 
//



#include <java_lang_Object.hpp>

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

class java_lang_Class;

class java_lang_annotation_Annotation;

class java_lang_reflect_AnnotatedElement : public java_lang_Object
{
public:

	java_lang_reflect_AnnotatedElement(const java_lang_reflect_AnnotatedElement& cc);
	java_lang_reflect_AnnotatedElement(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_reflect_AnnotatedElement();
	// Functions
	virtual AndroidCXX::java_lang_annotation_Annotation * getAnnotation(AndroidCXX::java_lang_Class const& arg0) ;
	virtual std::vector<java_lang_annotation_Annotation>  getAnnotations() ;
	virtual std::vector<java_lang_annotation_Annotation>  getDeclaredAnnotations() ;
	virtual bool  isAnnotationPresent(AndroidCXX::java_lang_Class const& arg0) ;

protected:
	java_lang_reflect_AnnotatedElement();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_AnnotatedElement