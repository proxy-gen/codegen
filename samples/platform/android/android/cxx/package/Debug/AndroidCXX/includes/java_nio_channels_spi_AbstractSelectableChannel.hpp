/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
 		 
	
	
 		 
 		 
	














// Generated Code 

#ifndef _java_nio_channels_spi_AbstractSelectableChannel
#define _java_nio_channels_spi_AbstractSelectableChannel
//
// Scroll Down 
//



#include <java_nio_channels_SelectableChannel.hpp>

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

class java_lang_Object;


class java_nio_channels_Selector;

class java_nio_channels_SelectionKey;

class java_nio_channels_spi_SelectorProvider;

class java_nio_channels_spi_AbstractSelectableChannel : public AndroidCXX::java_nio_channels_SelectableChannel
{
public:

	java_nio_channels_spi_AbstractSelectableChannel(const java_nio_channels_spi_AbstractSelectableChannel& cc);
	java_nio_channels_spi_AbstractSelectableChannel(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_spi_AbstractSelectableChannel();
	// Functions
	virtual AndroidCXX::java_lang_Object * blockingLock() ;
	virtual AndroidCXX::java_nio_channels_SelectableChannel * configureBlocking(bool const& arg0) ;
	virtual bool  isBlocking() ;
	virtual bool  isRegistered() ;
	virtual AndroidCXX::java_nio_channels_SelectionKey * keyFor(AndroidCXX::java_nio_channels_Selector const& arg0) ;
	virtual AndroidCXX::java_nio_channels_spi_SelectorProvider * provider() ;
	virtual AndroidCXX::java_nio_channels_SelectionKey * _register(AndroidCXX::java_nio_channels_Selector const& arg0,int const& arg1,AndroidCXX::java_lang_Object const& arg2) ;

protected:
	java_nio_channels_spi_AbstractSelectableChannel();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_spi_AbstractSelectableChannel