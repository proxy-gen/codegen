/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//





 		 







// Generated Code 

#ifndef _java_net_MalformedURLException
#define _java_net_MalformedURLException
//
// Scroll Down 
//


#include <java_lang_String.hpp>


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

class java_net_MalformedURLException : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	java_net_MalformedURLException(Proxy * aProxy = new Proxy());
	java_net_MalformedURLException(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	java_net_MalformedURLException(const java_net_MalformedURLException& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_net_MalformedURLException();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_MalformedURLException