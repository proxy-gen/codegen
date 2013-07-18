/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
 			


#ifndef _java_security_CodeSource
#define _java_security_CodeSource









#include <java_net_URL.hpp>
#include <java_lang_Object.hpp>
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

class java_security_CodeSource
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 java_net_URL getLocation();
 std::vector<long> getCertificates();
 bool implies(java_security_CodeSource& arg0);
 std::vector<long> getCodeSigners();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_CodeSource