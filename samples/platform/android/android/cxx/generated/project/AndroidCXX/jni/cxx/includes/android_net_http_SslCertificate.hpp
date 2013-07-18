/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
		
 			
		
		
		
		
		
		
		


#ifndef _android_net_http_SslCertificate
#define _android_net_http_SslCertificate











#include <java_util_Date.hpp>
#include <android_net_http_SslCertificate_DName.hpp>
#include <android_os_Bundle.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_net_http_SslCertificate
{
public:
 java_lang_String toString();
static android_os_Bundle saveState(android_net_http_SslCertificate& arg0);
static android_net_http_SslCertificate restoreState(android_os_Bundle& arg0);
 java_util_Date getValidNotBeforeDate();
 java_lang_String getValidNotBefore();
 java_util_Date getValidNotAfterDate();
 java_lang_String getValidNotAfter();
 android_net_http_SslCertificate_DName getIssuedTo();
 android_net_http_SslCertificate_DName getIssuedBy();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_net_http_SslCertificate