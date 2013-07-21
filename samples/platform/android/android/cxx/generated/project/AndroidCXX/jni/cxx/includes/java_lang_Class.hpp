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

namespace AndroidCXX {


using namespace AndroidCXX;

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
	java_lang_Class();
	// Default Destructor
	virtual ~java_lang_Class();
	// Functions
	static java_lang_Class forName(java_lang_String& arg0);
	static java_lang_Class forName(java_lang_String& arg0,bool& arg1,java_lang_ClassLoader& arg2);
	 java_lang_String toString();
	 bool isAssignableFrom(java_lang_Class& arg0);
	 bool isInstance(java_lang_Object& arg0);
	 int getModifiers();
	 bool isInterface();
	 bool isArray();
	 bool isPrimitive();
	 java_lang_Class getSuperclass();
	 java_lang_Class getComponentType();
	 java_lang_String getName();
	 java_lang_Object newInstance();
	 bool isAnnotation();
	 bool isSynthetic();
	 java_lang_ClassLoader getClassLoader();
	 std::vector<java_lang_reflect_TypeVariable > getTypeParameters();
	 java_lang_reflect_Type getGenericSuperclass();
	 java_lang_Package getPackage();
	 std::vector<java_lang_Class > getInterfaces();
	 std::vector<java_lang_reflect_Type > getGenericInterfaces();
	 std::vector<java_lang_Object > getSigners();
	 java_lang_reflect_Method getEnclosingMethod();
	 java_lang_reflect_Constructor getEnclosingConstructor();
	 java_lang_Class getDeclaringClass();
	 java_lang_Class getEnclosingClass();
	 java_lang_String getSimpleName();
	 java_lang_String getCanonicalName();
	 bool isAnonymousClass();
	 bool isLocalClass();
	 bool isMemberClass();
	 std::vector<java_lang_Class > getClasses();
	 std::vector<java_lang_reflect_Field > getFields();
	 std::vector<java_lang_reflect_Method > getMethods();
	 std::vector<java_lang_reflect_Constructor > getConstructors();
	 java_lang_reflect_Field getField(java_lang_String& arg0);
	 java_lang_reflect_Method getMethod(java_lang_String& arg0,std::vector<java_lang_Class >& arg1);
	 java_lang_reflect_Constructor getConstructor(std::vector<java_lang_Class >& arg0);
	 std::vector<java_lang_Class > getDeclaredClasses();
	 std::vector<java_lang_reflect_Field > getDeclaredFields();
	 std::vector<java_lang_reflect_Method > getDeclaredMethods();
	 std::vector<java_lang_reflect_Constructor > getDeclaredConstructors();
	 java_lang_reflect_Field getDeclaredField(java_lang_String& arg0);
	 java_lang_reflect_Method getDeclaredMethod(java_lang_String& arg0,std::vector<java_lang_Class >& arg1);
	 java_lang_reflect_Constructor getDeclaredConstructor(std::vector<java_lang_Class >& arg0);
	 java_io_InputStream getResourceAsStream(java_lang_String& arg0);
	 java_net_URL getResource(java_lang_String& arg0);
	 java_security_ProtectionDomain getProtectionDomain();
	 bool desiredAssertionStatus();
	 bool isEnum();
	 std::vector<java_lang_Object > getEnumConstants();
	 java_lang_Object cast(java_lang_Object& arg0);
	 java_lang_Class asSubclass(java_lang_Class& arg0);
	 java_lang_annotation_Annotation getAnnotation(java_lang_Class& arg0);
	 bool isAnnotationPresent(java_lang_Class& arg0);
	 std::vector<java_lang_annotation_Annotation > getAnnotations();
	 std::vector<java_lang_annotation_Annotation > getDeclaredAnnotations();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Class