/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 	
 		 
 	
 		 








// Generated Code 

#ifndef _java_lang_reflect_GenericDeclaration
#define _java_lang_reflect_GenericDeclaration
//
// Scroll Down 
//


#include <java_lang_reflect_TypeVariable.hpp>

#include <java_lang_Object.hpp>

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

class java_lang_reflect_TypeVariable;

class java_lang_Object;

class java_lang_reflect_GenericDeclaration
{
public:

	java_lang_reflect_GenericDeclaration(const java_lang_reflect_GenericDeclaration& cc);
	java_lang_reflect_GenericDeclaration(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_lang_reflect_GenericDeclaration();
	// 
	// Default Destructor
	virtual ~java_lang_reflect_GenericDeclaration();
	// Functions
	 std::vector<AndroidCXX::java_lang_reflect_TypeVariable > getTypeParameters();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_GenericDeclaration