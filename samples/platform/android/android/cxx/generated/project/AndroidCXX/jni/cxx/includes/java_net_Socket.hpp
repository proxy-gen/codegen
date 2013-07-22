/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	
 		 
 		 
	
 		 
	
	
	
	
 		 


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 























































// Generated Code 

#ifndef _java_net_Socket
#define _java_net_Socket
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_io_InputStream.hpp>

#include <java_nio_channels_SocketChannel.hpp>

#include <java_net_SocketAddress.hpp>

#include <java_io_OutputStream.hpp>

#include <java_net_InetAddress.hpp>

#include <java_net_SocketImplFactory.hpp>

#include <java_net_Proxy.hpp>

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

class java_lang_String;

class java_io_InputStream;

class java_nio_channels_SocketChannel;

class java_net_SocketAddress;

class java_io_OutputStream;

class java_net_InetAddress;

class java_net_SocketImplFactory;

class java_net_Proxy;

class java_net_Socket
{
public:

	java_net_Socket(const java_net_Socket& cc);
	java_net_Socket(void * proxy);
	// Public Constructors
	java_net_Socket();
	java_net_Socket(AndroidCXX::java_net_Proxy& arg0);
	java_net_Socket(AndroidCXX::java_lang_String& arg0,int& arg1);
	java_net_Socket(AndroidCXX::java_net_InetAddress& arg0,int& arg1);
	java_net_Socket(AndroidCXX::java_lang_String& arg0,int& arg1,AndroidCXX::java_net_InetAddress& arg2,int& arg3);
	java_net_Socket(AndroidCXX::java_net_InetAddress& arg0,int& arg1,AndroidCXX::java_net_InetAddress& arg2,int& arg3);
	java_net_Socket(AndroidCXX::java_lang_String& arg0,int& arg1,bool& arg2);
	java_net_Socket(AndroidCXX::java_net_InetAddress& arg0,int& arg1,bool& arg2);
	// Default Destructor
	virtual ~java_net_Socket();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 void close();
	 int getPort();
	 AndroidCXX::java_io_InputStream getInputStream();
	 AndroidCXX::java_nio_channels_SocketChannel getChannel();
	 void connect(AndroidCXX::java_net_SocketAddress& arg0);
	 void connect(AndroidCXX::java_net_SocketAddress& arg0,int& arg1);
	 bool isClosed();
	 AndroidCXX::java_io_OutputStream getOutputStream();
	 void bind(AndroidCXX::java_net_SocketAddress& arg0);
	 AndroidCXX::java_net_InetAddress getInetAddress();
	 AndroidCXX::java_net_InetAddress getLocalAddress();
	 int getLocalPort();
	 AndroidCXX::java_net_SocketAddress getRemoteSocketAddress();
	 AndroidCXX::java_net_SocketAddress getLocalSocketAddress();
	 void setTcpNoDelay(bool& arg0);
	 bool getTcpNoDelay();
	 void setSoLinger(bool& arg0,int& arg1);
	 int getSoLinger();
	 void sendUrgentData(int& arg0);
	 void setOOBInline(bool& arg0);
	 bool getOOBInline();
	 void setSoTimeout(int& arg0);
	 int getSoTimeout();
	 void setSendBufferSize(int& arg0);
	 int getSendBufferSize();
	 void setReceiveBufferSize(int& arg0);
	 int getReceiveBufferSize();
	 void setKeepAlive(bool& arg0);
	 bool getKeepAlive();
	 void setTrafficClass(int& arg0);
	 int getTrafficClass();
	 void setReuseAddress(bool& arg0);
	 bool getReuseAddress();
	 void shutdownInput();
	 void shutdownOutput();
	 bool isConnected();
	 bool isBound();
	 bool isInputShutdown();
	 bool isOutputShutdown();
	static void setSocketImplFactory(AndroidCXX::java_net_SocketImplFactory& arg0);
	 void setPerformancePreferences(int& arg0,int& arg1,int& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_Socket