/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		


#ifndef _java_security_PermissionCollection
#define _java_security_PermissionCollection








#include <java_util_Enumeration.hpp>
#include <java_security_Permission.hpp>
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

class java_security_PermissionCollection
{
public:
 void add(java_security_Permission& arg0);
 java_lang_String toString();
 bool implies(java_security_Permission& arg0);
 void setReadOnly();
 java_util_Enumeration elements();
 bool isReadOnly();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_PermissionCollection