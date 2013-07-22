/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 












// Generated Code 

#ifndef _android_os_CancellationSignal
#define _android_os_CancellationSignal
//
// Scroll Down 
//


#include <android_os_CancellationSignal_OnCancelListener.hpp>

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

// Forward Declarations

class android_os_CancellationSignal_OnCancelListener;

class android_os_CancellationSignal
{
public:

	android_os_CancellationSignal(const android_os_CancellationSignal& cc);
	android_os_CancellationSignal(void * proxy);
	// Public Constructors
	android_os_CancellationSignal();
	// Default Destructor
	virtual ~android_os_CancellationSignal();
	// Functions
	 void cancel();
	 bool isCanceled();
	 void throwIfCanceled();
	 void setOnCancelListener(AndroidCXX::android_os_CancellationSignal_OnCancelListener& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_CancellationSignal