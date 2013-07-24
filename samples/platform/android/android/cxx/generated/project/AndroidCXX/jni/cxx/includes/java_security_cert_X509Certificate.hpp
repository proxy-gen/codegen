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
#include <CXXTypes.hpp>


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

	java_security_cert_X509Certificate(const java_security_cert_X509Certificate& cc);
	java_security_cert_X509Certificate(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_security_cert_X509Certificate();
	// 
	// Default Destructor
	virtual ~java_security_cert_X509Certificate();
	// Functions
	 std::vector<byte> getSignature();
	 int getBasicConstraints();
	 int getVersion();
	 AndroidCXX::java_math_BigInteger getSerialNumber();
	 AndroidCXX::java_security_Principal getIssuerDN();
	 std::vector<byte> getTBSCertificate();
	 void checkValidity();
	 void checkValidity(AndroidCXX::java_util_Date& arg0);
	 AndroidCXX::javax_security_auth_x500_X500Principal getIssuerX500Principal();
	 AndroidCXX::java_security_Principal getSubjectDN();
	 AndroidCXX::javax_security_auth_x500_X500Principal getSubjectX500Principal();
	 AndroidCXX::java_util_Date getNotBefore();
	 AndroidCXX::java_util_Date getNotAfter();
	 AndroidCXX::java_lang_String getSigAlgName();
	 AndroidCXX::java_lang_String getSigAlgOID();
	 std::vector<byte> getSigAlgParams();
	 std::vector<bool> getIssuerUniqueID();
	 std::vector<bool> getSubjectUniqueID();
	 std::vector<bool> getKeyUsage();
	 AndroidCXX::java_util_List getExtendedKeyUsage();
	 AndroidCXX::java_util_Collection getSubjectAlternativeNames();
	 AndroidCXX::java_util_Collection getIssuerAlternativeNames();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_cert_X509Certificate