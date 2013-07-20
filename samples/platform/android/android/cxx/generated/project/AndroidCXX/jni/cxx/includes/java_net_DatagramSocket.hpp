/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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
































#include <java_net_DatagramPacket.hpp>

#include <java_nio_channels_DatagramChannel.hpp>

#include <java_net_SocketAddress.hpp>

#include <java_net_InetAddress.hpp>

#include <java_net_DatagramSocketImplFactory.hpp>

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

class java_net_DatagramPacket;

class java_nio_channels_DatagramChannel;

class java_net_SocketAddress;

class java_net_InetAddress;

class java_net_DatagramSocketImplFactory;

class java_net_DatagramSocket
{
public:
	 void close();
	 void send(java_net_DatagramPacket& arg0);
	 int getPort();
	 java_nio_channels_DatagramChannel *  getChannel();
	 void connect(java_net_SocketAddress& arg0,java_net_InetAddress& arg1,int& arg2);
	 bool isClosed();
	 void disconnect();
	 void bind(java_net_SocketAddress& arg0);
	 java_net_InetAddress *  getInetAddress();
	 java_net_InetAddress *  getLocalAddress();
	 int getLocalPort();
	 java_net_SocketAddress *  getRemoteSocketAddress();
	 java_net_SocketAddress *  getLocalSocketAddress();
	 void setSoTimeout(int& arg0);
	 int getSoTimeout();
	 void setSendBufferSize(int& arg0);
	 int getSendBufferSize();
	 void setReceiveBufferSize(int& arg0);
	 int getReceiveBufferSize();
	 void setTrafficClass(int& arg0);
	 int getTrafficClass();
	 void setReuseAddress(bool& arg0);
	 bool getReuseAddress();
	 bool isConnected();
	 bool isBound();
	 void receive(java_net_DatagramPacket& arg0);
	 void setBroadcast(bool& arg0);
	 bool getBroadcast();
	static void setDatagramSocketImplFactory(java_net_DatagramSocketImplFactory& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_DatagramSocket