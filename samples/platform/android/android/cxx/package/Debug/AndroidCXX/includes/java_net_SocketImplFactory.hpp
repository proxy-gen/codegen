/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	








// Generated Code 

#ifndef _java_net_SocketImplFactory
#define _java_net_SocketImplFactory
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

class java_net_SocketImpl;

class java_net_SocketImplFactory : public java_lang_Object
{
public:

	java_net_SocketImplFactory(const java_net_SocketImplFactory& cc);
	java_net_SocketImplFactory(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_SocketImplFactory();
	// Functions
	virtual AndroidCXX::java_net_SocketImpl * createSocketImpl() ;

protected:
	java_net_SocketImplFactory();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_SocketImplFactory