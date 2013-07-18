/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
		


#ifndef _java_net_InterfaceAddress
#define _java_net_InterfaceAddress








#include <java_net_InetAddress.hpp>
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

class java_net_InterfaceAddress
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 java_net_InetAddress getAddress();
 java_net_InetAddress getBroadcast();
 short getNetworkPrefixLength();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_InterfaceAddress