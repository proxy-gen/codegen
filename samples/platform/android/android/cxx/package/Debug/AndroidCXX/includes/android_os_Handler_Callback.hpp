/*
 * Header (Instance CXX)
 * Author: codegen
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
	android_os_Handler_Callback(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_Handler_Callback();
	// Functions
	virtual bool  handleMessage(AndroidCXX::android_os_Message const& arg0) ;

protected:
	android_os_Handler_Callback();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Handler_Callback