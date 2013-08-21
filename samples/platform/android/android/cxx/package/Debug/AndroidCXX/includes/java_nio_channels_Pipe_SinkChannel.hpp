/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _java_nio_channels_Pipe_SinkChannel
#define _java_nio_channels_Pipe_SinkChannel
//
// Scroll Down 
//



#include <java_nio_channels_GatheringByteChannel.hpp>

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

class java_nio_channels_Pipe_SinkChannel : public AndroidCXX::java_nio_channels_GatheringByteChannel
{
public:

	java_nio_channels_Pipe_SinkChannel(const java_nio_channels_Pipe_SinkChannel& cc);
	java_nio_channels_Pipe_SinkChannel(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_Pipe_SinkChannel();
	// Functions
	virtual int  validOps() ;

protected:
	java_nio_channels_Pipe_SinkChannel();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_Pipe_SinkChannel