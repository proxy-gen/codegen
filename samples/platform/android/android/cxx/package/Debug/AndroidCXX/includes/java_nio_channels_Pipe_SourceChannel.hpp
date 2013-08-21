/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _java_nio_channels_Pipe_SourceChannel
#define _java_nio_channels_Pipe_SourceChannel
//
// Scroll Down 
//



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

class java_nio_channels_Pipe_SourceChannel : public AndroidCXX::java_nio_channels_ScatteringByteChannel
{
public:

	java_nio_channels_Pipe_SourceChannel(const java_nio_channels_Pipe_SourceChannel& cc);
	java_nio_channels_Pipe_SourceChannel(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_Pipe_SourceChannel();
	// Functions
	virtual int  validOps() ;

protected:
	java_nio_channels_Pipe_SourceChannel();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_Pipe_SourceChannel