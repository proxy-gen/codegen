/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
		
		
		
		
		
		
		
		
		
 			
		
 			
		
		
 			


#ifndef _java_net_URL
#define _java_net_URL






















#include <java_net_URI.hpp>
#include <java_lang_Object.hpp>
#include <java_net_Proxy.hpp>
#include <java_net_URLConnection.hpp>
#include <java_io_InputStream.hpp>
#include <java_net_URLStreamHandlerFactory.hpp>
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

class java_net_URL
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 java_io_InputStream openStream();
 java_lang_String getPath();
 java_net_URI toURI();
 java_lang_String getAuthority();
 java_lang_String getQuery();
 java_lang_String getUserInfo();
 int getPort();
 int getDefaultPort();
 java_lang_String getProtocol();
 java_lang_String getHost();
 java_lang_String getFile();
 java_lang_String getRef();
 bool sameFile(java_net_URL& arg0);
 java_lang_String toExternalForm();
 java_net_URLConnection openConnection(java_net_Proxy& arg0);
 java_lang_Object getContent(std::vector<long>& arg0);
static void setURLStreamHandlerFactory(java_net_URLStreamHandlerFactory& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URL