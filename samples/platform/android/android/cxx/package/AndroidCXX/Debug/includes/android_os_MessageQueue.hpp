/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

	android_os_MessageQueue(const android_os_MessageQueue& cc);
	android_os_MessageQueue(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_MessageQueue();
	// Functions
	 void addIdleHandler(AndroidCXX::android_os_MessageQueue_IdleHandler const& arg0);
	 void removeIdleHandler(AndroidCXX::android_os_MessageQueue_IdleHandler const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_MessageQueue