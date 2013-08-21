/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 










// Generated Code 

#ifndef _com_facebook_Session_TokenRefreshRequest
#define _com_facebook_Session_TokenRefreshRequest
//
// Scroll Down 
//


#include <android_content_ComponentName.hpp>

#include <android_os_IBinder.hpp>


#include <android_content_ServiceConnection.hpp>

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



class com_facebook_Session_TokenRefreshRequest : public AndroidCXX::android_content_ServiceConnection
{
public:

	// Public ConstrucXXX
	com_facebook_Session_TokenRefreshRequest(const com_facebook_Session_TokenRefreshRequest& cc);
	com_facebook_Session_TokenRefreshRequest(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Session_TokenRefreshRequest();
	// Functions
	virtual void  bind() ;
	virtual void  onServiceConnected(AndroidCXX::android_content_ComponentName const& arg0,AndroidCXX::android_os_IBinder const& arg1) ;
	virtual void  onServiceDisconnected(AndroidCXX::android_content_ComponentName const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_TokenRefreshRequest