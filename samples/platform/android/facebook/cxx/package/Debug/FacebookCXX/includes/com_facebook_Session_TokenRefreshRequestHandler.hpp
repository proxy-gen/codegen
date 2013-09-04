/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _com_facebook_Session_TokenRefreshRequestHandler
#define _com_facebook_Session_TokenRefreshRequestHandler
//
// Scroll Down 
//


#include <android_os_Message.hpp>


#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations


class com_facebook_Session_TokenRefreshRequestHandler 
{
public:

	// Public Constructor
	com_facebook_Session_TokenRefreshRequestHandler(const com_facebook_Session_TokenRefreshRequestHandler& cc);
	com_facebook_Session_TokenRefreshRequestHandler(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Session_TokenRefreshRequestHandler();
	// Functions
	virtual void  handleMessage(AndroidCXX::android_os_Message const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_TokenRefreshRequestHandler