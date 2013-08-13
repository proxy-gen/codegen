/*
 * Header (Instance CXX)
 * Author: codegen
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

// Forward Declarations

class android_os_CancellationSignal_OnCancelListener;

class android_os_CancellationSignal 
{
public:

	// Public ConstrucXXX
	android_os_CancellationSignal();
	android_os_CancellationSignal(const android_os_CancellationSignal& cc);
	android_os_CancellationSignal(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_CancellationSignal();
	// Functions
	virtual void  cancel() ;
	virtual bool  isCanceled() ;
	virtual void  throwIfCanceled() ;
	virtual void  setOnCancelListener(AndroidCXX::android_os_CancellationSignal_OnCancelListener const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_CancellationSignal