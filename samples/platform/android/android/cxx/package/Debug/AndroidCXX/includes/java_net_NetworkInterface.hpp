/*
 * Header (Instance CXX)
 * Author: codegen
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


class java_util_Enumeration;

class java_net_InetAddress;

class java_util_List;

class java_net_InterfaceAddress;

class java_net_NetworkInterface 
{
public:

	// Public ConstrucXXX
	java_net_NetworkInterface(const java_net_NetworkInterface& cc);
	java_net_NetworkInterface(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_NetworkInterface();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual AndroidCXX::java_net_NetworkInterface * getParent() ;
	virtual AndroidCXX::java_lang_String * getDisplayName() ;
	static AndroidCXX::java_net_NetworkInterface * getByName(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_Enumeration * getInetAddresses() ;
	virtual AndroidCXX::java_util_List * getInterfaceAddresses() ;
	virtual AndroidCXX::java_util_Enumeration * getSubInterfaces() ;
	static AndroidCXX::java_net_NetworkInterface * getByInetAddress(AndroidCXX::java_net_InetAddress const& arg0) ;
	static AndroidCXX::java_util_Enumeration * getNetworkInterfaces() ;
	virtual bool  isUp() ;
	virtual bool  isLoopback() ;
	virtual bool  isPointToPoint() ;
	virtual bool  supportsMulticast() ;
	virtual std::vector<byte>  getHardwareAddress() ;
	virtual int  getMTU() ;
	virtual bool  isVirtual() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_NetworkInterface