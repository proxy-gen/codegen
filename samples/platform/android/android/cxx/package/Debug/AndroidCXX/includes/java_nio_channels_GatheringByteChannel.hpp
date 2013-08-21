/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
 		 
 	
 		 









// Generated Code 

#ifndef _java_nio_channels_GatheringByteChannel
#define _java_nio_channels_GatheringByteChannel
//
// Scroll Down 
//



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

class java_nio_ByteBuffer;

class java_nio_channels_GatheringByteChannel : public AndroidCXX::java_nio_channels_WritableByteChannel
{
public:

	java_nio_channels_GatheringByteChannel(const java_nio_channels_GatheringByteChannel& cc);
	java_nio_channels_GatheringByteChannel(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_GatheringByteChannel();
	// Functions
	virtual long  write(std::vector<AndroidCXX::java_nio_ByteBuffer> const& arg0,int const& arg1,int const& arg2) ;
	virtual long  write(std::vector<AndroidCXX::java_nio_ByteBuffer> const& arg0) ;

protected:
	java_nio_channels_GatheringByteChannel();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_GatheringByteChannel