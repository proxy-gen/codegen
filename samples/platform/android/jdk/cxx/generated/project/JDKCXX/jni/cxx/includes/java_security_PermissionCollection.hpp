/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
	
 	
 		 














// Generated Code 

#ifndef _java_security_PermissionCollection
#define _java_security_PermissionCollection
//
// Scroll Down 
//


#include <java_security_Permission.hpp>

#include <java_lang_String.hpp>

#include <java_util_Enumeration.hpp>

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

class java_security_Permission;

class java_lang_String;

class java_util_Enumeration;

class java_security_PermissionCollection
{
public:

	java_security_PermissionCollection(const java_security_PermissionCollection& cc);
	java_security_PermissionCollection(void * proxy);
	// Public Constructors
	java_security_PermissionCollection();
	// TODO: remove
	// 
	// Default Destructor
	virtual ~java_security_PermissionCollection();
	// Functions
	 void add(JDKCXX::java_security_Permission& arg0);
	 JDKCXX::java_lang_String toString();
	 bool implies(JDKCXX::java_security_Permission& arg0);
	 void setReadOnly();
	 JDKCXX::java_util_Enumeration elements();
	 bool isReadOnly();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_PermissionCollection