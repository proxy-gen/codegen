/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
	
	


 		 
 		 











// Generated Code 

#ifndef _java_net_Proxy
#define _java_net_Proxy
//
// Scroll Down 
//


#include <java_net_SocketAddress.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_net_Proxy_Type.hpp>


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

class java_net_SocketAddress;


class java_lang_String;


class java_net_Proxy : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	java_net_Proxy(java_net_Proxy_Type::java_net_Proxy_Type const& arg0,AndroidCXX::java_net_SocketAddress const& arg1,Proxy * aProxy = new Proxy());
	java_net_Proxy(const java_net_Proxy& cc);
	java_net_Proxy(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_net_Proxy();
	// Functions
	virtual AndroidCXX::java_net_SocketAddress * address() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual java_net_Proxy_Type::java_net_Proxy_Type  type() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_Proxy