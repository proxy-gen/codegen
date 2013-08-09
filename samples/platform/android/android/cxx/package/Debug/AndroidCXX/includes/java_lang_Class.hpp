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
	java_lang_Class(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Class();
	// Functions
	static AndroidCXX::java_lang_Class forName(AndroidCXX::java_lang_String const& arg0);
	static AndroidCXX::java_lang_Class forName(AndroidCXX::java_lang_String const& arg0,bool const& arg1,AndroidCXX::java_lang_ClassLoader const& arg2);
	 AndroidCXX::java_lang_String toString();
	 bool isAssignableFrom(AndroidCXX::java_lang_Class const& arg0);
	 bool isInstance(AndroidCXX::java_lang_Object const& arg0);
	 int getModifiers();
	 bool isInterface();
	 bool isArray();
	 bool isPrimitive();
	 AndroidCXX::java_lang_Class getSuperclass();
	 AndroidCXX::java_lang_Class getComponentType();
	 AndroidCXX::java_lang_String getName();
	 AndroidCXX::java_lang_Object newInstance();
	 bool isAnnotation();
	 bool isSynthetic();
	 AndroidCXX::java_lang_ClassLoader getClassLoader();
	 std::vector<AndroidCXX::java_lang_reflect_TypeVariable > getTypeParameters();
	 AndroidCXX::java_lang_reflect_Type getGenericSuperclass();
	 AndroidCXX::java_lang_Package getPackage();
	 std::vector<AndroidCXX::java_lang_Class > getInterfaces();
	 std::vector<AndroidCXX::java_lang_reflect_Type > getGenericInterfaces();
	 std::vector<AndroidCXX::java_lang_Object > getSigners();
	 AndroidCXX::java_lang_reflect_Method getEnclosingMethod();
	 AndroidCXX::java_lang_reflect_Constructor getEnclosingConstructor();
	 AndroidCXX::java_lang_Class getDeclaringClass();
	 AndroidCXX::java_lang_Class getEnclosingClass();
	 AndroidCXX::java_lang_String getSimpleName();
	 AndroidCXX::java_lang_String getCanonicalName();
	 bool isAnonymousClass();
	 bool isLocalClass();
	 bool isMemberClass();
	 std::vector<AndroidCXX::java_lang_Class > getClasses();
	 std::vector<AndroidCXX::java_lang_reflect_Field > getFields();
	 std::vector<AndroidCXX::java_lang_reflect_Method > getMethods();
	 std::vector<AndroidCXX::java_lang_reflect_Constructor > getConstructors();
	 AndroidCXX::java_lang_reflect_Field getField(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_reflect_Method getMethod(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_Class > const& arg1);
	 AndroidCXX::java_lang_reflect_Constructor getConstructor(std::vector<AndroidCXX::java_lang_Class > const& arg0);
	 std::vector<AndroidCXX::java_lang_Class > getDeclaredClasses();
	 std::vector<AndroidCXX::java_lang_reflect_Field > getDeclaredFields();
	 std::vector<AndroidCXX::java_lang_reflect_Method > getDeclaredMethods();
	 std::vector<AndroidCXX::java_lang_reflect_Constructor > getDeclaredConstructors();
	 AndroidCXX::java_lang_reflect_Field getDeclaredField(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_reflect_Method getDeclaredMethod(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_Class > const& arg1);
	 AndroidCXX::java_lang_reflect_Constructor getDeclaredConstructor(std::vector<AndroidCXX::java_lang_Class > const& arg0);
	 AndroidCXX::java_io_InputStream getResourceAsStream(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_net_URL getResource(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_security_ProtectionDomain getProtectionDomain();
	 bool desiredAssertionStatus();
	 bool isEnum();
	 std::vector<AndroidCXX::java_lang_Object > getEnumConstants();
	 AndroidCXX::java_lang_Object cast(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_Class asSubclass(AndroidCXX::java_lang_Class const& arg0);
	 AndroidCXX::java_lang_annotation_Annotation getAnnotation(AndroidCXX::java_lang_Class const& arg0);
	 bool isAnnotationPresent(AndroidCXX::java_lang_Class const& arg0);
	 std::vector<AndroidCXX::java_lang_annotation_Annotation > getAnnotations();
	 std::vector<AndroidCXX::java_lang_annotation_Annotation > getDeclaredAnnotations();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Class