/*
 * Header (Instance CXX)
 * Author: codegen
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


class android_os_Bundle;

class java_util_Date;

class android_net_http_SslCertificate_DName;

class java_security_cert_X509Certificate;

class android_net_http_SslCertificate 
{
public:

	// Public ConstrucXXX
	android_net_http_SslCertificate(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3);
	android_net_http_SslCertificate(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_util_Date const& arg2,AndroidCXX::java_util_Date const& arg3);
	android_net_http_SslCertificate(AndroidCXX::java_security_cert_X509Certificate const& arg0);
	android_net_http_SslCertificate(const android_net_http_SslCertificate& cc);
	android_net_http_SslCertificate(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_net_http_SslCertificate();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::android_os_Bundle * saveState(AndroidCXX::android_net_http_SslCertificate const& arg0) ;
	static AndroidCXX::android_net_http_SslCertificate * restoreState(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual AndroidCXX::java_util_Date * getValidNotBeforeDate() ;
	virtual AndroidCXX::java_lang_String * getValidNotBefore() ;
	virtual AndroidCXX::java_util_Date * getValidNotAfterDate() ;
	virtual AndroidCXX::java_lang_String * getValidNotAfter() ;
	virtual AndroidCXX::android_net_http_SslCertificate_DName * getIssuedTo() ;
	virtual AndroidCXX::android_net_http_SslCertificate_DName * getIssuedBy() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_net_http_SslCertificate