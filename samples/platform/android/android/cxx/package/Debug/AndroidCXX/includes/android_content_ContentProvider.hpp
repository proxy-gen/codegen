/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 	
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
	
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
	
 	
 		 
	
 		 
 		 
 	
 		 
 		 
	
	
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 	
	
 		 
 		 
 		 
 		 
	
 		 
 	
 		 
 	
 		 
 		 
	
 		 
 		 
 		 
 	
 		 
 	
 		 
	
 		 
 		 
 		 
 		 
 		 
 	
 		 

































// Generated Code 

#ifndef _android_content_ContentProvider
#define _android_content_ContentProvider
//
// Scroll Down 
//



#include <android_content_ComponentCallbacks2.hpp>

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

class java_util_ArrayList;

class android_content_ContentProviderResult;

class android_content_ContentProviderOperation;

class android_content_Context;

class android_content_pm_ProviderInfo;

class android_net_Uri;

class android_content_ContentValues;

class java_lang_String;

class android_os_Bundle;

class java_io_FileDescriptor;

class java_io_PrintWriter;

class android_content_pm_PathPermission;

class android_content_res_Configuration;

class android_content_res_AssetFileDescriptor;

class android_os_ParcelFileDescriptor;

class java_lang_Object;

class android_content_ContentProvider_PipeDataWriter;

class android_os_CancellationSignal;

class android_database_Cursor;

class android_content_ContentProvider : public AndroidCXX::android_content_ComponentCallbacks2
{
public:

	android_content_ContentProvider(const android_content_ContentProvider& cc);
	android_content_ContentProvider(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_ContentProvider();
	// Functions
	virtual std::vector<AndroidCXX::android_content_ContentProviderResult>  applyBatch(AndroidCXX::java_util_ArrayList const& arg0) ;
	virtual void  attachInfo(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_content_pm_ProviderInfo const& arg1) ;
	virtual int  bulkInsert(AndroidCXX::android_net_Uri const& arg0,std::vector<AndroidCXX::android_content_ContentValues> const& arg1) ;
	virtual AndroidCXX::android_os_Bundle * call(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual int  _delete(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<AndroidCXX::java_lang_String> const& arg2) ;
	virtual void  dump(AndroidCXX::java_io_FileDescriptor const& arg0,AndroidCXX::java_io_PrintWriter const& arg1,std::vector<AndroidCXX::java_lang_String> const& arg2) ;
	virtual AndroidCXX::android_content_Context * getContext() ;
	virtual std::vector<AndroidCXX::android_content_pm_PathPermission>  getPathPermissions() ;
	virtual AndroidCXX::java_lang_String * getReadPermission() ;
	virtual std::vector<AndroidCXX::java_lang_String>  getStreamTypes(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_lang_String * getType(AndroidCXX::android_net_Uri const& arg0) ;
	virtual AndroidCXX::java_lang_String * getWritePermission() ;
	virtual AndroidCXX::android_net_Uri * insert(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::android_content_ContentValues const& arg1) ;
	virtual void  onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual bool  onCreate() ;
	virtual void  onLowMemory() ;
	virtual void  onTrimMemory(int const& arg0) ;
	virtual AndroidCXX::android_content_res_AssetFileDescriptor * openAssetFile(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::android_os_ParcelFileDescriptor * openFile(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::android_os_ParcelFileDescriptor * openPipeHelper(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2,AndroidCXX::java_lang_Object const& arg3,AndroidCXX::android_content_ContentProvider_PipeDataWriter const& arg4) ;
	virtual AndroidCXX::android_content_res_AssetFileDescriptor * openTypedAssetFile(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual AndroidCXX::android_database_Cursor * query(AndroidCXX::android_net_Uri const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3,AndroidCXX::java_lang_String const& arg4,AndroidCXX::android_os_CancellationSignal const& arg5) ;
	virtual AndroidCXX::android_database_Cursor * query(AndroidCXX::android_net_Uri const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3,AndroidCXX::java_lang_String const& arg4) ;
	virtual void  shutdown() ;
	virtual int  update(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::android_content_ContentValues const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3) ;

protected:
	android_content_ContentProvider();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentProvider