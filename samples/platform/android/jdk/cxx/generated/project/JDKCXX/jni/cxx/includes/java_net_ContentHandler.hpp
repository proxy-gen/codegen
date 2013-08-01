/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
 	
	
 		 










// Generated Code 

#ifndef _java_net_ContentHandler
#define _java_net_ContentHandler
//
// Scroll Down 
//


#include <java_net_URLConnection.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_Class.hpp>

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

class java_net_URLConnection;

class java_lang_Object;

class java_lang_Class;

class java_net_ContentHandler
{
public:

	java_net_ContentHandler(const java_net_ContentHandler& cc);
	java_net_ContentHandler(Proxy proxy);
	// Public Constructors
	java_net_ContentHandler();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_ContentHandler();
	// Functions
	 JDKCXX::java_lang_Object getContent(JDKCXX::java_net_URLConnection const& arg0);
	 JDKCXX::java_lang_Object getContent(JDKCXX::java_net_URLConnection const& arg0,std::vector<JDKCXX::java_lang_Class > const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_ContentHandler