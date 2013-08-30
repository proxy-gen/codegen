/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	








// Generated Code 

#ifndef _java_net_URLStreamHandlerFactory
#define _java_net_URLStreamHandlerFactory
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_net_URLStreamHandler.hpp>

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

class java_net_URLStreamHandler;

class java_net_URLStreamHandlerFactory
{
public:

	java_net_URLStreamHandlerFactory(const java_net_URLStreamHandlerFactory& cc);
	java_net_URLStreamHandlerFactory(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_URLStreamHandlerFactory();
	// Functions
	 AndroidCXX::java_net_URLStreamHandler createURLStreamHandler(AndroidCXX::java_lang_String const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URLStreamHandlerFactory