/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 	
 		 
 		 
 	
 		 
 	
 		 
 	
 		 
 		 
 		 
	
	
 		 
	





















// Generated Code 

#ifndef _java_nio_channels_SocketChannel
#define _java_nio_channels_SocketChannel
//
// Scroll Down 
//


#include <java_nio_ByteBuffer.hpp>

#include <java_net_SocketAddress.hpp>


#include <java_net_Socket.hpp>

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

class java_nio_channels_SocketChannel;

class java_net_Socket;

class java_nio_channels_SocketChannel
{
public:

	java_nio_channels_SocketChannel(const java_nio_channels_SocketChannel& cc);
	java_nio_channels_SocketChannel(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_SocketChannel();
	// Functions
	 long write(std::vector<AndroidCXX::java_nio_ByteBuffer > const& arg0);
	 int write(AndroidCXX::java_nio_ByteBuffer const& arg0);
	 long write(std::vector<AndroidCXX::java_nio_ByteBuffer > const& arg0,int const& arg1,int const& arg2);
	 long read(std::vector<AndroidCXX::java_nio_ByteBuffer > const& arg0,int const& arg1,int const& arg2);
	 long read(std::vector<AndroidCXX::java_nio_ByteBuffer > const& arg0);
	 int read(AndroidCXX::java_nio_ByteBuffer const& arg0);
	static AndroidCXX::java_nio_channels_SocketChannel open(AndroidCXX::java_net_SocketAddress const& arg0);
	static AndroidCXX::java_nio_channels_SocketChannel open();
	 bool connect(AndroidCXX::java_net_SocketAddress const& arg0);
	 AndroidCXX::java_net_Socket socket();
	 bool isConnected();
	 int validOps();
	 bool isConnectionPending();
	 bool finishConnect();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_SocketChannel