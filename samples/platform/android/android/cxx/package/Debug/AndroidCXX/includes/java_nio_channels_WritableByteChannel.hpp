/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _java_nio_channels_WritableByteChannel
#define _java_nio_channels_WritableByteChannel
//
// Scroll Down 
//



#include <java_nio_channels_Channel.hpp>

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

class java_nio_channels_WritableByteChannel : public AndroidCXX::java_nio_channels_Channel
{
public:

	java_nio_channels_WritableByteChannel(const java_nio_channels_WritableByteChannel& cc);
	java_nio_channels_WritableByteChannel(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_WritableByteChannel();
	// Functions
	virtual int  write(AndroidCXX::java_nio_ByteBuffer const& arg0) ;

protected:
	java_nio_channels_WritableByteChannel();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_WritableByteChannel