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

#include <android_os_CancellationSignal.hpp>

#include <android_database_Cursor.hpp>

#include <android_content_res_Configuration.hpp>

#include <java_util_ArrayList.hpp>

#include <android_os_Bundle.hpp>

#include <android_os_ParcelFileDescriptor.hpp>

#include <android_content_res_AssetFileDescriptor.hpp>

#include <java_lang_Object.hpp>

#include <android_content_ContentProvider_PipeDataWriter.hpp>

#include <android_content_pm_ProviderInfo.hpp>

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

class android_content_Context;

class android_net_Uri;

class java_lang_String;

class android_content_ContentValues;

class android_os_CancellationSignal;

class android_database_Cursor;

class android_content_res_Configuration;

class java_util_ArrayList;

class android_os_Bundle;

class android_os_ParcelFileDescriptor;

class android_content_res_AssetFileDescriptor;

class java_lang_Object;

class android_content_ContentProvider_PipeDataWriter;

class android_content_pm_ProviderInfo;

class android_content_ContentProvider
{
public:
 void shutdown();
 android_content_Context getContext();
 java_lang_String getType(android_net_Uri& arg0);
 int _delete(android_net_Uri& arg0,java_lang_String& arg1,std::vector<long>& arg2);
 android_net_Uri insert(android_net_Uri& arg0,android_content_ContentValues& arg1);
 android_database_Cursor query(android_net_Uri& arg0,std::vector<long>& arg1,java_lang_String& arg2,android_os_CancellationSignal& arg3);
 int update(android_net_Uri& arg0,android_content_ContentValues& arg1,java_lang_String& arg2,std::vector<long>& arg3);
 bool onCreate();
 void onConfigurationChanged(android_content_res_Configuration& arg0);
 void onLowMemory();
 void onTrimMemory(int& arg0);
 std::vector<long> getStreamTypes(android_net_Uri& arg0,java_lang_String& arg1);
 std::vector<long> applyBatch(java_util_ArrayList& arg0);
 int bulkInsert(android_net_Uri& arg0,std::vector<long>& arg1);
 android_os_Bundle call(java_lang_String& arg0,android_os_Bundle& arg1);
 android_os_ParcelFileDescriptor openFile(android_net_Uri& arg0,java_lang_String& arg1);
 android_content_res_AssetFileDescriptor openAssetFile(android_net_Uri& arg0,java_lang_String& arg1);
 java_lang_String getReadPermission();
 java_lang_String getWritePermission();
 std::vector<long> getPathPermissions();
 android_content_res_AssetFileDescriptor openTypedAssetFile(android_net_Uri& arg0,java_lang_String& arg1,android_os_Bundle& arg2);
 android_os_ParcelFileDescriptor openPipeHelper(android_net_Uri& arg0,java_lang_String& arg1,android_os_Bundle& arg2,java_lang_Object& arg3,android_content_ContentProvider_PipeDataWriter& arg4);
 void attachInfo(android_content_Context& arg0,android_content_pm_ProviderInfo& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentProvider