/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	








// Generated Code 

#ifndef _java_net_ContentHandlerFactory
#define _java_net_ContentHandlerFactory
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_net_ContentHandler.hpp>

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

class java_lang_String;

class java_net_ContentHandler;

class java_net_ContentHandlerFactory
{
public:

	java_net_ContentHandlerFactory(const java_net_ContentHandlerFactory& cc);
	java_net_ContentHandlerFactory(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_ContentHandlerFactory();
	// Functions
	 JDKCXX::java_net_ContentHandler createContentHandler(JDKCXX::java_lang_String const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_ContentHandlerFactory