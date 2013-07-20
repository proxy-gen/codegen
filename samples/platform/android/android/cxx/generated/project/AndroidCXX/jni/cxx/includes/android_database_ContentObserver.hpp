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

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_net_Uri;

class android_database_ContentObserver
{
public:
	 bool deliverSelfNotifications();
	 void onChange(bool& arg0,android_net_Uri& arg1);
	 void dispatchChange(bool& arg0,android_net_Uri& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_ContentObserver