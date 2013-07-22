/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 	
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 	
	
 	
 		 
 		 
 		 
 		 
 	
	
 	
 		 
 		 















// Generated Code 

#ifndef _android_support_v4_app_LoaderManager
#define _android_support_v4_app_LoaderManager
//
// Scroll Down 
//


#include <android_support_v4_content_Loader.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_io_PrintWriter.hpp>

#include <android_os_Bundle.hpp>

#include <android_support_v4_app_LoaderManager_LoaderCallbacks.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_support_v4_content_Loader;

class java_lang_Object;

class java_lang_String;

class java_io_FileDescriptor;

class java_io_PrintWriter;

class android_os_Bundle;

class android_support_v4_app_LoaderManager_LoaderCallbacks;

class android_support_v4_app_LoaderManager
{
public:

	android_support_v4_app_LoaderManager(const android_support_v4_app_LoaderManager& cc);
	android_support_v4_app_LoaderManager(void * proxy);
	// Public Constructors
	android_support_v4_app_LoaderManager();
	// Default Destructor
	virtual ~android_support_v4_app_LoaderManager();
	// Functions
	 AndroidCXX::android_support_v4_content_Loader getLoader(int& arg0);
	 void dump(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_io_FileDescriptor& arg1,AndroidCXX::java_io_PrintWriter& arg2,std::vector<java_lang_String >& arg3);
	 AndroidCXX::android_support_v4_content_Loader initLoader(int& arg0,AndroidCXX::android_os_Bundle& arg1,AndroidCXX::android_support_v4_app_LoaderManager_LoaderCallbacks& arg2);
	 AndroidCXX::android_support_v4_content_Loader restartLoader(int& arg0,AndroidCXX::android_os_Bundle& arg1,AndroidCXX::android_support_v4_app_LoaderManager_LoaderCallbacks& arg2);
	 void destroyLoader(int& arg0);
	static void enableDebugLogging(bool& arg0);
	 bool hasRunningLoaders();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_LoaderManager