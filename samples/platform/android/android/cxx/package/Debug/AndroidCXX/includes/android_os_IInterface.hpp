/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	








// Generated Code 

#ifndef _android_os_IInterface
#define _android_os_IInterface
//
// Scroll Down 
//


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

namespace AndroidCXX {

// Forward Declarations

class android_os_IBinder;

class android_os_IInterface
{
public:

	android_os_IInterface(const android_os_IInterface& cc);
	android_os_IInterface(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_IInterface();
	// Functions
	 AndroidCXX::android_os_IBinder asBinder();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_IInterface