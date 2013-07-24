/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
	













// Generated Code 

#ifndef _java_net_InterfaceAddress
#define _java_net_InterfaceAddress
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_net_InetAddress.hpp>

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

class java_net_InterfaceAddress
{
public:

	java_net_InterfaceAddress(const java_net_InterfaceAddress& cc);
	java_net_InterfaceAddress(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_net_InterfaceAddress();
	// 
	// Default Destructor
	virtual ~java_net_InterfaceAddress();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::java_net_InetAddress getAddress();
	 AndroidCXX::java_net_InetAddress getBroadcast();
	 short getNetworkPrefixLength();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_InterfaceAddress