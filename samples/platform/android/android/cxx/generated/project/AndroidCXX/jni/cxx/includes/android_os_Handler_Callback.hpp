/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#ifndef _android_os_Handler_Callback
#define _android_os_Handler_Callback
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

namespace AndroidCXX {

// Forward Declarations

class android_os_Message;

class android_os_Handler_Callback
{
public:

	android_os_Handler_Callback(const android_os_Handler_Callback& cc);
	android_os_Handler_Callback(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_os_Handler_Callback();
	// 
	// Default Destructor
	virtual ~android_os_Handler_Callback();
	// Functions
	 bool handleMessage(AndroidCXX::android_os_Message& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Handler_Callback