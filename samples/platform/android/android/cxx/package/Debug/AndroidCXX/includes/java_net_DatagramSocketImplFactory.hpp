/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	








// Generated Code 

#ifndef _java_net_DatagramSocketImplFactory
#define _java_net_DatagramSocketImplFactory
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

class java_net_DatagramSocketImpl;

class java_net_DatagramSocketImplFactory 
{
public:

	java_net_DatagramSocketImplFactory(const java_net_DatagramSocketImplFactory& cc);
	java_net_DatagramSocketImplFactory(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_DatagramSocketImplFactory();
	// Functions
	virtual AndroidCXX::java_net_DatagramSocketImpl * createDatagramSocketImpl() ;

protected:
	java_net_DatagramSocketImplFactory();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_DatagramSocketImplFactory