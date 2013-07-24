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
	android_content_ContentProvider(void * proxy);
	// Public Constructors
	android_content_ContentProvider();
	// TODO: remove
	// 
	// Default Destructor
	virtual ~android_content_ContentProvider();
	// Functions
	 void shutdown();
	 AndroidCXX::android_content_Context getContext();
	 AndroidCXX::java_lang_String getType(AndroidCXX::android_net_Uri& arg0);
	 int _delete(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1,std::vector<AndroidCXX::java_lang_String >& arg2);
	 AndroidCXX::android_net_Uri insert(AndroidCXX::android_net_Uri& arg0,AndroidCXX::android_content_ContentValues& arg1);
	 AndroidCXX::android_database_Cursor query(AndroidCXX::android_net_Uri& arg0,std::vector<AndroidCXX::java_lang_String >& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3,AndroidCXX::java_lang_String& arg4);
	 AndroidCXX::android_database_Cursor query(AndroidCXX::android_net_Uri& arg0,std::vector<AndroidCXX::java_lang_String >& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3,AndroidCXX::java_lang_String& arg4,AndroidCXX::android_os_CancellationSignal& arg5);
	 int update(AndroidCXX::android_net_Uri& arg0,AndroidCXX::android_content_ContentValues& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3);
	 bool onCreate();
	 void onConfigurationChanged(AndroidCXX::android_content_res_Configuration& arg0);
	 void onLowMemory();
	 void onTrimMemory(int& arg0);
	 std::vector<AndroidCXX::java_lang_String > getStreamTypes(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1);
	 std::vector<AndroidCXX::android_content_ContentProviderResult > applyBatch(AndroidCXX::java_util_ArrayList& arg0);
	 int bulkInsert(AndroidCXX::android_net_Uri& arg0,std::vector<AndroidCXX::android_content_ContentValues >& arg1);
	 AndroidCXX::android_os_Bundle call(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2);
	 AndroidCXX::android_os_ParcelFileDescriptor openFile(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_content_res_AssetFileDescriptor openAssetFile(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::java_lang_String getReadPermission();
	 AndroidCXX::java_lang_String getWritePermission();
	 std::vector<AndroidCXX::android_content_pm_PathPermission > getPathPermissions();
	 AndroidCXX::android_content_res_AssetFileDescriptor openTypedAssetFile(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2);
	 AndroidCXX::android_os_ParcelFileDescriptor openPipeHelper(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2,AndroidCXX::java_lang_Object& arg3,AndroidCXX::android_content_ContentProvider_PipeDataWriter& arg4);
	 void attachInfo(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_content_pm_ProviderInfo& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentProvider