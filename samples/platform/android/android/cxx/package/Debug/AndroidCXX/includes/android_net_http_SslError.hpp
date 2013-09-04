/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	


 		 
 		 
 		 
 		 
 		 
 		 















// Generated Code 

#ifndef _android_net_http_SslError
#define _android_net_http_SslError
//
// Scroll Down 
//


#include <android_net_http_SslCertificate.hpp>

#include <java_lang_String.hpp>

#include <java_security_cert_X509Certificate.hpp>


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

class android_net_http_SslCertificate;

class java_lang_String;

class java_security_cert_X509Certificate;

class android_net_http_SslError : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_net_http_SslError(int const& arg0,AndroidCXX::android_net_http_SslCertificate const& arg1,Proxy * aProxy = new Proxy());
	android_net_http_SslError(int const& arg0,AndroidCXX::android_net_http_SslCertificate const& arg1,AndroidCXX::java_lang_String const& arg2,Proxy * aProxy = new Proxy());
	android_net_http_SslError(int const& arg0,AndroidCXX::java_security_cert_X509Certificate const& arg1,Proxy * aProxy = new Proxy());
	android_net_http_SslError(int const& arg0,AndroidCXX::java_security_cert_X509Certificate const& arg1,AndroidCXX::java_lang_String const& arg2,Proxy * aProxy = new Proxy());
	android_net_http_SslError(const android_net_http_SslError& cc);
	android_net_http_SslError(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_net_http_SslError();
	// Functions
	virtual bool  addError(int const& arg0) ;
	virtual AndroidCXX::android_net_http_SslCertificate * getCertificate() ;
	virtual int  getPrimaryError() ;
	virtual AndroidCXX::java_lang_String * getUrl() ;
	virtual bool  hasError(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_net_http_SslError