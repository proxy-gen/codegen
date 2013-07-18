/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
		
		
 			


#ifndef _java_security_ProtectionDomain
#define _java_security_ProtectionDomain








#include <java_security_PermissionCollection.hpp>
#include <java_security_CodeSource.hpp>
#include <java_security_Permission.hpp>
#include <java_lang_ClassLoader.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class java_security_ProtectionDomain
{
public:
 java_lang_String toString();
 java_lang_ClassLoader getClassLoader();
 java_security_CodeSource getCodeSource();
 std::vector<long> getPrincipals();
 java_security_PermissionCollection getPermissions();
 bool implies(java_security_Permission& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_ProtectionDomain