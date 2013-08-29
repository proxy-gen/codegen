/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//












// Generated Code 

#ifndef _android_webkit_SslErrorHandler
#define _android_webkit_SslErrorHandler
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

class android_webkit_SslErrorHandler : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_webkit_SslErrorHandler(const android_webkit_SslErrorHandler& cc);
	android_webkit_SslErrorHandler(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_webkit_SslErrorHandler();
	// Functions
	virtual void  cancel() ;
	virtual void  proceed() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_SslErrorHandler