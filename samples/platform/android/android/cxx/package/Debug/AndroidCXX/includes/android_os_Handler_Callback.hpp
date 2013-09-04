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

class android_os_Message;

class android_os_Handler_Callback : public AndroidCXX::java_lang_Object
{
public:

	android_os_Handler_Callback(const android_os_Handler_Callback& cc);
	android_os_Handler_Callback(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_os_Handler_Callback();
	// Functions
	virtual bool  handleMessage(AndroidCXX::android_os_Message const& arg0) ;

protected:
	android_os_Handler_Callback();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Handler_Callback