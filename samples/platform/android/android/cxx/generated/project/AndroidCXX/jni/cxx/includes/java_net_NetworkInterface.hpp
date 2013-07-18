/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
		
		
 			
		
		
		
		
 			
		
		


#ifndef _java_net_NetworkInterface
#define _java_net_NetworkInterface





















#include <java_util_List.hpp>
#include <java_lang_Object.hpp>
#include <java_util_Enumeration.hpp>
#include <java_net_InetAddress.hpp>
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

class java_net_NetworkInterface
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 java_lang_String getName();
 java_net_NetworkInterface getParent();
 java_lang_String getDisplayName();
static java_net_NetworkInterface getByName(java_lang_String& arg0);
 java_util_Enumeration getInetAddresses();
 java_util_List getInterfaceAddresses();
 java_util_Enumeration getSubInterfaces();
static java_net_NetworkInterface getByInetAddress(java_net_InetAddress& arg0);
static java_util_Enumeration getNetworkInterfaces();
 bool isUp();
 bool isLoopback();
 bool isPointToPoint();
 bool supportsMulticast();
 std::vector<char> getHardwareAddress();
 int getMTU();
 bool isVirtual();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_NetworkInterface