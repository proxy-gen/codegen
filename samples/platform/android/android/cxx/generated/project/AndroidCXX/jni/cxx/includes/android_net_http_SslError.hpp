/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>

#include <android_net_http_SslCertificate.hpp>

#include <java_security_cert_X509Certificate.hpp>

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

class java_lang_String;

class android_net_http_SslCertificate;

class java_security_cert_X509Certificate;

class android_net_http_SslError
{
public:

	android_net_http_SslError(const android_net_http_SslError& cc);
	android_net_http_SslError(void * proxy);
	// Public Constructors
	android_net_http_SslError(int& arg0,AndroidCXX::android_net_http_SslCertificate& arg1);
	android_net_http_SslError(int& arg0,AndroidCXX::java_security_cert_X509Certificate& arg1);
	android_net_http_SslError(int& arg0,AndroidCXX::android_net_http_SslCertificate& arg1,AndroidCXX::java_lang_String& arg2);
	android_net_http_SslError(int& arg0,AndroidCXX::java_security_cert_X509Certificate& arg1,AndroidCXX::java_lang_String& arg2);
	android_net_http_SslError();
	// Default Destructor
	virtual ~android_net_http_SslError();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::android_net_http_SslCertificate getCertificate();
	 AndroidCXX::java_lang_String getUrl();
	 bool addError(int& arg0);
	 bool hasError(int& arg0);
	 int getPrimaryError();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_net_http_SslError