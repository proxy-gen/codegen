/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	
	
	
	
	
 		 
 		 
 		 


 		 
 		 







































// Generated Code 

#ifndef _java_net_DatagramSocket
#define _java_net_DatagramSocket
//
// Scroll Down 
//


#include <java_net_SocketAddress.hpp>

#include <java_net_InetAddress.hpp>

#include <java_nio_channels_DatagramChannel.hpp>

#include <java_net_DatagramPacket.hpp>

#include <java_net_DatagramSocketImplFactory.hpp>


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

class java_net_SocketAddress;

class java_net_InetAddress;

class java_nio_channels_DatagramChannel;

class java_net_DatagramPacket;

class java_net_DatagramSocketImplFactory;

class java_net_DatagramSocket 
{
public:

	// Public Constructor
	java_net_DatagramSocket(Proxy * aProxy = new Proxy());
	java_net_DatagramSocket(int const& arg0,Proxy * aProxy = new Proxy());
	java_net_DatagramSocket(int const& arg0,AndroidCXX::java_net_InetAddress const& arg1,Proxy * aProxy = new Proxy());
	java_net_DatagramSocket(AndroidCXX::java_net_SocketAddress const& arg0,Proxy * aProxy = new Proxy());
	java_net_DatagramSocket(const java_net_DatagramSocket& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_net_DatagramSocket();
	// Functions
	virtual void  bind(AndroidCXX::java_net_SocketAddress const& arg0) ;
	virtual void  close() ;
	virtual void  connect(AndroidCXX::java_net_InetAddress const& arg0,int const& arg1) ;
	virtual void  connect(AndroidCXX::java_net_SocketAddress const& arg0) ;
	virtual void  disconnect() ;
	virtual bool  getBroadcast() ;
	virtual AndroidCXX::java_nio_channels_DatagramChannel * getChannel() ;
	virtual AndroidCXX::java_net_InetAddress * getInetAddress() ;
	virtual AndroidCXX::java_net_InetAddress * getLocalAddress() ;
	virtual int  getLocalPort() ;
	virtual AndroidCXX::java_net_SocketAddress * getLocalSocketAddress() ;
	virtual int  getPort() ;
	virtual int  getReceiveBufferSize() ;
	virtual AndroidCXX::java_net_SocketAddress * getRemoteSocketAddress() ;
	virtual bool  getReuseAddress() ;
	virtual int  getSendBufferSize() ;
	virtual int  getSoTimeout() ;
	virtual int  getTrafficClass() ;
	virtual bool  isBound() ;
	virtual bool  isClosed() ;
	virtual bool  isConnected() ;
	virtual void  receive(AndroidCXX::java_net_DatagramPacket const& arg0) ;
	virtual void  send(AndroidCXX::java_net_DatagramPacket const& arg0) ;
	virtual void  setBroadcast(bool const& arg0) ;
	static void  setDatagramSocketImplFactory(AndroidCXX::java_net_DatagramSocketImplFactory const& arg0) ;
	virtual void  setReceiveBufferSize(int const& arg0) ;
	virtual void  setReuseAddress(bool const& arg0) ;
	virtual void  setSendBufferSize(int const& arg0) ;
	virtual void  setSoTimeout(int const& arg0) ;
	virtual void  setTrafficClass(int const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_DatagramSocket