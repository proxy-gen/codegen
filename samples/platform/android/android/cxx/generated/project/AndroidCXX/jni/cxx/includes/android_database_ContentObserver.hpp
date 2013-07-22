/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 


 		 











// Generated Code 

#ifndef _android_database_ContentObserver
#define _android_database_ContentObserver
//
// Scroll Down 
//


#include <android_net_Uri.hpp>

#include <android_os_Handler.hpp>

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

class android_net_Uri;

class android_os_Handler;

class android_database_ContentObserver
{
public:

	android_database_ContentObserver(const android_database_ContentObserver& cc);
	android_database_ContentObserver(void * proxy);
	// Public Constructors
	android_database_ContentObserver(AndroidCXX::android_os_Handler& arg0);
	android_database_ContentObserver();
	// Default Destructor
	virtual ~android_database_ContentObserver();
	// Functions
	 bool deliverSelfNotifications();
	 void onChange(bool& arg0);
	 void onChange(bool& arg0,AndroidCXX::android_net_Uri& arg1);
	 void dispatchChange(bool& arg0);
	 void dispatchChange(bool& arg0,AndroidCXX::android_net_Uri& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_ContentObserver