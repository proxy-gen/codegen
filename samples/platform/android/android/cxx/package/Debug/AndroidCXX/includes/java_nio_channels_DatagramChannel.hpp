/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_nio_channels_ByteChannel.hpp>

#include <java_nio_channels_GatheringByteChannel.hpp>

#include <java_nio_channels_ScatteringByteChannel.hpp>

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


class java_nio_ByteBuffer;

class java_net_DatagramSocket;

class java_nio_channels_DatagramChannel : public java_nio_channels_ByteChannel,public java_nio_channels_GatheringByteChannel,public java_nio_channels_ScatteringByteChannel
{
public:

	java_nio_channels_DatagramChannel(const java_nio_channels_DatagramChannel& cc);
	java_nio_channels_DatagramChannel(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_DatagramChannel();
	// Functions
	virtual AndroidCXX::java_nio_channels_DatagramChannel * connect(AndroidCXX::java_net_SocketAddress const& arg0) ;
	virtual AndroidCXX::java_nio_channels_DatagramChannel * disconnect() ;
	virtual bool  isConnected() ;
	static AndroidCXX::java_nio_channels_DatagramChannel * open() ;
	virtual long  read(std::vector<java_nio_ByteBuffer> const& arg0,int const& arg1,int const& arg2) ;
	virtual int  read(AndroidCXX::java_nio_ByteBuffer const& arg0) ;
	virtual long  read(std::vector<java_nio_ByteBuffer> const& arg0) ;
	virtual AndroidCXX::java_net_SocketAddress * receive(AndroidCXX::java_nio_ByteBuffer const& arg0) ;
	virtual int  send(AndroidCXX::java_nio_ByteBuffer const& arg0,AndroidCXX::java_net_SocketAddress const& arg1) ;
	virtual AndroidCXX::java_net_DatagramSocket * socket() ;
	virtual int  validOps() ;
	virtual long  write(std::vector<java_nio_ByteBuffer> const& arg0) ;
	virtual int  write(AndroidCXX::java_nio_ByteBuffer const& arg0) ;
	virtual long  write(std::vector<java_nio_ByteBuffer> const& arg0,int const& arg1,int const& arg2) ;

protected:
	java_nio_channels_DatagramChannel();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_DatagramChannel