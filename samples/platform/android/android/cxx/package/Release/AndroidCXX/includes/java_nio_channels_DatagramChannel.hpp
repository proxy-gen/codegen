/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 	
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 	
 		 
	
 		 
	
	
	
 		 
	





















// Generated Code 

#ifndef _java_nio_channels_DatagramChannel
#define _java_nio_channels_DatagramChannel
//
// Scroll Down 
//


#include <java_nio_ByteBuffer.hpp>

#include <java_net_SocketAddress.hpp>


#include <java_net_DatagramSocket.hpp>

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

class java_nio_ByteBuffer;

class java_net_SocketAddress;

class java_nio_channels_DatagramChannel;

class java_net_DatagramSocket;

class java_nio_channels_DatagramChannel
{
public:

	java_nio_channels_DatagramChannel(const java_nio_channels_DatagramChannel& cc);
	java_nio_channels_DatagramChannel(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_DatagramChannel();
	// Functions
	 long write(std::vector<java_nio_ByteBuffer> const& arg0);
	 int write(AndroidCXX::java_nio_ByteBuffer const& arg0);
	 long write(std::vector<java_nio_ByteBuffer> const& arg0,int const& arg1,int const& arg2);
	 int send(AndroidCXX::java_nio_ByteBuffer const& arg0,AndroidCXX::java_net_SocketAddress const& arg1);
	 long read(std::vector<java_nio_ByteBuffer> const& arg0,int const& arg1,int const& arg2);
	 int read(AndroidCXX::java_nio_ByteBuffer const& arg0);
	 long read(std::vector<java_nio_ByteBuffer> const& arg0);
	static AndroidCXX::java_nio_channels_DatagramChannel open();
	 AndroidCXX::java_nio_channels_DatagramChannel connect(AndroidCXX::java_net_SocketAddress const& arg0);
	 AndroidCXX::java_nio_channels_DatagramChannel disconnect();
	 AndroidCXX::java_net_DatagramSocket socket();
	 bool isConnected();
	 AndroidCXX::java_net_SocketAddress receive(AndroidCXX::java_nio_ByteBuffer const& arg0);
	 int validOps();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_DatagramChannel