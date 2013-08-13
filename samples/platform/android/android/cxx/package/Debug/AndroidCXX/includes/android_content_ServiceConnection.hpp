/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 









// Generated Code 

#ifndef _android_content_ServiceConnection
#define _android_content_ServiceConnection
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

class android_content_ComponentName;

class android_os_IBinder;

class android_content_ServiceConnection 
{
public:

	android_content_ServiceConnection(const android_content_ServiceConnection& cc);
	android_content_ServiceConnection(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_ServiceConnection();
	// Functions
	virtual void  onServiceConnected(AndroidCXX::android_content_ComponentName const& arg0,AndroidCXX::android_os_IBinder const& arg1) ;
	virtual void  onServiceDisconnected(AndroidCXX::android_content_ComponentName const& arg0) ;

protected:
	android_content_ServiceConnection();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ServiceConnection