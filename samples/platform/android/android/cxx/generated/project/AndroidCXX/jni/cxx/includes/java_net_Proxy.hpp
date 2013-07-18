/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
		
		


#ifndef _java_net_Proxy
#define _java_net_Proxy







#include <java_net_Proxy_Type.hpp>
#include <java_net_SocketAddress.hpp>
#include <java_lang_Object.hpp>
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

class java_net_Proxy
{
public:
 java_net_Proxy_Type type();
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 java_net_SocketAddress address();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_Proxy