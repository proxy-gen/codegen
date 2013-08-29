/*
 * Header (Instance CXX)
 * Author: codegen
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

class java_net_URLConnection;

class java_lang_Object;

class java_lang_Class;

class java_net_ContentHandler 
{
public:

	java_net_ContentHandler(const java_net_ContentHandler& cc);
	java_net_ContentHandler(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_net_ContentHandler();
	// Functions
	virtual AndroidCXX::java_lang_Object * getContent(AndroidCXX::java_net_URLConnection const& arg0,std::vector<AndroidCXX::java_lang_Class> const& arg1) ;
	virtual AndroidCXX::java_lang_Object * getContent(AndroidCXX::java_net_URLConnection const& arg0) ;

protected:
	java_net_ContentHandler();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_ContentHandler