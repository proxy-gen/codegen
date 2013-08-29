/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 









// Generated Code 

#ifndef _android_os_MessageQueue
#define _android_os_MessageQueue
//
// Scroll Down 
//


#include <android_os_MessageQueue_IdleHandler.hpp>


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

class android_os_MessageQueue_IdleHandler;

class android_os_MessageQueue 
{
public:

	// Public Constructor
	android_os_MessageQueue(const android_os_MessageQueue& cc);
	android_os_MessageQueue(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_os_MessageQueue();
	// Functions
	virtual void  addIdleHandler(AndroidCXX::android_os_MessageQueue_IdleHandler const& arg0) ;
	virtual void  removeIdleHandler(AndroidCXX::android_os_MessageQueue_IdleHandler const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_MessageQueue