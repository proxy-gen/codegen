/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	











// Generated Code 

#ifndef _java_nio_channels_ServerSocketChannel
#define _java_nio_channels_ServerSocketChannel
//
// Scroll Down 
//



#include <java_lang_Object.hpp>

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

class java_nio_channels_SocketChannel;


class java_net_ServerSocket;

class java_nio_channels_ServerSocketChannel : public java_lang_Object
{
public:

	java_nio_channels_ServerSocketChannel(const java_nio_channels_ServerSocketChannel& cc);
	java_nio_channels_ServerSocketChannel(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_ServerSocketChannel();
	// Functions
	virtual AndroidCXX::java_nio_channels_SocketChannel * accept() ;
	static AndroidCXX::java_nio_channels_ServerSocketChannel * open() ;
	virtual AndroidCXX::java_net_ServerSocket * socket() ;
	virtual int  validOps() ;

protected:
	java_nio_channels_ServerSocketChannel();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_ServerSocketChannel