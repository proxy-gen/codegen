/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 









// Generated Code 

#ifndef _com_facebook_GetTokenClient
#define _com_facebook_GetTokenClient
//
// Scroll Down 
//


#include <android_content_ComponentName.hpp>

#include <android_os_IBinder.hpp>

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



class com_facebook_GetTokenClient
{
public:

	com_facebook_GetTokenClient(const com_facebook_GetTokenClient& cc);
	com_facebook_GetTokenClient(void * proxy);
	// Public Constructors
	com_facebook_GetTokenClient();
	// Default Destructor
	virtual ~com_facebook_GetTokenClient();
	// Functions
	 void onServiceConnected(AndroidCXX::android_content_ComponentName& arg0,AndroidCXX::android_os_IBinder& arg1);
	 void onServiceDisconnected(AndroidCXX::android_content_ComponentName& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_GetTokenClient