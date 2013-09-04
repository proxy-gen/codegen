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



#include <java_lang_Object.hpp>

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

class java_net_DatagramSocketImplFactory : public AndroidCXX::java_lang_Object
{
public:

	java_net_DatagramSocketImplFactory(const java_net_DatagramSocketImplFactory& cc);
	java_net_DatagramSocketImplFactory(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_net_DatagramSocketImplFactory();
	// Functions
	virtual AndroidCXX::java_net_DatagramSocketImpl * createDatagramSocketImpl() ;

protected:
	java_net_DatagramSocketImplFactory();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_DatagramSocketImplFactory