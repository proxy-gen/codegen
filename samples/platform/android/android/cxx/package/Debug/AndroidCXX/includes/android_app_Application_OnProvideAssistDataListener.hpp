/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#ifndef _android_app_Application_OnProvideAssistDataListener
#define _android_app_Application_OnProvideAssistDataListener
//
// Scroll Down 
//


#include <android_app_Activity.hpp>

#include <android_os_Bundle.hpp>

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

class android_app_Activity;

class android_os_Bundle;

class android_app_Application_OnProvideAssistDataListener
{
public:

	android_app_Application_OnProvideAssistDataListener(const android_app_Application_OnProvideAssistDataListener& cc);
	android_app_Application_OnProvideAssistDataListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_Application_OnProvideAssistDataListener();
	// Functions
	 void onProvideAssistData(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_os_Bundle const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Application_OnProvideAssistDataListener