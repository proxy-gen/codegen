/*
 * Header (Instance CXX)
 * Author: codegen
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

class java_lang_String;

class java_io_FileDescriptor;

class java_io_PrintWriter;

class android_support_v4_content_Loader;

class java_lang_Object;

class android_os_Bundle;

class android_support_v4_app_LoaderManager_LoaderCallbacks;

class android_support_v4_app_LoaderManager 
{
public:

	android_support_v4_app_LoaderManager(const android_support_v4_app_LoaderManager& cc);
	android_support_v4_app_LoaderManager(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_support_v4_app_LoaderManager();
	// Functions
	virtual void  destroyLoader(int const& arg0) ;
	virtual void  dump(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_FileDescriptor const& arg1,AndroidCXX::java_io_PrintWriter const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3) ;
	static void  enableDebugLogging(bool const& arg0) ;
	virtual AndroidCXX::android_support_v4_content_Loader * getLoader(int const& arg0) ;
	virtual bool  hasRunningLoaders() ;
	virtual AndroidCXX::android_support_v4_content_Loader * initLoader(int const& arg0,AndroidCXX::android_os_Bundle const& arg1,AndroidCXX::android_support_v4_app_LoaderManager_LoaderCallbacks const& arg2) ;
	virtual AndroidCXX::android_support_v4_content_Loader * restartLoader(int const& arg0,AndroidCXX::android_os_Bundle const& arg1,AndroidCXX::android_support_v4_app_LoaderManager_LoaderCallbacks const& arg2) ;

protected:
	android_support_v4_app_LoaderManager();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_LoaderManager