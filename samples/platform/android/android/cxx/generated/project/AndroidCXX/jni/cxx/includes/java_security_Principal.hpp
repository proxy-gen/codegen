/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	










// Generated Code 

#ifndef _java_security_Principal
#define _java_security_Principal
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

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

class java_lang_Object;

class java_lang_String;

class java_security_Principal
{
public:

	java_security_Principal(const java_security_Principal& cc);
	java_security_Principal(void * proxy);
	// Public Constructors
	// Default Destructor
	virtual ~java_security_Principal();
	// Functions
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 java_lang_String *  getName();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_Principal