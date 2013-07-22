/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 	
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 










// Generated Code 

#ifndef _android_support_v4_app_LoaderManager_LoaderCallbacks
#define _android_support_v4_app_LoaderManager_LoaderCallbacks
//
// Scroll Down 
//


#include <android_os_Bundle.hpp>

#include <android_support_v4_content_Loader.hpp>

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

class android_os_Bundle;

class android_support_v4_content_Loader;

class java_lang_Object;

class android_support_v4_app_LoaderManager_LoaderCallbacks
{
public:

	android_support_v4_app_LoaderManager_LoaderCallbacks(const android_support_v4_app_LoaderManager_LoaderCallbacks& cc);
	android_support_v4_app_LoaderManager_LoaderCallbacks(void * proxy);
	// Public Constructors
	android_support_v4_app_LoaderManager_LoaderCallbacks();
	// Default Destructor
	virtual ~android_support_v4_app_LoaderManager_LoaderCallbacks();
	// Functions
	 AndroidCXX::android_support_v4_content_Loader onCreateLoader(int& arg0,AndroidCXX::android_os_Bundle& arg1);
	 void onLoadFinished(AndroidCXX::android_support_v4_content_Loader& arg0,AndroidCXX::java_lang_Object& arg1);
	 void onLoaderReset(AndroidCXX::android_support_v4_content_Loader& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_LoaderManager_LoaderCallbacks