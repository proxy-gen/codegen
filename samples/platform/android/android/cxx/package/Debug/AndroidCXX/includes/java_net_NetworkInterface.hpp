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

#include <java_net_InetAddress.hpp>

#include <java_lang_String.hpp>

#include <java_util_Enumeration.hpp>

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


class java_net_InetAddress;


class java_lang_String;

class java_util_Enumeration;

class java_util_List;

class java_net_InterfaceAddress;

class java_net_NetworkInterface : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	java_net_NetworkInterface(const java_net_NetworkInterface& cc);
	java_net_NetworkInterface(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_net_NetworkInterface();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	static AndroidCXX::java_net_NetworkInterface * getByInetAddress(AndroidCXX::java_net_InetAddress const& arg0) ;
	static AndroidCXX::java_net_NetworkInterface * getByName(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getDisplayName() ;
	virtual std::vector<byte>  getHardwareAddress() ;
	virtual AndroidCXX::java_util_Enumeration * getInetAddresses() ;
	virtual AndroidCXX::java_util_List * getInterfaceAddresses() ;
	virtual int  getMTU() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	static AndroidCXX::java_util_Enumeration * getNetworkInterfaces() ;
	virtual AndroidCXX::java_net_NetworkInterface * getParent() ;
	virtual AndroidCXX::java_util_Enumeration * getSubInterfaces() ;
	virtual int  hashCode() ;
	virtual bool  isLoopback() ;
	virtual bool  isPointToPoint() ;
	virtual bool  isUp() ;
	virtual bool  isVirtual() ;
	virtual bool  supportsMulticast() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_NetworkInterface