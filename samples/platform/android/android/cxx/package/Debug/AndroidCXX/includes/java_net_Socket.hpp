/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_net_SocketAddress.hpp>

#include <java_nio_channels_SocketChannel.hpp>

#include <java_net_InetAddress.hpp>

#include <java_io_InputStream.hpp>

#include <java_io_OutputStream.hpp>

#include <java_net_SocketImplFactory.hpp>

#include <java_lang_String.hpp>

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

class java_net_SocketAddress;

class java_nio_channels_SocketChannel;

class java_net_InetAddress;

class java_io_InputStream;

class java_io_OutputStream;

class java_net_SocketImplFactory;

class java_lang_String;

class java_net_Proxy;

class java_net_Socket 
{
public:

	// Public ConstrucXXX
	java_net_Socket();
	java_net_Socket(AndroidCXX::java_net_InetAddress const& arg0,int const& arg1,bool const& arg2);
	java_net_Socket(AndroidCXX::java_net_Proxy const& arg0);
	java_net_Socket(AndroidCXX::java_net_InetAddress const& arg0,int const& arg1);
	java_net_Socket(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	java_net_Socket(AndroidCXX::java_lang_String const& arg0,int const& arg1,bool const& arg2);
	java_net_Socket(AndroidCXX::java_net_InetAddress const& arg0,int const& arg1,AndroidCXX::java_net_InetAddress const& arg2,int const& arg3);
	java_net_Socket(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::java_net_InetAddress const& arg2,int const& arg3);
	java_net_Socket(const java_net_Socket& cc);
	java_net_Socket(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_Socket();
	// Functions
	virtual void  bind(AndroidCXX::java_net_SocketAddress const& arg0) ;
	virtual void  close() ;
	virtual void  connect(AndroidCXX::java_net_SocketAddress const& arg0) ;
	virtual void  connect(AndroidCXX::java_net_SocketAddress const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_nio_channels_SocketChannel * getChannel() ;
	virtual AndroidCXX::java_net_InetAddress * getInetAddress() ;
	virtual AndroidCXX::java_io_InputStream * getInputStream() ;
	virtual bool  getKeepAlive() ;
	virtual AndroidCXX::java_net_InetAddress * getLocalAddress() ;
	virtual int  getLocalPort() ;
	virtual AndroidCXX::java_net_SocketAddress * getLocalSocketAddress() ;
	virtual bool  getOOBInline() ;
	virtual AndroidCXX::java_io_OutputStream * getOutputStream() ;
	virtual int  getPort() ;
	virtual int  getReceiveBufferSize() ;
	virtual AndroidCXX::java_net_SocketAddress * getRemoteSocketAddress() ;
	virtual bool  getReuseAddress() ;
	virtual int  getSendBufferSize() ;
	virtual int  getSoLinger() ;
	virtual int  getSoTimeout() ;
	virtual bool  getTcpNoDelay() ;
	virtual int  getTrafficClass() ;
	virtual bool  isBound() ;
	virtual bool  isClosed() ;
	virtual bool  isConnected() ;
	virtual bool  isInputShutdown() ;
	virtual bool  isOutputShutdown() ;
	virtual void  sendUrgentData(int const& arg0) ;
	virtual void  setKeepAlive(bool const& arg0) ;
	virtual void  setOOBInline(bool const& arg0) ;
	virtual void  setPerformancePreferences(int const& arg0,int const& arg1,int const& arg2) ;
	virtual void  setReceiveBufferSize(int const& arg0) ;
	virtual void  setReuseAddress(bool const& arg0) ;
	virtual void  setSendBufferSize(int const& arg0) ;
	virtual void  setSoLinger(bool const& arg0,int const& arg1) ;
	virtual void  setSoTimeout(int const& arg0) ;
	static void  setSocketImplFactory(AndroidCXX::java_net_SocketImplFactory const& arg0) ;
	virtual void  setTcpNoDelay(bool const& arg0) ;
	virtual void  setTrafficClass(int const& arg0) ;
	virtual void  shutdownInput() ;
	virtual void  shutdownOutput() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_Socket