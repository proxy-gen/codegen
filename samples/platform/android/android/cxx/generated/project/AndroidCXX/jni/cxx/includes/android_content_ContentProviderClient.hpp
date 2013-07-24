/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
 		 
 	
 		 
 		 
 		 
	
 		 
 	
 		 
 	
 		 
 		 
	
 		 
 		 
 		 
 	
 		 
 	
 		 
	
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
	
 		 
 	
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
	






















// Generated Code 

#ifndef _android_content_ContentProviderClient
#define _android_content_ContentProviderClient
//
// Scroll Down 
//


#include <android_net_Uri.hpp>

#include <java_lang_String.hpp>

#include <android_content_ContentValues.hpp>

#include <android_os_CancellationSignal.hpp>

#include <android_database_Cursor.hpp>

#include <android_os_Bundle.hpp>

#include <android_content_res_AssetFileDescriptor.hpp>

#include <java_util_ArrayList.hpp>

#include <android_content_ContentProviderResult.hpp>

#include <android_content_ContentProviderOperation.hpp>

#include <android_os_ParcelFileDescriptor.hpp>

#include <android_content_ContentProvider.hpp>

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

class android_net_Uri;

class java_lang_String;

class android_content_ContentValues;

class android_os_CancellationSignal;

class android_database_Cursor;

class android_os_Bundle;

class android_content_res_AssetFileDescriptor;

class java_util_ArrayList;

class android_content_ContentProviderResult;

class android_content_ContentProviderOperation;

class android_os_ParcelFileDescriptor;

class android_content_ContentProvider;

class android_content_ContentProviderClient
{
public:

	android_content_ContentProviderClient(const android_content_ContentProviderClient& cc);
	android_content_ContentProviderClient(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_content_ContentProviderClient();
	// 
	// Default Destructor
	virtual ~android_content_ContentProviderClient();
	// Functions
	 AndroidCXX::java_lang_String getType(AndroidCXX::android_net_Uri& arg0);
	 int _delete(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1,std::vector<AndroidCXX::java_lang_String >& arg2);
	 AndroidCXX::android_net_Uri insert(AndroidCXX::android_net_Uri& arg0,AndroidCXX::android_content_ContentValues& arg1);
	 bool release();
	 AndroidCXX::android_database_Cursor query(AndroidCXX::android_net_Uri& arg0,std::vector<AndroidCXX::java_lang_String >& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3,AndroidCXX::java_lang_String& arg4,AndroidCXX::android_os_CancellationSignal& arg5);
	 AndroidCXX::android_database_Cursor query(AndroidCXX::android_net_Uri& arg0,std::vector<AndroidCXX::java_lang_String >& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3,AndroidCXX::java_lang_String& arg4);
	 int update(AndroidCXX::android_net_Uri& arg0,AndroidCXX::android_content_ContentValues& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3);
	 std::vector<AndroidCXX::java_lang_String > getStreamTypes(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_content_res_AssetFileDescriptor openTypedAssetFileDescriptor(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2);
	 std::vector<AndroidCXX::android_content_ContentProviderResult > applyBatch(AndroidCXX::java_util_ArrayList& arg0);
	 int bulkInsert(AndroidCXX::android_net_Uri& arg0,std::vector<AndroidCXX::android_content_ContentValues >& arg1);
	 AndroidCXX::android_os_Bundle call(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2);
	 AndroidCXX::android_os_ParcelFileDescriptor openFile(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_content_res_AssetFileDescriptor openAssetFile(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_content_ContentProvider getLocalContentProvider();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentProviderClient