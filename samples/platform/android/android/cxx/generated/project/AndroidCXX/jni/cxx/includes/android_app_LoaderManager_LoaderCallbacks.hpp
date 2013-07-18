/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
 			

// Generated Code 

#ifndef _android_app_LoaderManager_LoaderCallbacks
#define _android_app_LoaderManager_LoaderCallbacks
//
// Scroll Down 
//






#include <android_os_Bundle.hpp>

#include <android_content_Loader.hpp>

#include <java_lang_Object.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_os_Bundle;

class android_content_Loader;

class java_lang_Object;

class android_app_LoaderManager_LoaderCallbacks
{
public:
 android_content_Loader onCreateLoader(int& arg0,android_os_Bundle& arg1);
 void onLoadFinished(android_content_Loader& arg0,java_lang_Object& arg1);
 void onLoaderReset(android_content_Loader& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_LoaderManager_LoaderCallbacks