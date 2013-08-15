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

	// Public ConstrucXXX
	java_net_Socket();
	java_net_Socket(AndroidCXX::java_net_Proxy const& arg0);
	java_net_Socket(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	java_net_Socket(AndroidCXX::java_net_InetAddress const& arg0,int const& arg1);
	java_net_Socket(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::java_net_InetAddress const& arg2,int const& arg3);
	java_net_Socket(AndroidCXX::java_net_InetAddress const& arg0,int const& arg1,AndroidCXX::java_net_InetAddress const& arg2,int const& arg3);
	java_net_Socket(AndroidCXX::java_lang_String const& arg0,int const& arg1,bool const& arg2);
	java_net_Socket(AndroidCXX::java_net_InetAddress const& arg0,int const& arg1,bool const& arg2);
	java_net_Socket(const java_net_Socket& cc);
	java_net_Socket(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_Socket();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  close() ;
	virtual int  getPort() ;
	virtual AndroidCXX::java_io_InputStream * getInputStream() ;
	virtual AndroidCXX::java_nio_channels_SocketChannel * getChannel() ;
	virtual void  connect(AndroidCXX::java_net_SocketAddress const& arg0,int const& arg1) ;
	virtual void  connect(AndroidCXX::java_net_SocketAddress const& arg0) ;
	virtual bool  isClosed() ;
	virtual AndroidCXX::java_io_OutputStream * getOutputStream() ;
	virtual void  bind(AndroidCXX::java_net_SocketAddress const& arg0) ;
	virtual bool  isBound() ;
	virtual bool  isConnected() ;
	virtual AndroidCXX::java_net_InetAddress * getInetAddress() ;
	virtual AndroidCXX::java_net_SocketAddress * getRemoteSocketAddress() ;
	virtual AndroidCXX::java_net_SocketAddress * getLocalSocketAddress() ;
	virtual AndroidCXX::java_net_InetAddress * getLocalAddress() ;
	virtual int  getLocalPort() ;
	virtual void  setSoTimeout(int const& arg0) ;
	virtual int  getSoTimeout() ;
	virtual void  setSendBufferSize(int const& arg0) ;
	virtual int  getSendBufferSize() ;
	virtual void  setReceiveBufferSize(int const& arg0) ;
	virtual int  getReceiveBufferSize() ;
	virtual void  setReuseAddress(bool const& arg0) ;
	virtual bool  getReuseAddress() ;
	virtual void  setTrafficClass(int const& arg0) ;
	virtual int  getTrafficClass() ;
	virtual void  setTcpNoDelay(bool const& arg0) ;
	virtual bool  getTcpNoDelay() ;
	virtual void  setSoLinger(bool const& arg0,int const& arg1) ;
	virtual int  getSoLinger() ;
	virtual void  sendUrgentData(int const& arg0) ;
	virtual void  setOOBInline(bool const& arg0) ;
	virtual bool  getOOBInline() ;
	virtual void  setKeepAlive(bool const& arg0) ;
	virtual bool  getKeepAlive() ;
	virtual void  shutdownInput() ;
	virtual void  shutdownOutput() ;
	virtual bool  isInputShutdown() ;
	virtual bool  isOutputShutdown() ;
	static void  setSocketImplFactory(AndroidCXX::java_net_SocketImplFactory const& arg0) ;
	virtual void  setPerformancePreferences(int const& arg0,int const& arg1,int const& arg2) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_Socket