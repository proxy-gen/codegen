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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_nio_ByteBuffer;

class java_net_SocketAddress;


class java_net_DatagramSocket;

class java_nio_channels_DatagramChannel
{
public:
 long write(std::vector<long>& arg0,java_nio_ByteBuffer& arg1,int& arg2);
 int send(java_nio_ByteBuffer& arg0,java_net_SocketAddress& arg1);
 long read(std::vector<long>& arg0,int& arg1,java_nio_ByteBuffer& arg2);
static java_nio_channels_DatagramChannel open();
 java_nio_channels_DatagramChannel connect(java_net_SocketAddress& arg0);
 java_nio_channels_DatagramChannel disconnect();
 java_net_DatagramSocket socket();
 bool isConnected();
 java_net_SocketAddress receive(java_nio_ByteBuffer& arg0);
 int validOps();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_DatagramChannel