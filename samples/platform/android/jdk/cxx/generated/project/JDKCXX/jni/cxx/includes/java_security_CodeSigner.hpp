/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
	


 		 
 		 











// Generated Code 

#ifndef _java_security_CodeSigner
#define _java_security_CodeSigner
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_security_cert_CertPath.hpp>

#include <java_security_Timestamp.hpp>

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

class java_security_cert_CertPath;

class java_security_Timestamp;

class java_security_CodeSigner
{
public:

	java_security_CodeSigner(const java_security_CodeSigner& cc);
	java_security_CodeSigner(void * proxy);
	// Public Constructors
	java_security_CodeSigner(JDKCXX::java_security_cert_CertPath& arg0,JDKCXX::java_security_Timestamp& arg1);
	// TODO: remove
	// 
	// java_security_CodeSigner();
	// 
	// Default Destructor
	virtual ~java_security_CodeSigner();
	// Functions
	 bool equals(JDKCXX::java_lang_Object& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 JDKCXX::java_security_cert_CertPath getSignerCertPath();
	 JDKCXX::java_security_Timestamp getTimestamp();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_CodeSigner