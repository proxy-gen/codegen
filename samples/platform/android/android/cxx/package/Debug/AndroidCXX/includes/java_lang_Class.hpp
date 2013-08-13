/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 	
 		 
 		 
 		 
	
 	
 		 
	
 		 
 	
 		 
 		 
	
 	
 		 
	
 	
 		 
	
	
	
 	
 		 
 	
 		 
 	
 		 
	
	
 	
 		 
 	
 		 
 	
 		 
 	
 		 
	
	
 	
 		 
	
 	
 		 
	
 	
 		 
	
	
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 		 
	
 		 
 	
	
 		 
 	
 		 
 	
	
 	
 		 
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 		 
	
 		 
 	
	
 		 
 	
 		 
 	
	
 	
 		 
 		 
 	
 		 
 		 
	
 		 
	
	
 	
 		 
 		 
	
 		 
 	
	
 	
 		 
 		 
 		 
 	
	
 		 
 		 
 	
 		 
 	
 		 
 	
 		 
































































// Generated Code 

#ifndef _java_lang_Class
#define _java_lang_Class
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_ClassLoader.hpp>

#include <java_lang_reflect_TypeVariable.hpp>

#include <java_lang_reflect_Type.hpp>

#include <java_lang_Package.hpp>

#include <java_lang_reflect_Method.hpp>

#include <java_lang_reflect_Constructor.hpp>

#include <java_lang_reflect_Field.hpp>

#include <java_io_InputStream.hpp>

#include <java_net_URL.hpp>

#include <java_security_ProtectionDomain.hpp>

#include <java_lang_annotation_Annotation.hpp>


#include <java_io_Serializable.hpp>

#include <java_lang_reflect_AnnotatedElement.hpp>

#include <java_lang_reflect_GenericDeclaration.hpp>

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

class java_lang_String;


class java_lang_Object;

class java_lang_ClassLoader;

class java_lang_reflect_TypeVariable;


class java_lang_Package;

class java_lang_reflect_Method;

class java_lang_reflect_Constructor;

class java_lang_reflect_Field;

class java_io_InputStream;

class java_net_URL;

class java_security_ProtectionDomain;

class java_lang_annotation_Annotation;

class java_lang_Class : public java_io_Serializable,public java_lang_reflect_AnnotatedElement,public java_lang_reflect_GenericDeclaration,public java_lang_reflect_Type
{
public:

	// Public ConstrucXXX
	java_lang_Class(const java_lang_Class& cc);
	java_lang_Class(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Class();
	// Functions
	static AndroidCXX::java_lang_Class * forName(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::java_lang_Class * forName(AndroidCXX::java_lang_String const& arg0,bool const& arg1,AndroidCXX::java_lang_ClassLoader const& arg2) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual bool  isAssignableFrom(AndroidCXX::java_lang_Class const& arg0) ;
	virtual bool  isInstance(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  getModifiers() ;
	virtual bool  isInterface() ;
	virtual bool  isArray() ;
	virtual bool  isPrimitive() ;
	virtual AndroidCXX::java_lang_Class * getSuperclass() ;
	virtual AndroidCXX::java_lang_Class * getComponentType() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual AndroidCXX::java_lang_Object * newInstance() ;
	virtual bool  isAnnotation() ;
	virtual bool  isSynthetic() ;
	virtual AndroidCXX::java_lang_ClassLoader * getClassLoader() ;
	virtual std::vector<java_lang_reflect_TypeVariable>  getTypeParameters() ;
	virtual AndroidCXX::java_lang_reflect_Type * getGenericSuperclass() ;
	virtual AndroidCXX::java_lang_Package * getPackage() ;
	virtual std::vector<java_lang_Class>  getInterfaces() ;
	virtual std::vector<java_lang_reflect_Type>  getGenericInterfaces() ;
	virtual std::vector<java_lang_Object>  getSigners() ;
	virtual AndroidCXX::java_lang_reflect_Method * getEnclosingMethod() ;
	virtual AndroidCXX::java_lang_reflect_Constructor * getEnclosingConstructor() ;
	virtual AndroidCXX::java_lang_Class * getDeclaringClass() ;
	virtual AndroidCXX::java_lang_Class * getEnclosingClass() ;
	virtual AndroidCXX::java_lang_String * getSimpleName() ;
	virtual AndroidCXX::java_lang_String * getCanonicalName() ;
	virtual bool  isAnonymousClass() ;
	virtual bool  isLocalClass() ;
	virtual bool  isMemberClass() ;
	virtual std::vector<java_lang_Class>  getClasses() ;
	virtual std::vector<java_lang_reflect_Field>  getFields() ;
	virtual std::vector<java_lang_reflect_Method>  getMethods() ;
	virtual std::vector<java_lang_reflect_Constructor>  getConstructors() ;
	virtual AndroidCXX::java_lang_reflect_Field * getField(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_reflect_Method * getMethod(AndroidCXX::java_lang_String const& arg0,std::vector<java_lang_Class> const& arg1) ;
	virtual AndroidCXX::java_lang_reflect_Constructor * getConstructor(std::vector<java_lang_Class> const& arg0) ;
	virtual std::vector<java_lang_Class>  getDeclaredClasses() ;
	virtual std::vector<java_lang_reflect_Field>  getDeclaredFields() ;
	virtual std::vector<java_lang_reflect_Method>  getDeclaredMethods() ;
	virtual std::vector<java_lang_reflect_Constructor>  getDeclaredConstructors() ;
	virtual AndroidCXX::java_lang_reflect_Field * getDeclaredField(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_reflect_Method * getDeclaredMethod(AndroidCXX::java_lang_String const& arg0,std::vector<java_lang_Class> const& arg1) ;
	virtual AndroidCXX::java_lang_reflect_Constructor * getDeclaredConstructor(std::vector<java_lang_Class> const& arg0) ;
	virtual AndroidCXX::java_io_InputStream * getResourceAsStream(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_net_URL * getResource(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_security_ProtectionDomain * getProtectionDomain() ;
	virtual bool  desiredAssertionStatus() ;
	virtual bool  isEnum() ;
	virtual std::vector<java_lang_Object>  getEnumConstants() ;
	virtual AndroidCXX::java_lang_Object * cast(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_Class * asSubclass(AndroidCXX::java_lang_Class const& arg0) ;
	virtual AndroidCXX::java_lang_annotation_Annotation * getAnnotation(AndroidCXX::java_lang_Class const& arg0) ;
	virtual bool  isAnnotationPresent(AndroidCXX::java_lang_Class const& arg0) ;
	virtual std::vector<java_lang_annotation_Annotation>  getAnnotations() ;
	virtual std::vector<java_lang_annotation_Annotation>  getDeclaredAnnotations() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Class