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
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_net_InetAddress;

class java_net_NetworkInterface;

class java_net_InetAddress
{
public:

	java_net_InetAddress(const java_net_InetAddress& cc);
	java_net_InetAddress(void * proxy);
	// Public Constructors
	java_net_InetAddress();
	// Default Destructor
	virtual ~java_net_InetAddress();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 std::vector<byte> getAddress();
	 AndroidCXX::java_lang_String getHostName();
	 AndroidCXX::java_lang_String getHostAddress();
	static AndroidCXX::java_net_InetAddress getByName(AndroidCXX::java_lang_String& arg0);
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
	 bool isReachable(AndroidCXX::java_net_NetworkInterface& arg0,int& arg1,int& arg2);
	 bool isReachable(int& arg0);
	 AndroidCXX::java_lang_String getCanonicalHostName();
	static AndroidCXX::java_net_InetAddress getByAddress(std::vector<byte>& arg0);
	static AndroidCXX::java_net_InetAddress getByAddress(AndroidCXX::java_lang_String& arg0,std::vector<byte>& arg1);
	static std::vector<AndroidCXX::java_net_InetAddress > getAllByName(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::java_net_InetAddress getLocalHost();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_InetAddress