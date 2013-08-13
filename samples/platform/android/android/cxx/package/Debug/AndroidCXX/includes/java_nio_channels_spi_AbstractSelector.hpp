/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	










// Generated Code 

#ifndef _java_nio_channels_spi_AbstractSelector
#define _java_nio_channels_spi_AbstractSelector
//
// Scroll Down 
//



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

class java_nio_channels_spi_SelectorProvider;

class java_nio_channels_spi_AbstractSelector 
{
public:

	java_nio_channels_spi_AbstractSelector(const java_nio_channels_spi_AbstractSelector& cc);
	java_nio_channels_spi_AbstractSelector(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_spi_AbstractSelector();
	// Functions
	virtual AndroidCXX::java_nio_channels_spi_SelectorProvider * provider() ;
	virtual void  close() ;
	virtual bool  isOpen() ;

protected:
	java_nio_channels_spi_AbstractSelector();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_spi_AbstractSelector