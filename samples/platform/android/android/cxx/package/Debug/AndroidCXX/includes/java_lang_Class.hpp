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


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_lang_ClassLoader.hpp>

#include <java_lang_annotation_Annotation.hpp>

#include <java_lang_reflect_Constructor.hpp>

#include <java_lang_reflect_Field.hpp>

#include <java_lang_reflect_Method.hpp>

#include <java_lang_reflect_Type.hpp>

#include <java_lang_Package.hpp>

#include <java_security_ProtectionDomain.hpp>

#include <java_io_InputStream.hpp>

#include <java_net_URL.hpp>

#include <java_lang_reflect_TypeVariable.hpp>


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


class java_lang_Object;

class java_lang_String;

class java_lang_ClassLoader;

class java_lang_annotation_Annotation;

class java_lang_reflect_Constructor;

class java_lang_reflect_Field;

class java_lang_reflect_Method;


class java_lang_Package;

class java_security_ProtectionDomain;

class java_io_InputStream;

class java_net_URL;

class java_lang_reflect_TypeVariable;

class java_lang_Class : public AndroidCXX::java_io_Serializable,public AndroidCXX::java_lang_reflect_AnnotatedElement,public AndroidCXX::java_lang_reflect_GenericDeclaration,public AndroidCXX::java_lang_reflect_Type
{
public:

	// Public Constructor
	java_lang_Class(const java_lang_Class& cc);
	java_lang_Class(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_lang_Class();
	// Functions
	virtual AndroidCXX::java_lang_Class * asSubclass(AndroidCXX::java_lang_Class const& arg0) ;
	virtual AndroidCXX::java_lang_Object * cast(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  desiredAssertionStatus() ;
	static AndroidCXX::java_lang_Class * forName(AndroidCXX::java_lang_String const& arg0,bool const& arg1,AndroidCXX::java_lang_ClassLoader const& arg2) ;
	static AndroidCXX::java_lang_Class * forName(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_annotation_Annotation * getAnnotation(AndroidCXX::java_lang_Class const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_annotation_Annotation>  getAnnotations() ;
	virtual AndroidCXX::java_lang_String * getCanonicalName() ;
	virtual AndroidCXX::java_lang_ClassLoader * getClassLoader() ;
	virtual std::vector<AndroidCXX::java_lang_Class>  getClasses() ;
	virtual AndroidCXX::java_lang_Class * getComponentType() ;
	virtual AndroidCXX::java_lang_reflect_Constructor * getConstructor(std::vector<AndroidCXX::java_lang_Class> const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_reflect_Constructor>  getConstructors() ;
	virtual std::vector<AndroidCXX::java_lang_annotation_Annotation>  getDeclaredAnnotations() ;
	virtual std::vector<AndroidCXX::java_lang_Class>  getDeclaredClasses() ;
	virtual AndroidCXX::java_lang_reflect_Constructor * getDeclaredConstructor(std::vector<AndroidCXX::java_lang_Class> const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_reflect_Constructor>  getDeclaredConstructors() ;
	virtual AndroidCXX::java_lang_reflect_Field * getDeclaredField(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_reflect_Field>  getDeclaredFields() ;
	virtual AndroidCXX::java_lang_reflect_Method * getDeclaredMethod(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_Class> const& arg1) ;
	virtual std::vector<AndroidCXX::java_lang_reflect_Method>  getDeclaredMethods() ;
	virtual AndroidCXX::java_lang_Class * getDeclaringClass() ;
	virtual AndroidCXX::java_lang_Class * getEnclosingClass() ;
	virtual AndroidCXX::java_lang_reflect_Constructor * getEnclosingConstructor() ;
	virtual AndroidCXX::java_lang_reflect_Method * getEnclosingMethod() ;
	virtual std::vector<AndroidCXX::java_lang_Object>  getEnumConstants() ;
	virtual AndroidCXX::java_lang_reflect_Field * getField(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_reflect_Field>  getFields() ;
	virtual std::vector<AndroidCXX::java_lang_reflect_Type>  getGenericInterfaces() ;
	virtual AndroidCXX::java_lang_reflect_Type * getGenericSuperclass() ;
	virtual std::vector<AndroidCXX::java_lang_Class>  getInterfaces() ;
	virtual AndroidCXX::java_lang_reflect_Method * getMethod(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_Class> const& arg1) ;
	virtual std::vector<AndroidCXX::java_lang_reflect_Method>  getMethods() ;
	virtual int  getModifiers() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual AndroidCXX::java_lang_Package * getPackage() ;
	virtual AndroidCXX::java_security_ProtectionDomain * getProtectionDomain() ;
	virtual AndroidCXX::java_io_InputStream * getResourceAsStream(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_net_URL * getResource(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_Object>  getSigners() ;
	virtual AndroidCXX::java_lang_String * getSimpleName() ;
	virtual AndroidCXX::java_lang_Class * getSuperclass() ;
	virtual std::vector<AndroidCXX::java_lang_reflect_TypeVariable>  getTypeParameters() ;
	virtual bool  isAnnotationPresent(AndroidCXX::java_lang_Class const& arg0) ;
	virtual bool  isAnnotation() ;
	virtual bool  isAnonymousClass() ;
	virtual bool  isArray() ;
	virtual bool  isAssignableFrom(AndroidCXX::java_lang_Class const& arg0) ;
	virtual bool  isEnum() ;
	virtual bool  isInstance(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  isInterface() ;
	virtual bool  isLocalClass() ;
	virtual bool  isMemberClass() ;
	virtual bool  isPrimitive() ;
	virtual bool  isSynthetic() ;
	virtual AndroidCXX::java_lang_Object * newInstance() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Class