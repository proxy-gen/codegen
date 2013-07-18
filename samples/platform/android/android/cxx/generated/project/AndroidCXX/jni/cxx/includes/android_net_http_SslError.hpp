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

class java_lang_String;

class android_net_http_SslCertificate;

class android_net_http_SslError
{
public:
 java_lang_String toString();
 android_net_http_SslCertificate getCertificate();
 java_lang_String getUrl();
 bool addError(int& arg0);
 bool hasError(int& arg0);
 int getPrimaryError();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_net_http_SslError