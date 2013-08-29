/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
	
 		 
 	
 	
 		 


 	
 	
 	
 		 
 	
 		 
 	
 		 
 	
 		 























// Generated Code 

#ifndef _java_net_DatagramPacket
#define _java_net_DatagramPacket
//
// Scroll Down 
//


#include <java_net_InetAddress.hpp>

#include <java_net_SocketAddress.hpp>


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

class java_net_SocketAddress;

class java_net_DatagramPacket 
{
public:

	// Public Constructor
	java_net_DatagramPacket(std::vector<byte> const& arg0,int const& arg1,Proxy * aProxy = new Proxy());
	java_net_DatagramPacket(std::vector<byte> const& arg0,int const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	java_net_DatagramPacket(std::vector<byte> const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_net_InetAddress const& arg3,int const& arg4,Proxy * aProxy = new Proxy());
	java_net_DatagramPacket(std::vector<byte> const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_net_SocketAddress const& arg3,Proxy * aProxy = new Proxy());
	java_net_DatagramPacket(std::vector<byte> const& arg0,int const& arg1,AndroidCXX::java_net_InetAddress const& arg2,int const& arg3,Proxy * aProxy = new Proxy());
	java_net_DatagramPacket(std::vector<byte> const& arg0,int const& arg1,AndroidCXX::java_net_SocketAddress const& arg2,Proxy * aProxy = new Proxy());
	java_net_DatagramPacket(const java_net_DatagramPacket& cc);
	java_net_DatagramPacket(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_net_DatagramPacket();
	// Functions
	virtual AndroidCXX::java_net_InetAddress * getAddress() ;
	virtual std::vector<byte>  getData() ;
	virtual int  getLength() ;
	virtual int  getOffset() ;
	virtual int  getPort() ;
	virtual AndroidCXX::java_net_SocketAddress * getSocketAddress() ;
	virtual void  setAddress(AndroidCXX::java_net_InetAddress const& arg0) ;
	virtual void  setData(std::vector<byte> const& arg0,int const& arg1,int const& arg2) ;
	virtual void  setData(std::vector<byte> const& arg0) ;
	virtual void  setLength(int const& arg0) ;
	virtual void  setPort(int const& arg0) ;
	virtual void  setSocketAddress(AndroidCXX::java_net_SocketAddress const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_DatagramPacket