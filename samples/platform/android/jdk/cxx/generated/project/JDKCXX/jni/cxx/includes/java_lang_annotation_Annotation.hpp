/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
 	
 		 











// Generated Code 

#ifndef _java_lang_annotation_Annotation
#define _java_lang_annotation_Annotation
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_lang_Class.hpp>


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

class java_lang_Object;

class java_lang_String;

class java_lang_Class;

class java_lang_annotation_Annotation;

class java_lang_annotation_Annotation
{
public:

	java_lang_annotation_Annotation(const java_lang_annotation_Annotation& cc);
	java_lang_annotation_Annotation(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_annotation_Annotation();
	// Functions
	 bool equals(JDKCXX::java_lang_Object const& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 JDKCXX::java_lang_Class annotationType();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_annotation_Annotation