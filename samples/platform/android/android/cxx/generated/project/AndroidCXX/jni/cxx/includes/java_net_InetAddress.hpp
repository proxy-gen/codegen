/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
		
 			
		
 			
		
 			
		
 			
		

// Generated Code 

#ifndef _java_net_InetAddress
#define _java_net_InetAddress
//
// Scroll Down 
//

























#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>


#include <java_net_NetworkInterface.hpp>

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

class java_lang_Object;

class java_lang_String;


class java_net_NetworkInterface;

class java_net_InetAddress
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 std::vector<char> getAddress();
 java_lang_String getHostName();
 java_lang_String getHostAddress();
static java_net_InetAddress getByName(java_lang_String& arg0);
 bool isMulticastAddress();
 bool isAnyLocalAddress();
 bool isLoopbackAddress();
 bool isLinkLocalAddress();
 bool isSiteLocalAddress();
 bool isMCGlobal();
 bool isMCNodeLocal();
 bool isMCLinkLocal();
 bool isMCSiteLocal();
 bool isMCOrgLocal();
 bool isReachable(java_net_NetworkInterface& arg0,int& arg1);
 java_lang_String getCanonicalHostName();
static java_net_InetAddress getByAddress(std::vector<char>& arg0,java_lang_String& arg1);
static std::vector<long> getAllByName(java_lang_String& arg0);
static java_net_InetAddress getLocalHost();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_InetAddress