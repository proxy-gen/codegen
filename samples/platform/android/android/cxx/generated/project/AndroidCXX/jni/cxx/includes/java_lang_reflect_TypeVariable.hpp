/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 	
 		 
	









// Generated Code 

#ifndef _java_lang_reflect_TypeVariable
#define _java_lang_reflect_TypeVariable
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_reflect_Type.hpp>

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


using namespace AndroidCXX;

// Forward Declarations

class java_lang_String;

class java_lang_reflect_Type;

class java_lang_reflect_GenericDeclaration;

class java_lang_reflect_TypeVariable
{
public:

	java_lang_reflect_TypeVariable(const java_lang_reflect_TypeVariable& cc);
	java_lang_reflect_TypeVariable(void * proxy);
	// Public Constructors
	// Default Destructor
	virtual ~java_lang_reflect_TypeVariable();
	// Functions
	 java_lang_String *  getName();
	 std::vector<java_lang_reflect_Type > getBounds();
	 java_lang_reflect_GenericDeclaration *  getGenericDeclaration();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_TypeVariable