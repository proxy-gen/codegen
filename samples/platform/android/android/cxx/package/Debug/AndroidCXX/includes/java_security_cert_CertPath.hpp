/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 	
 		 
 	
 		 
 	
	
 	
 		 
	
	















// Generated Code 

#ifndef _java_security_cert_CertPath
#define _java_security_cert_CertPath
//
// Scroll Down 
//



#include <java_io_Serializable.hpp>

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

class java_lang_Object;

class java_util_List;

class java_security_cert_Certificate;

class java_lang_String;

class java_util_Iterator;

class java_security_cert_CertPath : public java_io_Serializable
{
public:

	java_security_cert_CertPath(const java_security_cert_CertPath& cc);
	java_security_cert_CertPath(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_security_cert_CertPath();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_util_List * getCertificates() ;
	virtual std::vector<byte>  getEncoded() ;
	virtual std::vector<byte>  getEncoded(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_Iterator * getEncodings() ;
	virtual AndroidCXX::java_lang_String * getType() ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:
	java_security_cert_CertPath();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_security_cert_CertPath