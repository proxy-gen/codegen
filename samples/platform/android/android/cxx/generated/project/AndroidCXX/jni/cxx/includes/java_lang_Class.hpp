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

#include <java_lang_ClassLoader.hpp>


#include <java_lang_Object.hpp>

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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class java_lang_ClassLoader;

class java_lang_Class;

class java_lang_Object;

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
	static java_lang_Class *  forName(java_lang_String& arg0,bool& arg1,java_lang_ClassLoader& arg2);
	 java_lang_String *  toString();
	 bool isAssignableFrom(java_lang_Class& arg0);
	 bool isInstance(java_lang_Object& arg0);
	 int getModifiers();
	 bool isInterface();
	 bool isArray();
	 bool isPrimitive();
	 java_lang_Class *  getSuperclass();
	 java_lang_Class *  getComponentType();
	 java_lang_String *  getName();
	 java_lang_Object *  newInstance();
	 bool isAnnotation();
	 bool isSynthetic();
	 java_lang_ClassLoader *  getClassLoader();
	 std::vector<long> getTypeParameters();
	 java_lang_reflect_Type *  getGenericSuperclass();
	 java_lang_Package *  getPackage();
	 std::vector<long> getInterfaces();
	 std::vector<long> getGenericInterfaces();
	 std::vector<long> getSigners();
	 java_lang_reflect_Method *  getEnclosingMethod();
	 java_lang_reflect_Constructor *  getEnclosingConstructor();
	 java_lang_Class *  getDeclaringClass();
	 java_lang_Class *  getEnclosingClass();
	 java_lang_String *  getSimpleName();
	 java_lang_String *  getCanonicalName();
	 bool isAnonymousClass();
	 bool isLocalClass();
	 bool isMemberClass();
	 std::vector<long> getClasses();
	 std::vector<long> getFields();
	 std::vector<long> getMethods();
	 std::vector<long> getConstructors();
	 java_lang_reflect_Field *  getField(java_lang_String& arg0);
	 java_lang_reflect_Method *  getMethod(java_lang_String& arg0,std::vector<long>& arg1);
	 java_lang_reflect_Constructor *  getConstructor(std::vector<long>& arg0);
	 std::vector<long> getDeclaredClasses();
	 std::vector<long> getDeclaredFields();
	 std::vector<long> getDeclaredMethods();
	 std::vector<long> getDeclaredConstructors();
	 java_lang_reflect_Field *  getDeclaredField(java_lang_String& arg0);
	 java_lang_reflect_Method *  getDeclaredMethod(java_lang_String& arg0,std::vector<long>& arg1);
	 java_lang_reflect_Constructor *  getDeclaredConstructor(std::vector<long>& arg0);
	 java_io_InputStream *  getResourceAsStream(java_lang_String& arg0);
	 java_net_URL *  getResource(java_lang_String& arg0);
	 java_security_ProtectionDomain *  getProtectionDomain();
	 bool desiredAssertionStatus();
	 bool isEnum();
	 std::vector<long> getEnumConstants();
	 java_lang_Object *  cast(java_lang_Object& arg0);
	 java_lang_Class *  asSubclass(java_lang_Class& arg0);
	 java_lang_annotation_Annotation *  getAnnotation(java_lang_Class& arg0);
	 bool isAnnotationPresent(java_lang_Class& arg0);
	 std::vector<long> getAnnotations();
	 std::vector<long> getDeclaredAnnotations();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Class