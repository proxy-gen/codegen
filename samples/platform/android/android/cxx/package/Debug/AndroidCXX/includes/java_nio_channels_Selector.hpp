/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
 		 
	
	
	
 	
 		 
	

















// Generated Code 

#ifndef _java_nio_channels_Selector
#define _java_nio_channels_Selector
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

class java_util_Set;

class java_nio_channels_SelectionKey;


class java_nio_channels_spi_SelectorProvider;

class java_nio_channels_Selector 
{
public:

	java_nio_channels_Selector(const java_nio_channels_Selector& cc);
	java_nio_channels_Selector(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_Selector();
	// Functions
	virtual void  close() ;
	virtual bool  isOpen() ;
	virtual AndroidCXX::java_util_Set * keys() ;
	static AndroidCXX::java_nio_channels_Selector * open() ;
	virtual AndroidCXX::java_nio_channels_spi_SelectorProvider * provider() ;
	virtual int  selectNow() ;
	virtual int  select(long const& arg0) ;
	virtual int  select() ;
	virtual AndroidCXX::java_util_Set * selectedKeys() ;
	virtual AndroidCXX::java_nio_channels_Selector * wakeup() ;

protected:
	java_nio_channels_Selector();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_Selector