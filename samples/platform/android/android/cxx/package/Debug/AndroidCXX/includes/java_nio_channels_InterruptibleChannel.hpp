/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _java_nio_channels_InterruptibleChannel
#define _java_nio_channels_InterruptibleChannel
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

class java_nio_channels_InterruptibleChannel : public java_nio_channels_Channel
{
public:

	java_nio_channels_InterruptibleChannel(const java_nio_channels_InterruptibleChannel& cc);
	java_nio_channels_InterruptibleChannel(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_InterruptibleChannel();
	// Functions
	virtual void  close() ;

protected:
	java_nio_channels_InterruptibleChannel();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_InterruptibleChannel