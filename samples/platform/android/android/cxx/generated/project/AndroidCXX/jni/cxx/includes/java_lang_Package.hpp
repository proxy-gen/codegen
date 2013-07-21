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


using namespace AndroidCXX;

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
	java_lang_Package(void * proxy);
	// Public Constructors
	java_lang_Package();
	// Default Destructor
	virtual ~java_lang_Package();
	// Functions
	 java_lang_String toString();
	 int hashCode();
	 java_lang_String getName();
	static java_lang_Package getPackage(java_lang_String& arg0);
	 java_lang_annotation_Annotation getAnnotation(java_lang_Class& arg0);
	 bool isAnnotationPresent(java_lang_Class& arg0);
	 std::vector<java_lang_annotation_Annotation > getAnnotations();
	 std::vector<java_lang_annotation_Annotation > getDeclaredAnnotations();
	static std::vector<java_lang_Package > getPackages();
	 bool isSealed();
	 bool isSealed(java_net_URL& arg0);
	 java_lang_String getSpecificationTitle();
	 java_lang_String getSpecificationVersion();
	 java_lang_String getSpecificationVendor();
	 java_lang_String getImplementationTitle();
	 java_lang_String getImplementationVersion();
	 java_lang_String getImplementationVendor();
	 bool isCompatibleWith(java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Package