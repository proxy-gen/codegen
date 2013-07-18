/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
 			


#ifndef _android_support_v4_app_LoaderManager_LoaderCallbacks
#define _android_support_v4_app_LoaderManager_LoaderCallbacks





#include <android_support_v4_content_Loader.hpp>
#include <java_lang_Object.hpp>
#include <android_os_Bundle.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_support_v4_app_LoaderManager_LoaderCallbacks
{
public:
	android_support_v4_content_Loader onCreateLoader(int& arg0,android_os_Bundle& arg1);
	void onLoadFinished(android_support_v4_content_Loader& arg0,java_lang_Object& arg1);
	void onLoaderReset(android_support_v4_content_Loader& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_LoaderManager_LoaderCallbacks