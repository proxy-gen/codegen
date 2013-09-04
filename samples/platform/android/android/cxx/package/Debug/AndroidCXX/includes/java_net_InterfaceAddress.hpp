/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <java_net_InetAddress.hpp>

#include <java_lang_String.hpp>


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

class java_net_InterfaceAddress : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	java_net_InterfaceAddress(const java_net_InterfaceAddress& cc);
	java_net_InterfaceAddress(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_net_InterfaceAddress();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_net_InetAddress * getAddress() ;
	virtual AndroidCXX::java_net_InetAddress * getBroadcast() ;
	virtual short  getNetworkPrefixLength() ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_InterfaceAddress