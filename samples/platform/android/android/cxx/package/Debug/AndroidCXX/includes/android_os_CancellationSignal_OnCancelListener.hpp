/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_os_CancellationSignal_OnCancelListener
#define _android_os_CancellationSignal_OnCancelListener
//
// Scroll Down 
//



#include <java_lang_Object.hpp>

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

class android_os_CancellationSignal_OnCancelListener : public java_lang_Object
{
public:

	android_os_CancellationSignal_OnCancelListener(const android_os_CancellationSignal_OnCancelListener& cc);
	android_os_CancellationSignal_OnCancelListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_CancellationSignal_OnCancelListener();
	// Functions
	virtual void  onCancel() ;

protected:
	android_os_CancellationSignal_OnCancelListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_CancellationSignal_OnCancelListener