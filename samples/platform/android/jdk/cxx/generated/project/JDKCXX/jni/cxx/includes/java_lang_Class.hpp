/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class java_lang_String;

class java_lang_Class;

class java_lang_Object;

class java_lang_ClassLoader;

class java_lang_reflect_TypeVariable;

class java_lang_reflect_Type;

class java_lang_Package;

class java_lang_reflect_Method;

class java_lang_reflect_Constructor;

class java_lang_reflect_Field;

class java_io_InputStream;

class java_net_URL;

class java_security_ProtectionDomain;

class java_lang_annotation_Annotation;

class java_lang_Class
{
public:

	java_lang_Class(const java_lang_Class& cc);
	java_lang_Class(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_lang_Class();
	// 
	// Default Destructor
	virtual ~java_lang_Class();
	// Functions
	static JDKCXX::java_lang_Class forName(JDKCXX::java_lang_String& arg0);
	static JDKCXX::java_lang_Class forName(JDKCXX::java_lang_String& arg0,bool& arg1,JDKCXX::java_lang_ClassLoader& arg2);
	 JDKCXX::java_lang_String toString();
	 bool isAssignableFrom(JDKCXX::java_lang_Class& arg0);
	 bool isInstance(JDKCXX::java_lang_Object& arg0);
	 int getModifiers();
	 bool isInterface();
	 bool isArray();
	 bool isPrimitive();
	 JDKCXX::java_lang_Class getSuperclass();
	 JDKCXX::java_lang_Class getComponentType();
	 JDKCXX::java_lang_String getName();
	 JDKCXX::java_lang_Object newInstance();
	 bool isAnnotation();
	 bool isSynthetic();
	 JDKCXX::java_lang_ClassLoader getClassLoader();
	 std::vector<JDKCXX::java_lang_reflect_TypeVariable > getTypeParameters();
	 JDKCXX::java_lang_reflect_Type getGenericSuperclass();
	 JDKCXX::java_lang_Package getPackage();
	 std::vector<JDKCXX::java_lang_Class > getInterfaces();
	 std::vector<JDKCXX::java_lang_reflect_Type > getGenericInterfaces();
	 std::vector<JDKCXX::java_lang_Object > getSigners();
	 JDKCXX::java_lang_reflect_Method getEnclosingMethod();
	 JDKCXX::java_lang_reflect_Constructor getEnclosingConstructor();
	 JDKCXX::java_lang_Class getDeclaringClass();
	 JDKCXX::java_lang_Class getEnclosingClass();
	 JDKCXX::java_lang_String getSimpleName();
	 JDKCXX::java_lang_String getCanonicalName();
	 bool isAnonymousClass();
	 bool isLocalClass();
	 bool isMemberClass();
	 std::vector<JDKCXX::java_lang_Class > getClasses();
	 std::vector<JDKCXX::java_lang_reflect_Field > getFields();
	 std::vector<JDKCXX::java_lang_reflect_Method > getMethods();
	 std::vector<JDKCXX::java_lang_reflect_Constructor > getConstructors();
	 JDKCXX::java_lang_reflect_Field getField(JDKCXX::java_lang_String& arg0);
	 JDKCXX::java_lang_reflect_Method getMethod(JDKCXX::java_lang_String& arg0,std::vector<JDKCXX::java_lang_Class >& arg1);
	 JDKCXX::java_lang_reflect_Constructor getConstructor(std::vector<JDKCXX::java_lang_Class >& arg0);
	 std::vector<JDKCXX::java_lang_Class > getDeclaredClasses();
	 std::vector<JDKCXX::java_lang_reflect_Field > getDeclaredFields();
	 std::vector<JDKCXX::java_lang_reflect_Method > getDeclaredMethods();
	 std::vector<JDKCXX::java_lang_reflect_Constructor > getDeclaredConstructors();
	 JDKCXX::java_lang_reflect_Field getDeclaredField(JDKCXX::java_lang_String& arg0);
	 JDKCXX::java_lang_reflect_Method getDeclaredMethod(JDKCXX::java_lang_String& arg0,std::vector<JDKCXX::java_lang_Class >& arg1);
	 JDKCXX::java_lang_reflect_Constructor getDeclaredConstructor(std::vector<JDKCXX::java_lang_Class >& arg0);
	 JDKCXX::java_io_InputStream getResourceAsStream(JDKCXX::java_lang_String& arg0);
	 JDKCXX::java_net_URL getResource(JDKCXX::java_lang_String& arg0);
	 JDKCXX::java_security_ProtectionDomain getProtectionDomain();
	 bool desiredAssertionStatus();
	 bool isEnum();
	 std::vector<JDKCXX::java_lang_Object > getEnumConstants();
	 JDKCXX::java_lang_Object cast(JDKCXX::java_lang_Object& arg0);
	 JDKCXX::java_lang_Class asSubclass(JDKCXX::java_lang_Class& arg0);
	 JDKCXX::java_lang_annotation_Annotation getAnnotation(JDKCXX::java_lang_Class& arg0);
	 bool isAnnotationPresent(JDKCXX::java_lang_Class& arg0);
	 std::vector<JDKCXX::java_lang_annotation_Annotation > getAnnotations();
	 std::vector<JDKCXX::java_lang_annotation_Annotation > getDeclaredAnnotations();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Class