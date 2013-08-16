/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
	
	
	
	














// Generated Code 

#ifndef _java_nio_channels_spi_SelectorProvider
#define _java_nio_channels_spi_SelectorProvider
//
// Scroll Down 
//



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

class java_nio_channels_Channel;

class java_nio_channels_DatagramChannel;

class java_nio_channels_Pipe;

class java_nio_channels_spi_AbstractSelector;

class java_nio_channels_ServerSocketChannel;

class java_nio_channels_SocketChannel;


class java_nio_channels_spi_SelectorProvider 
{
public:

	java_nio_channels_spi_SelectorProvider(const java_nio_channels_spi_SelectorProvider& cc);
	java_nio_channels_spi_SelectorProvider(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_spi_SelectorProvider();
	// Functions
	virtual AndroidCXX::java_nio_channels_Channel * inheritedChannel() ;
	virtual AndroidCXX::java_nio_channels_DatagramChannel * openDatagramChannel() ;
	virtual AndroidCXX::java_nio_channels_Pipe * openPipe() ;
	virtual AndroidCXX::java_nio_channels_spi_AbstractSelector * openSelector() ;
	virtual AndroidCXX::java_nio_channels_ServerSocketChannel * openServerSocketChannel() ;
	virtual AndroidCXX::java_nio_channels_SocketChannel * openSocketChannel() ;
	static AndroidCXX::java_nio_channels_spi_SelectorProvider * provider() ;

protected:
	java_nio_channels_spi_SelectorProvider();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_spi_SelectorProvider