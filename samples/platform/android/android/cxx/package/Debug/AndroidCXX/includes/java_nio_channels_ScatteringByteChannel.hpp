/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
 		 
 	
 		 









// Generated Code 

#ifndef _java_nio_channels_ScatteringByteChannel
#define _java_nio_channels_ScatteringByteChannel
//
// Scroll Down 
//



#include <java_nio_channels_ReadableByteChannel.hpp>

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

class java_nio_ByteBuffer;

class java_nio_channels_ScatteringByteChannel : public AndroidCXX::java_nio_channels_ReadableByteChannel
{
public:

	java_nio_channels_ScatteringByteChannel(const java_nio_channels_ScatteringByteChannel& cc);
	java_nio_channels_ScatteringByteChannel(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_ScatteringByteChannel();
	// Functions
	virtual long  read(std::vector<AndroidCXX::java_nio_ByteBuffer> const& arg0,int const& arg1,int const& arg2) ;
	virtual long  read(std::vector<AndroidCXX::java_nio_ByteBuffer> const& arg0) ;

protected:
	java_nio_channels_ScatteringByteChannel();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_ScatteringByteChannel