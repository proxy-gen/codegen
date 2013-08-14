/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_os_IBinder_DeathRecipient
#define _android_os_IBinder_DeathRecipient
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

class android_os_IBinder_DeathRecipient : public java_lang_Object
{
public:

	android_os_IBinder_DeathRecipient(const android_os_IBinder_DeathRecipient& cc);
	android_os_IBinder_DeathRecipient(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_IBinder_DeathRecipient();
	// Functions
	virtual void  binderDied() ;

protected:
	android_os_IBinder_DeathRecipient();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_IBinder_DeathRecipient