/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//












// Generated Code 

#ifndef _java_nio_channels_spi_AbstractInterruptibleChannel
#define _java_nio_channels_spi_AbstractInterruptibleChannel
//
// Scroll Down 
//



#include <java_nio_channels_InterruptibleChannel.hpp>

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

class java_nio_channels_spi_AbstractInterruptibleChannel : public AndroidCXX::java_nio_channels_InterruptibleChannel
{
public:

	java_nio_channels_spi_AbstractInterruptibleChannel(const java_nio_channels_spi_AbstractInterruptibleChannel& cc);
	java_nio_channels_spi_AbstractInterruptibleChannel(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_spi_AbstractInterruptibleChannel();
	// Functions
	virtual void  close() ;
	virtual bool  isOpen() ;

protected:
	java_nio_channels_spi_AbstractInterruptibleChannel();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_spi_AbstractInterruptibleChannel