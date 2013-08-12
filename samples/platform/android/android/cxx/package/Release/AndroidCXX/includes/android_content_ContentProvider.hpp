/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_content_Context.hpp>

#include <android_net_Uri.hpp>

#include <java_lang_String.hpp>

#include <android_content_ContentValues.hpp>

#include <android_database_Cursor.hpp>

#include <android_os_CancellationSignal.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_io_PrintWriter.hpp>

#include <android_content_res_Configuration.hpp>

#include <java_util_ArrayList.hpp>

#include <android_content_ContentProviderResult.hpp>

#include <android_content_ContentProviderOperation.hpp>

#include <android_os_Bundle.hpp>

#include <android_os_ParcelFileDescriptor.hpp>

#include <android_content_res_AssetFileDescriptor.hpp>

#include <android_content_pm_PathPermission.hpp>

#include <java_lang_Object.hpp>

#include <android_content_ContentProvider_PipeDataWriter.hpp>

#include <android_content_pm_ProviderInfo.hpp>

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

class android_content_Context;

class android_net_Uri;

class java_lang_String;

class android_content_ContentValues;

class android_database_Cursor;

class android_os_CancellationSignal;

class java_io_FileDescriptor;

class java_io_PrintWriter;

class android_content_res_Configuration;

class java_util_ArrayList;

class android_content_ContentProviderResult;

class android_content_ContentProviderOperation;

class android_os_Bundle;

class android_os_ParcelFileDescriptor;

class android_content_res_AssetFileDescriptor;

class android_content_pm_PathPermission;

class java_lang_Object;

class android_content_ContentProvider_PipeDataWriter;

class android_content_pm_ProviderInfo;

class android_content_ContentProvider
{
public:

	android_content_ContentProvider(const android_content_ContentProvider& cc);
	android_content_ContentProvider(Proxy proxy);
	// Public Constructors
	android_content_ContentProvider();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_ContentProvider();
	// Functions
	 void shutdown();
	 AndroidCXX::android_content_Context getContext();
	 AndroidCXX::java_lang_String getType(AndroidCXX::android_net_Uri const& arg0);
	 int _delete(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<java_lang_String> const& arg2);
	 AndroidCXX::android_net_Uri insert(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::android_content_ContentValues const& arg1);
	 AndroidCXX::android_database_Cursor query(AndroidCXX::android_net_Uri const& arg0,std::vector<java_lang_String> const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<java_lang_String> const& arg3,AndroidCXX::java_lang_String const& arg4);
	 AndroidCXX::android_database_Cursor query(AndroidCXX::android_net_Uri const& arg0,std::vector<java_lang_String> const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<java_lang_String> const& arg3,AndroidCXX::java_lang_String const& arg4,AndroidCXX::android_os_CancellationSignal const& arg5);
	 int update(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::android_content_ContentValues const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<java_lang_String> const& arg3);
	 void dump(AndroidCXX::java_io_FileDescriptor const& arg0,AndroidCXX::java_io_PrintWriter const& arg1,std::vector<java_lang_String> const& arg2);
	 bool onCreate();
	 void onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0);
	 void onLowMemory();
	 void onTrimMemory(int const& arg0);
	 std::vector<java_lang_String> getStreamTypes(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1);
	 std::vector<android_content_ContentProviderResult> applyBatch(AndroidCXX::java_util_ArrayList const& arg0);
	 int bulkInsert(AndroidCXX::android_net_Uri const& arg0,std::vector<android_content_ContentValues> const& arg1);
	 AndroidCXX::android_os_Bundle call(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	 AndroidCXX::android_os_ParcelFileDescriptor openFile(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1);
	 AndroidCXX::android_content_res_AssetFileDescriptor openAssetFile(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1);
	 AndroidCXX::java_lang_String getReadPermission();
	 AndroidCXX::java_lang_String getWritePermission();
	 std::vector<android_content_pm_PathPermission> getPathPermissions();
	 AndroidCXX::android_content_res_AssetFileDescriptor openTypedAssetFile(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	 AndroidCXX::android_os_ParcelFileDescriptor openPipeHelper(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2,AndroidCXX::java_lang_Object const& arg3,AndroidCXX::android_content_ContentProvider_PipeDataWriter const& arg4);
	 void attachInfo(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_content_pm_ProviderInfo const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentProvider