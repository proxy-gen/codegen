/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//




 		 
 		 
 		 
 		 
 		 
 		 
 		 












// Generated Code 

#ifndef _android_os_Handler
#define _android_os_Handler
//
// Scroll Down 
//


#include <android_os_Handler_Callback.hpp>

#include <android_os_Looper.hpp>


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

class android_os_Handler_Callback;

class android_os_Looper;

class android_os_Handler : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_os_Handler(Proxy * aProxy = new Proxy());
	android_os_Handler(AndroidCXX::android_os_Handler_Callback const& arg0,Proxy * aProxy = new Proxy());
	android_os_Handler(AndroidCXX::android_os_Handler_Callback const& arg0,bool const& arg1,Proxy * aProxy = new Proxy());
	android_os_Handler(AndroidCXX::android_os_Looper const& arg0,Proxy * aProxy = new Proxy());
	android_os_Handler(AndroidCXX::android_os_Looper const& arg0,AndroidCXX::android_os_Handler_Callback const& arg1,Proxy * aProxy = new Proxy());
	android_os_Handler(AndroidCXX::android_os_Looper const& arg0,AndroidCXX::android_os_Handler_Callback const& arg1,bool const& arg2,Proxy * aProxy = new Proxy());
	android_os_Handler(bool const& arg0,Proxy * aProxy = new Proxy());
	android_os_Handler(const android_os_Handler& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_os_Handler();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Handler