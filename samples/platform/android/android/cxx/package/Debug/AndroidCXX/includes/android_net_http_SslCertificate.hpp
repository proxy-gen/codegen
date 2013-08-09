/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	
 		 
	
	
	
	
	
	
	


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 

















// Generated Code 

#ifndef _android_net_http_SslCertificate
#define _android_net_http_SslCertificate
//
// Scroll Down 
//


#include <java_lang_String.hpp>


#include <android_os_Bundle.hpp>

#include <java_util_Date.hpp>

#include <android_net_http_SslCertificate_DName.hpp>

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

class android_os_Bundle;

class java_util_Date;

class android_net_http_SslCertificate_DName;

class java_security_cert_X509Certificate;

class android_net_http_SslCertificate
{
public:

	android_net_http_SslCertificate(const android_net_http_SslCertificate& cc);
	android_net_http_SslCertificate(Proxy proxy);
	// Public Constructors
	android_net_http_SslCertificate(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3);
	android_net_http_SslCertificate(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_util_Date const& arg2,AndroidCXX::java_util_Date const& arg3);
	android_net_http_SslCertificate(AndroidCXX::java_security_cert_X509Certificate const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_net_http_SslCertificate();
	// Functions
	 AndroidCXX::java_lang_String toString();
	static AndroidCXX::android_os_Bundle saveState(AndroidCXX::android_net_http_SslCertificate const& arg0);
	static AndroidCXX::android_net_http_SslCertificate restoreState(AndroidCXX::android_os_Bundle const& arg0);
	 AndroidCXX::java_util_Date getValidNotBeforeDate();
	 AndroidCXX::java_lang_String getValidNotBefore();
	 AndroidCXX::java_util_Date getValidNotAfterDate();
	 AndroidCXX::java_lang_String getValidNotAfter();
	 AndroidCXX::android_net_http_SslCertificate_DName getIssuedTo();
	 AndroidCXX::android_net_http_SslCertificate_DName getIssuedBy();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_net_http_SslCertificate