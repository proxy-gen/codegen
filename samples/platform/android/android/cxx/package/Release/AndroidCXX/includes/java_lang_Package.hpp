/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>


#include <java_lang_Class.hpp>

#include <java_lang_annotation_Annotation.hpp>

#include <java_net_URL.hpp>

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

class java_lang_Package;

class java_lang_Class;

class java_lang_annotation_Annotation;

class java_net_URL;

class java_lang_Package
{
public:

	java_lang_Package(const java_lang_Package& cc);
	java_lang_Package(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Package();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::java_lang_String getName();
	static AndroidCXX::java_lang_Package getPackage(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_annotation_Annotation getAnnotation(AndroidCXX::java_lang_Class const& arg0);
	 bool isAnnotationPresent(AndroidCXX::java_lang_Class const& arg0);
	 std::vector<java_lang_annotation_Annotation> getAnnotations();
	 std::vector<java_lang_annotation_Annotation> getDeclaredAnnotations();
	static std::vector<java_lang_Package> getPackages();
	 bool isSealed();
	 bool isSealed(AndroidCXX::java_net_URL const& arg0);
	 AndroidCXX::java_lang_String getSpecificationTitle();
	 AndroidCXX::java_lang_String getSpecificationVersion();
	 AndroidCXX::java_lang_String getSpecificationVendor();
	 AndroidCXX::java_lang_String getImplementationTitle();
	 AndroidCXX::java_lang_String getImplementationVersion();
	 AndroidCXX::java_lang_String getImplementationVendor();
	 bool isCompatibleWith(AndroidCXX::java_lang_String const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Package