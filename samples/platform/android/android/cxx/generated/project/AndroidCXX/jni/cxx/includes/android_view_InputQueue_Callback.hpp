/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 









// Generated Code 

#ifndef _android_view_InputQueue_Callback
#define _android_view_InputQueue_Callback
//
// Scroll Down 
//


#include <android_view_InputQueue.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_view_InputQueue;

class android_view_InputQueue_Callback
{
public:

	android_view_InputQueue_Callback(const android_view_InputQueue_Callback& cc);
	android_view_InputQueue_Callback(void * proxy);
	// Public Constructors
	android_view_InputQueue_Callback();
	// Default Destructor
	virtual ~android_view_InputQueue_Callback();
	// Functions
	 void onInputQueueCreated(AndroidCXX::android_view_InputQueue& arg0);
	 void onInputQueueDestroyed(AndroidCXX::android_view_InputQueue& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_InputQueue_Callback