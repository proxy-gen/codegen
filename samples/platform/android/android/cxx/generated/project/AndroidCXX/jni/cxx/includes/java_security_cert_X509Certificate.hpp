/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 	
	
	
 	
 		 
	
	
	
	
	
	
	
 	
 	
 	
 	
	
 	
 		 
	
 	
 		 
 	
 		 
	
 	
 		 
 	
 		 

// Generated Code 

#ifndef _java_security_cert_X509Certificate
#define _java_security_cert_X509Certificate
//
// Scroll Down 
//
























#include <java_math_BigInteger.hpp>

#include <java_security_Principal.hpp>

#include <java_util_Date.hpp>

#include <javax_security_auth_x500_X500Principal.hpp>

#include <java_lang_String.hpp>

#include <java_util_List.hpp>

#include <java_util_Collection.hpp>

#include <java_lang_Object.hpp>

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

class java_math_BigInteger;

class java_security_Principal;

class java_util_Date;

class javax_security_auth_x500_X500Principal;

class java_lang_String;

class java_util_List;

class java_util_Collection;

class java_lang_Object;

class java_security_cert_X509Certificate
{
public:
	 std::vector<char> getSignature();
	 int getBasicConstraints();
	 int getVersion();
	 java_math_BigInteger *  getSerialNumber();
	 java_security_Principal *  getIssuerDN();
	 std::vector<char> getTBSCertificate();
	 void checkValidity(java_util_Date& arg0);
	 javax_security_auth_x500_X500Principal *  getIssuerX500Principal();
	 java_security_Principal *  getSubjectDN();
	 javax_security_auth_x500_X500Principal *  getSubjectX500Principal();
	 java_util_Date *  getNotBefore();
	 java_util_Date *  getNotAfter();
	 java_lang_String *  getSigAlgName();
	 java_lang_String *  getSigAlgOID();
	 std::vector<char> getSigAlgParams();
	 std::vector<bool> getIssuerUniqueID();
	 std::vector<bool> getSubjectUniqueID();
	 std::vector<bool> getKeyUsage();
	 java_util_List *  getExtendedKeyUsage();
	 java_util_Collection *  getSubjectAlternativeNames();
	 java_util_Collection *  getIssuerAlternativeNames();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_cert_X509Certificate