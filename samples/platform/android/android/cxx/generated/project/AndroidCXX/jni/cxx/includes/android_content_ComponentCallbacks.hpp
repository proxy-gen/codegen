/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			


#ifndef _android_content_ComponentCallbacks
#define _android_content_ComponentCallbacks




#include <android_content_res_Configuration.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_content_ComponentCallbacks
{
public:
	void onConfigurationChanged(android_content_res_Configuration& arg0);
	void onLowMemory();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ComponentCallbacks