/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		
 			
		


#ifndef _java_nio_channels_SocketChannel
#define _java_nio_channels_SocketChannel











#include <java_net_SocketAddress.hpp>
#include <java_net_Socket.hpp>
#include <java_nio_ByteBuffer.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class java_nio_channels_SocketChannel
{
public:
 long write(std::vector<long>& arg0,java_nio_ByteBuffer& arg1,int& arg2);
 long read(std::vector<long>& arg0,int& arg1,java_nio_ByteBuffer& arg2);
static java_nio_channels_SocketChannel open(java_net_SocketAddress& arg0);
 bool connect(java_net_SocketAddress& arg0);
 java_net_Socket socket();
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