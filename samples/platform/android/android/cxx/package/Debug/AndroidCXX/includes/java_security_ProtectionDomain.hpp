/*
 * Header (Instance CXX)
 * Author: codegen
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

	// Public ConstrucXXX
	java_security_ProtectionDomain(AndroidCXX::java_security_CodeSource const& arg0,AndroidCXX::java_security_PermissionCollection const& arg1);
	java_security_ProtectionDomain(AndroidCXX::java_security_CodeSource const& arg0,AndroidCXX::java_security_PermissionCollection const& arg1,AndroidCXX::java_lang_ClassLoader const& arg2,std::vector<java_security_Principal> const& arg3);
	java_security_ProtectionDomain(const java_security_ProtectionDomain& cc);
	java_security_ProtectionDomain(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_security_ProtectionDomain();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual AndroidCXX::java_lang_ClassLoader * getClassLoader() ;
	virtual AndroidCXX::java_security_CodeSource * getCodeSource() ;
	virtual std::vector<java_security_Principal>  getPrincipals() ;
	virtual AndroidCXX::java_security_PermissionCollection * getPermissions() ;
	virtual bool  implies(AndroidCXX::java_security_Permission const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_ProtectionDomain