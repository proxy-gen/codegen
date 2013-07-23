/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 









// Generated Code 

#ifndef _android_content_ComponentCallbacks
#define _android_content_ComponentCallbacks
//
// Scroll Down 
//


#include <android_content_res_Configuration.hpp>

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

class android_content_res_Configuration;

class android_content_ComponentCallbacks
{
public:

	android_content_ComponentCallbacks(const android_content_ComponentCallbacks& cc);
	android_content_ComponentCallbacks(void * proxy);
	// Public Constructors
	android_content_ComponentCallbacks();
	// Default Destructor
	virtual ~android_content_ComponentCallbacks();
	// Functions
	 void onConfigurationChanged(AndroidCXX::android_content_res_Configuration& arg0);
	 void onLowMemory();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ComponentCallbacks