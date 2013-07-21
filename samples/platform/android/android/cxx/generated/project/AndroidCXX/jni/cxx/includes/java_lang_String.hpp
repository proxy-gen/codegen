/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	








// Generated Code 

#ifndef _java_lang_String
#define _java_lang_String
//
// Scroll Down 
//


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

class java_lang_Object;

class java_lang_String;

class java_lang_String
{
public:

	java_lang_String(const java_lang_String& cc);
	java_lang_String(void * proxy);
	// Public Constructors
	// 
	// Default Destructor
	virtual ~java_lang_String();
	void * proxied();
	// Functions
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_String