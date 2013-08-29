/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _com_facebook_android_Facebook_TokenRefreshConnectionHandler
#define _com_facebook_android_Facebook_TokenRefreshConnectionHandler
//
// Scroll Down 
//


#include <android_os_Message.hpp>


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

namespace FacebookCXX {

// Forward Declarations


class com_facebook_android_Facebook_TokenRefreshConnectionHandler : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_android_Facebook_TokenRefreshConnectionHandler(const com_facebook_android_Facebook_TokenRefreshConnectionHandler& cc);
	com_facebook_android_Facebook_TokenRefreshConnectionHandler(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_android_Facebook_TokenRefreshConnectionHandler();
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

#endif // _com_facebook_android_Facebook_TokenRefreshConnectionHandler