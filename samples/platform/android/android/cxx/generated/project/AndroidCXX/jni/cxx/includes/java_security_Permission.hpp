/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
 		 
	
	
 		 


 		 













// Generated Code 

#ifndef _java_security_Permission
#define _java_security_Permission
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>


#include <java_security_PermissionCollection.hpp>

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

class java_security_Permission;

class java_security_PermissionCollection;

class java_security_Permission
{
public:

	java_security_Permission(const java_security_Permission& cc);
	java_security_Permission(void * proxy);
	// Public Constructors
	java_security_Permission(java_lang_String& arg0);
	// Default Destructor
	virtual ~java_security_Permission();
	// Functions
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 java_lang_String *  getName();
	 bool implies(java_security_Permission& arg0);
	 java_lang_String *  getActions();
	 java_security_PermissionCollection *  newPermissionCollection();
	 void checkGuard(java_lang_Object& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_Permission