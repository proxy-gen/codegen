/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
	


 		 
 		 










// Generated Code 

#ifndef _android_net_http_SslCertificate_DName
#define _android_net_http_SslCertificate_DName
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_net_http_SslCertificate.hpp>


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

class android_net_http_SslCertificate_DName 
{
public:

	// Public ConstrucXXX
	android_net_http_SslCertificate_DName(AndroidCXX::android_net_http_SslCertificate const& arg0,AndroidCXX::java_lang_String const& arg1);
	android_net_http_SslCertificate_DName(const android_net_http_SslCertificate_DName& cc);
	android_net_http_SslCertificate_DName(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_net_http_SslCertificate_DName();
	// Functions
	virtual AndroidCXX::java_lang_String * getDName() ;
	virtual AndroidCXX::java_lang_String * getCName() ;
	virtual AndroidCXX::java_lang_String * getOName() ;
	virtual AndroidCXX::java_lang_String * getUName() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_net_http_SslCertificate_DName