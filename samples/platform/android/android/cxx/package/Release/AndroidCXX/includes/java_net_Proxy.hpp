/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_net_Proxy_Type.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_net_SocketAddress.hpp>

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

class java_lang_String;

class java_net_SocketAddress;

class java_net_Proxy
{
public:

	java_net_Proxy(const java_net_Proxy& cc);
	java_net_Proxy(Proxy proxy);
	// Public Constructors
	java_net_Proxy(java_net_Proxy_Type::java_net_Proxy_Type const& arg0,AndroidCXX::java_net_SocketAddress const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_Proxy();
	// Functions
	 java_net_Proxy_Type::java_net_Proxy_Type type();
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::java_net_SocketAddress address();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_Proxy