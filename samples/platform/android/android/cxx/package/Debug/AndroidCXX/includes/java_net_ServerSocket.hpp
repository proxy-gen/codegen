/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
	
	
	
 		 
	


 		 




























// Generated Code 

#ifndef _java_net_ServerSocket
#define _java_net_ServerSocket
//
// Scroll Down 
//


#include <java_net_Socket.hpp>

#include <java_net_SocketAddress.hpp>

#include <java_nio_channels_ServerSocketChannel.hpp>

#include <java_net_InetAddress.hpp>

#include <java_net_SocketImplFactory.hpp>

#include <java_lang_String.hpp>


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

class java_net_Socket;

class java_net_SocketAddress;

class java_nio_channels_ServerSocketChannel;

class java_net_InetAddress;

class java_net_SocketImplFactory;

class java_lang_String;

class java_net_ServerSocket 
{
public:

	// Public ConstrucXXX
	java_net_ServerSocket();
	java_net_ServerSocket(int const& arg0,int const& arg1,AndroidCXX::java_net_InetAddress const& arg2);
	java_net_ServerSocket(int const& arg0);
	java_net_ServerSocket(int const& arg0,int const& arg1);
	java_net_ServerSocket(const java_net_ServerSocket& cc);
	java_net_ServerSocket(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_ServerSocket();
	// Functions
	virtual AndroidCXX::java_net_Socket * accept() ;
	virtual void  bind(AndroidCXX::java_net_SocketAddress const& arg0,int const& arg1) ;
	virtual void  bind(AndroidCXX::java_net_SocketAddress const& arg0) ;
	virtual void  close() ;
	virtual AndroidCXX::java_nio_channels_ServerSocketChannel * getChannel() ;
	virtual AndroidCXX::java_net_InetAddress * getInetAddress() ;
	virtual int  getLocalPort() ;
	virtual AndroidCXX::java_net_SocketAddress * getLocalSocketAddress() ;
	virtual int  getReceiveBufferSize() ;
	virtual bool  getReuseAddress() ;
	virtual int  getSoTimeout() ;
	virtual bool  isBound() ;
	virtual bool  isClosed() ;
	virtual void  setPerformancePreferences(int const& arg0,int const& arg1,int const& arg2) ;
	virtual void  setReceiveBufferSize(int const& arg0) ;
	virtual void  setReuseAddress(bool const& arg0) ;
	virtual void  setSoTimeout(int const& arg0) ;
	static void  setSocketFactory(AndroidCXX::java_net_SocketImplFactory const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_ServerSocket