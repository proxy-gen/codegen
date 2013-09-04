/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 










// Generated Code 

#ifndef _android_webkit_HttpAuthHandler
#define _android_webkit_HttpAuthHandler
//
// Scroll Down 
//


#include <java_lang_String.hpp>


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

class android_webkit_HttpAuthHandler 
{
public:

	// Public Constructor
	android_webkit_HttpAuthHandler(const android_webkit_HttpAuthHandler& cc);
	android_webkit_HttpAuthHandler(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_webkit_HttpAuthHandler();
	// Functions
	virtual void  cancel() ;
	virtual void  proceed(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual bool  useHttpAuthUsernamePassword() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_HttpAuthHandler