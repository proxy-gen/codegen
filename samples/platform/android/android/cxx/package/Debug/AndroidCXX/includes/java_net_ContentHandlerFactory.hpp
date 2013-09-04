/*
 * Header (Instance CXX)
 * Author: codegen
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

class java_lang_String;

class java_net_ContentHandler;

class java_net_ContentHandlerFactory : public AndroidCXX::java_lang_Object
{
public:

	java_net_ContentHandlerFactory(const java_net_ContentHandlerFactory& cc);
	java_net_ContentHandlerFactory(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_net_ContentHandlerFactory();
	// Functions
	virtual AndroidCXX::java_net_ContentHandler * createContentHandler(AndroidCXX::java_lang_String const& arg0) ;

protected:
	java_net_ContentHandlerFactory();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_ContentHandlerFactory