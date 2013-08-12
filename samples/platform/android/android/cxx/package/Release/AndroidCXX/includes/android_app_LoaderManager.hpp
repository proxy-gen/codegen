/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 	
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 	
	
 	
 		 
 		 
 		 
 		 
 	
	
 	
 		 
 		 














// Generated Code 

#ifndef _android_app_LoaderManager
#define _android_app_LoaderManager
//
// Scroll Down 
//


#include <android_content_Loader.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_io_PrintWriter.hpp>

#include <android_os_Bundle.hpp>

#include <android_app_LoaderManager_LoaderCallbacks.hpp>

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

class android_content_Loader;

class java_lang_Object;

class java_lang_String;

class java_io_FileDescriptor;

class java_io_PrintWriter;

class android_os_Bundle;

class android_app_LoaderManager_LoaderCallbacks;

class android_app_LoaderManager
{
public:

	android_app_LoaderManager(const android_app_LoaderManager& cc);
	android_app_LoaderManager(Proxy proxy);
	// Public Constructors
	android_app_LoaderManager();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_LoaderManager();
	// Functions
	 AndroidCXX::android_content_Loader getLoader(int const& arg0);
	 void dump(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_FileDescriptor const& arg1,AndroidCXX::java_io_PrintWriter const& arg2,std::vector<java_lang_String> const& arg3);
	 AndroidCXX::android_content_Loader initLoader(int const& arg0,AndroidCXX::android_os_Bundle const& arg1,AndroidCXX::android_app_LoaderManager_LoaderCallbacks const& arg2);
	 AndroidCXX::android_content_Loader restartLoader(int const& arg0,AndroidCXX::android_os_Bundle const& arg1,AndroidCXX::android_app_LoaderManager_LoaderCallbacks const& arg2);
	 void destroyLoader(int const& arg0);
	static void enableDebugLogging(bool const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_LoaderManager