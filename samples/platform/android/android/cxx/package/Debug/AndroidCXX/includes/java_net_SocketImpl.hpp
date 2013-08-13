/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	









// Generated Code 

#ifndef _java_net_SocketImpl
#define _java_net_SocketImpl
//
// Scroll Down 
//



#include <java_net_SocketOptions.hpp>

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

class java_lang_String;

class java_net_SocketImpl : public java_net_SocketOptions
{
public:

	java_net_SocketImpl(const java_net_SocketImpl& cc);
	java_net_SocketImpl(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_SocketImpl();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;

protected:
	java_net_SocketImpl();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_SocketImpl