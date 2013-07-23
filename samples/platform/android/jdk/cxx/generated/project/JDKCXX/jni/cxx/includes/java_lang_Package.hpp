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

namespace JDKCXX {

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
	// TODO: remove
	// 
	// java_lang_Package();
	// 
	// Default Destructor
	virtual ~java_lang_Package();
	// Functions
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 JDKCXX::java_lang_String getName();
	static JDKCXX::java_lang_Package getPackage(JDKCXX::java_lang_String& arg0);
	 JDKCXX::java_lang_annotation_Annotation getAnnotation(JDKCXX::java_lang_Class& arg0);
	 bool isAnnotationPresent(JDKCXX::java_lang_Class& arg0);
	 std::vector<JDKCXX::java_lang_annotation_Annotation > getAnnotations();
	 std::vector<JDKCXX::java_lang_annotation_Annotation > getDeclaredAnnotations();
	static std::vector<JDKCXX::java_lang_Package > getPackages();
	 bool isSealed();
	 bool isSealed(JDKCXX::java_net_URL& arg0);
	 JDKCXX::java_lang_String getSpecificationTitle();
	 JDKCXX::java_lang_String getSpecificationVersion();
	 JDKCXX::java_lang_String getSpecificationVendor();
	 JDKCXX::java_lang_String getImplementationTitle();
	 JDKCXX::java_lang_String getImplementationVersion();
	 JDKCXX::java_lang_String getImplementationVendor();
	 bool isCompatibleWith(JDKCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Package