/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
	
 		 
 	
 		 
 	
 		 
 		 
 	
 		 
 	
 		 














// Generated Code 

#ifndef _java_lang_reflect_AccessibleObject
#define _java_lang_reflect_AccessibleObject
//
// Scroll Down 
//


#include <java_lang_Class.hpp>

#include <java_lang_annotation_Annotation.hpp>


#include <java_lang_reflect_AnnotatedElement.hpp>

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


class java_lang_reflect_AccessibleObject : public AndroidCXX::java_lang_reflect_AnnotatedElement
{
public:

	// Public Constructor
	java_lang_reflect_AccessibleObject(const java_lang_reflect_AccessibleObject& cc);
	java_lang_reflect_AccessibleObject(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_lang_reflect_AccessibleObject();
	// Functions
	virtual AndroidCXX::java_lang_annotation_Annotation * getAnnotation(AndroidCXX::java_lang_Class const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_annotation_Annotation>  getAnnotations() ;
	virtual std::vector<AndroidCXX::java_lang_annotation_Annotation>  getDeclaredAnnotations() ;
	virtual bool  isAccessible() ;
	virtual bool  isAnnotationPresent(AndroidCXX::java_lang_Class const& arg0) ;
	static void  setAccessible(std::vector<AndroidCXX::java_lang_reflect_AccessibleObject> const& arg0,bool const& arg1) ;
	virtual void  setAccessible(bool const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_AccessibleObject