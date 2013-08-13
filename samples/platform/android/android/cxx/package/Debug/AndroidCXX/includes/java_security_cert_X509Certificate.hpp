/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_security_cert_X509Extension.hpp>

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

class java_security_cert_X509Certificate : public java_security_cert_X509Extension
{
public:

	java_security_cert_X509Certificate(const java_security_cert_X509Certificate& cc);
	java_security_cert_X509Certificate(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_security_cert_X509Certificate();
	// Functions
	virtual std::vector<byte>  getSignature() ;
	virtual int  getBasicConstraints() ;
	virtual int  getVersion() ;
	virtual AndroidCXX::java_math_BigInteger * getSerialNumber() ;
	virtual AndroidCXX::java_security_Principal * getIssuerDN() ;
	virtual std::vector<byte>  getTBSCertificate() ;
	virtual void  checkValidity() ;
	virtual void  checkValidity(AndroidCXX::java_util_Date const& arg0) ;
	virtual AndroidCXX::javax_security_auth_x500_X500Principal * getIssuerX500Principal() ;
	virtual AndroidCXX::java_security_Principal * getSubjectDN() ;
	virtual AndroidCXX::javax_security_auth_x500_X500Principal * getSubjectX500Principal() ;
	virtual AndroidCXX::java_util_Date * getNotBefore() ;
	virtual AndroidCXX::java_util_Date * getNotAfter() ;
	virtual AndroidCXX::java_lang_String * getSigAlgName() ;
	virtual AndroidCXX::java_lang_String * getSigAlgOID() ;
	virtual std::vector<byte>  getSigAlgParams() ;
	virtual std::vector<bool>  getIssuerUniqueID() ;
	virtual std::vector<bool>  getSubjectUniqueID() ;
	virtual std::vector<bool>  getKeyUsage() ;
	virtual AndroidCXX::java_util_List * getExtendedKeyUsage() ;
	virtual AndroidCXX::java_util_Collection * getSubjectAlternativeNames() ;
	virtual AndroidCXX::java_util_Collection * getIssuerAlternativeNames() ;

protected:
	java_security_cert_X509Certificate();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_cert_X509Certificate