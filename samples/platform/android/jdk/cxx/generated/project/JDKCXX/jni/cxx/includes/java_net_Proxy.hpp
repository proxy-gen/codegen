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

namespace JDKCXX {

// Forward Declarations


class java_lang_Object;

class java_lang_String;

class java_net_SocketAddress;

class java_net_Proxy
{
public:

	java_net_Proxy(const java_net_Proxy& cc);
	java_net_Proxy(void * proxy);
	// Public Constructors
	java_net_Proxy(JAVA_NET_PROXY_TYPE::java_net_Proxy_Type& arg0,JDKCXX::java_net_SocketAddress& arg1);
	// TODO: remove
	// 
	// java_net_Proxy();
	// 
	// Default Destructor
	virtual ~java_net_Proxy();
	// Functions
	 JAVA_NET_PROXY_TYPE::java_net_Proxy_Type type();
	 bool equals(JDKCXX::java_lang_Object& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 JDKCXX::java_net_SocketAddress address();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_Proxy