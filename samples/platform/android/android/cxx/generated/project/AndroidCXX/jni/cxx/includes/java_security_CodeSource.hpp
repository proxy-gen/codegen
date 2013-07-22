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
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class AndroidCXX::java_lang_Object;

class AndroidCXX::java_lang_String;

class AndroidCXX::java_net_URL;

class AndroidCXX::java_security_cert_Certificate;

class AndroidCXX::java_security_CodeSource;

class AndroidCXX::java_security_CodeSigner;

class java_security_CodeSource
{
public:

	java_security_CodeSource(const java_security_CodeSource& cc);
	java_security_CodeSource(void * proxy);
	// Public Constructors
	java_security_CodeSource(AndroidCXX::java_net_URL& arg0,std::vector<java_security_CodeSigner >& arg1);
	java_security_CodeSource(AndroidCXX::java_net_URL& arg0,std::vector<java_security_cert_Certificate >& arg1);
	java_security_CodeSource();
	// Default Destructor
	virtual ~java_security_CodeSource();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::java_net_URL getLocation();
	 std::vector<java_security_cert_Certificate > getCertificates();
	 bool implies(AndroidCXX::java_security_CodeSource& arg0);
	 std::vector<java_security_CodeSigner > getCodeSigners();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_CodeSource