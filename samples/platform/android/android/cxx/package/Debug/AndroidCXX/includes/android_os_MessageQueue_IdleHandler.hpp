/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_os_MessageQueue_IdleHandler
#define _android_os_MessageQueue_IdleHandler
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

class android_os_MessageQueue_IdleHandler : public AndroidCXX::java_lang_Object
{
public:

	android_os_MessageQueue_IdleHandler(const android_os_MessageQueue_IdleHandler& cc);
	android_os_MessageQueue_IdleHandler(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_os_MessageQueue_IdleHandler();
	// Functions
	virtual bool  queueIdle() ;

protected:
	android_os_MessageQueue_IdleHandler();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_MessageQueue_IdleHandler