/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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
	java_net_DatagramPacket(const java_net_DatagramPacket& cc);
	java_net_DatagramPacket(void * proxy);
	virtual ~java_net_DatagramPacket();
	 int getLength();
	 java_net_InetAddress *  getAddress();
	 void setLength(int& arg0);
	 int getOffset();
	 int getPort();
	 std::vector<char> getData();
	 void setAddress(java_net_InetAddress& arg0);
	 void setPort(int& arg0);
	 void setData(std::vector<char>& arg0,int& arg1);
	 void setSocketAddress(java_net_SocketAddress& arg0);
	 java_net_SocketAddress *  getSocketAddress();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_DatagramPacket