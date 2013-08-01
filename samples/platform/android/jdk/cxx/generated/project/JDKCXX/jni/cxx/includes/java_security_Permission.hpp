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

namespace JDKCXX {

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_security_Permission;

class java_security_PermissionCollection;

class java_security_Permission
{
public:

	java_security_Permission(const java_security_Permission& cc);
	java_security_Permission(Proxy proxy);
	// Public Constructors
	java_security_Permission(JDKCXX::java_lang_String const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_security_Permission();
	// Functions
	 bool equals(JDKCXX::java_lang_Object const& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 JDKCXX::java_lang_String getName();
	 bool implies(JDKCXX::java_security_Permission const& arg0);
	 JDKCXX::java_lang_String getActions();
	 JDKCXX::java_security_PermissionCollection newPermissionCollection();
	 void checkGuard(JDKCXX::java_lang_Object const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_Permission