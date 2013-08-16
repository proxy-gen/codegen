/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_io_Serializable.hpp>

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

class java_net_InetAddress : public java_io_Serializable
{
public:

	// Public ConstrucXXX
	java_net_InetAddress(const java_net_InetAddress& cc);
	java_net_InetAddress(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_InetAddress();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual std::vector<byte>  getAddress() ;
	static std::vector<java_net_InetAddress>  getAllByName(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::java_net_InetAddress * getByAddress(AndroidCXX::java_lang_String const& arg0,std::vector<byte> const& arg1) ;
	static AndroidCXX::java_net_InetAddress * getByAddress(std::vector<byte> const& arg0) ;
	static AndroidCXX::java_net_InetAddress * getByName(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getCanonicalHostName() ;
	virtual AndroidCXX::java_lang_String * getHostAddress() ;
	virtual AndroidCXX::java_lang_String * getHostName() ;
	static AndroidCXX::java_net_InetAddress * getLocalHost() ;
	virtual int  hashCode() ;
	virtual bool  isAnyLocalAddress() ;
	virtual bool  isLinkLocalAddress() ;
	virtual bool  isLoopbackAddress() ;
	virtual bool  isMCGlobal() ;
	virtual bool  isMCLinkLocal() ;
	virtual bool  isMCNodeLocal() ;
	virtual bool  isMCOrgLocal() ;
	virtual bool  isMCSiteLocal() ;
	virtual bool  isMulticastAddress() ;
	virtual bool  isReachable(AndroidCXX::java_net_NetworkInterface const& arg0,int const& arg1,int const& arg2) ;
	virtual bool  isReachable(int const& arg0) ;
	virtual bool  isSiteLocalAddress() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_InetAddress