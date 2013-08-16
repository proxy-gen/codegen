/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
	
 		 
 	
 		 
 	
 		 
	
	
	
	
 		 
	
 	
 		 
	
	
	
 		 
 	
 		 
 		 
 		 
	

























// Generated Code 

#ifndef _java_lang_Package
#define _java_lang_Package
//
// Scroll Down 
//


#include <java_lang_Class.hpp>

#include <java_lang_annotation_Annotation.hpp>

#include <java_lang_String.hpp>

#include <java_net_URL.hpp>


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

class java_lang_String;


class java_net_URL;

class java_lang_Package : public java_lang_reflect_AnnotatedElement
{
public:

	// Public ConstrucXXX
	java_lang_Package(const java_lang_Package& cc);
	java_lang_Package(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Package();
	// Functions
	virtual AndroidCXX::java_lang_annotation_Annotation * getAnnotation(AndroidCXX::java_lang_Class const& arg0) ;
	virtual std::vector<java_lang_annotation_Annotation>  getAnnotations() ;
	virtual std::vector<java_lang_annotation_Annotation>  getDeclaredAnnotations() ;
	virtual AndroidCXX::java_lang_String * getImplementationTitle() ;
	virtual AndroidCXX::java_lang_String * getImplementationVendor() ;
	virtual AndroidCXX::java_lang_String * getImplementationVersion() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	static AndroidCXX::java_lang_Package * getPackage(AndroidCXX::java_lang_String const& arg0) ;
	static std::vector<java_lang_Package>  getPackages() ;
	virtual AndroidCXX::java_lang_String * getSpecificationTitle() ;
	virtual AndroidCXX::java_lang_String * getSpecificationVendor() ;
	virtual AndroidCXX::java_lang_String * getSpecificationVersion() ;
	virtual int  hashCode() ;
	virtual bool  isAnnotationPresent(AndroidCXX::java_lang_Class const& arg0) ;
	virtual bool  isCompatibleWith(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  isSealed(AndroidCXX::java_net_URL const& arg0) ;
	virtual bool  isSealed() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Package