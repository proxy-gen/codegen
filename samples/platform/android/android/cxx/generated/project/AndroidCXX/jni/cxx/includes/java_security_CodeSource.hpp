/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
 	
 		 
 		 
 	
 		 

// Generated Code 

#ifndef _java_security_CodeSource
#define _java_security_CodeSource
//
// Scroll Down 
//










#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_net_URL.hpp>

#include <java_security_cert_Certificate.hpp>


#include <java_security_CodeSigner.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_net_URL;

class java_security_cert_Certificate;

class java_security_CodeSource;

class java_security_CodeSigner;

class java_security_CodeSource
{
public:
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 java_net_URL *  getLocation();
	 std::vector<long> getCertificates();
	 bool implies(java_security_CodeSource& arg0);
	 std::vector<long> getCodeSigners();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_CodeSource