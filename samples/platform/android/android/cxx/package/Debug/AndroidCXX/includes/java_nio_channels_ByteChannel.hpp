/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//










// Generated Code 

#ifndef _java_nio_channels_ByteChannel
#define _java_nio_channels_ByteChannel
//
// Scroll Down 
//



#include <java_nio_channels_ReadableByteChannel.hpp>

#include <java_nio_channels_WritableByteChannel.hpp>

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

class java_nio_channels_ByteChannel : public java_nio_channels_ReadableByteChannel,public java_nio_channels_WritableByteChannel
{
public:

	java_nio_channels_ByteChannel(const java_nio_channels_ByteChannel& cc);
	java_nio_channels_ByteChannel(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_ByteChannel();
	// Functions

protected:
	java_nio_channels_ByteChannel();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_ByteChannel