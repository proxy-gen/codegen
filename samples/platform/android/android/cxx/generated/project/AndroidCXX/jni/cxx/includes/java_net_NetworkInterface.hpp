/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
	
	
 		 
	
	
 	
 		 
	
 	
 		 
	
 	
 		 
 		 
	
	
 	
 		 
 	


























// Generated Code 

#ifndef _java_net_NetworkInterface
#define _java_net_NetworkInterface
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>


#include <java_util_Enumeration.hpp>

#include <java_net_InetAddress.hpp>

#include <java_util_List.hpp>

#include <java_net_InterfaceAddress.hpp>

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

class java_net_NetworkInterface;

class java_util_Enumeration;

class java_net_InetAddress;

class java_util_List;

class java_net_InterfaceAddress;

class java_net_NetworkInterface
{
public:

	java_net_NetworkInterface(const java_net_NetworkInterface& cc);
	java_net_NetworkInterface(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_net_NetworkInterface();
	// 
	// Default Destructor
	virtual ~java_net_NetworkInterface();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::java_lang_String getName();
	 AndroidCXX::java_net_NetworkInterface getParent();
	 AndroidCXX::java_lang_String getDisplayName();
	static AndroidCXX::java_net_NetworkInterface getByName(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_util_Enumeration getInetAddresses();
	 AndroidCXX::java_util_List getInterfaceAddresses();
	 AndroidCXX::java_util_Enumeration getSubInterfaces();
	static AndroidCXX::java_net_NetworkInterface getByInetAddress(AndroidCXX::java_net_InetAddress& arg0);
	static AndroidCXX::java_util_Enumeration getNetworkInterfaces();
	 bool isUp();
	 bool isLoopback();
	 bool isPointToPoint();
	 bool supportsMulticast();
	 std::vector<byte> getHardwareAddress();
	 int getMTU();
	 bool isVirtual();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_NetworkInterface