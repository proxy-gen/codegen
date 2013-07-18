/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
		


#ifndef _java_net_DatagramPacket
#define _java_net_DatagramPacket













#include <java_net_InetAddress.hpp>
#include <java_net_SocketAddress.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class java_net_DatagramPacket
{
public:
 int getLength();
 java_net_InetAddress getAddress();
 void setLength(int& arg0);
 int getOffset();
 int getPort();
 std::vector<char> getData();
 void setAddress(java_net_InetAddress& arg0);
 void setPort(int& arg0);
 void setData(std::vector<char>& arg0,int& arg1);
 void setSocketAddress(java_net_SocketAddress& arg0);
 java_net_SocketAddress getSocketAddress();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_DatagramPacket