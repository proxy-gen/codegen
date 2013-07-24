/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
	
 	
 		 
	
 		 


 		 
 		 
 		 
 		 
 		 
 	
 		 













// Generated Code 

#ifndef _java_security_ProtectionDomain
#define _java_security_ProtectionDomain
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_ClassLoader.hpp>

#include <java_security_CodeSource.hpp>

#include <java_security_Principal.hpp>

#include <java_security_PermissionCollection.hpp>

#include <java_security_Permission.hpp>

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

class java_lang_String;

class java_lang_ClassLoader;

class java_security_CodeSource;

class java_security_Principal;

class java_security_PermissionCollection;

class java_security_Permission;

class java_security_ProtectionDomain
{
public:

	java_security_ProtectionDomain(const java_security_ProtectionDomain& cc);
	java_security_ProtectionDomain(void * proxy);
	// Public Constructors
	java_security_ProtectionDomain(AndroidCXX::java_security_CodeSource& arg0,AndroidCXX::java_security_PermissionCollection& arg1);
	java_security_ProtectionDomain(AndroidCXX::java_security_CodeSource& arg0,AndroidCXX::java_security_PermissionCollection& arg1,AndroidCXX::java_lang_ClassLoader& arg2,std::vector<AndroidCXX::java_security_Principal >& arg3);
	// TODO: remove
	// 
	// java_security_ProtectionDomain();
	// 
	// Default Destructor
	virtual ~java_security_ProtectionDomain();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_lang_ClassLoader getClassLoader();
	 AndroidCXX::java_security_CodeSource getCodeSource();
	 std::vector<AndroidCXX::java_security_Principal > getPrincipals();
	 AndroidCXX::java_security_PermissionCollection getPermissions();
	 bool implies(AndroidCXX::java_security_Permission& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_ProtectionDomain