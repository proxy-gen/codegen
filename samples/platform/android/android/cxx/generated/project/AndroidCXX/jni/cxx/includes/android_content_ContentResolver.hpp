/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
 		 
 	
 		 
 		 
 		 
	
 		 
 	
 		 
 	
 		 
 		 
	
 		 
 		 
 		 
 	
 		 
 	
 		 
	
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
	
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
 	
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
	
 	
 		 
 		 
 		 
 		 
	
 		 


 		 



















































// Generated Code 

#ifndef _android_content_ContentResolver
#define _android_content_ContentResolver
//
// Scroll Down 
//


#include <android_net_Uri.hpp>

#include <java_lang_String.hpp>

#include <android_content_ContentValues.hpp>

#include <android_os_CancellationSignal.hpp>

#include <android_database_Cursor.hpp>

#include <java_io_InputStream.hpp>

#include <java_io_OutputStream.hpp>

#include <android_os_ParcelFileDescriptor.hpp>

#include <android_content_res_AssetFileDescriptor.hpp>

#include <android_os_Bundle.hpp>

#include <java_util_ArrayList.hpp>

#include <android_content_ContentProviderResult.hpp>

#include <android_content_ContentProviderOperation.hpp>

#include <android_content_ContentProviderClient.hpp>

#include <android_database_ContentObserver.hpp>

#include <android_accounts_Account.hpp>

#include <android_content_SyncAdapterType.hpp>

#include <java_util_List.hpp>

#include <android_content_PeriodicSync.hpp>

#include <android_content_SyncInfo.hpp>

#include <android_content_SyncStatusObserver.hpp>

#include <java_lang_Object.hpp>

#include <android_content_Context.hpp>

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

class java_io_InputStream;

class java_io_OutputStream;

class android_os_ParcelFileDescriptor;

class android_content_res_AssetFileDescriptor;

class android_os_Bundle;

class java_util_ArrayList;

class android_content_ContentProviderResult;

class android_content_ContentProviderOperation;

class android_content_ContentProviderClient;

class android_database_ContentObserver;

class android_accounts_Account;

class android_content_SyncAdapterType;

class java_util_List;

class android_content_PeriodicSync;

class android_content_SyncInfo;

class android_content_SyncStatusObserver;

class java_lang_Object;

class android_content_Context;

class android_content_ContentResolver
{
public:

	android_content_ContentResolver(const android_content_ContentResolver& cc);
	android_content_ContentResolver(void * proxy);
	// Public Constructors
	android_content_ContentResolver(AndroidCXX::android_content_Context& arg0);
	// TODO: remove
	// 
	// android_content_ContentResolver();
	// 
	// Default Destructor
	virtual ~android_content_ContentResolver();
	// Functions
	 AndroidCXX::java_lang_String getType(AndroidCXX::android_net_Uri& arg0);
	 int _delete(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1,std::vector<AndroidCXX::java_lang_String >& arg2);
	 AndroidCXX::android_net_Uri insert(AndroidCXX::android_net_Uri& arg0,AndroidCXX::android_content_ContentValues& arg1);
	 AndroidCXX::android_database_Cursor query(AndroidCXX::android_net_Uri& arg0,std::vector<AndroidCXX::java_lang_String >& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3,AndroidCXX::java_lang_String& arg4,AndroidCXX::android_os_CancellationSignal& arg5);
	 AndroidCXX::android_database_Cursor query(AndroidCXX::android_net_Uri& arg0,std::vector<AndroidCXX::java_lang_String >& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3,AndroidCXX::java_lang_String& arg4);
	 int update(AndroidCXX::android_net_Uri& arg0,AndroidCXX::android_content_ContentValues& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3);
	 std::vector<AndroidCXX::java_lang_String > getStreamTypes(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::java_io_InputStream openInputStream(AndroidCXX::android_net_Uri& arg0);
	 AndroidCXX::java_io_OutputStream openOutputStream(AndroidCXX::android_net_Uri& arg0);
	 AndroidCXX::java_io_OutputStream openOutputStream(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_os_ParcelFileDescriptor openFileDescriptor(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_content_res_AssetFileDescriptor openAssetFileDescriptor(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_content_res_AssetFileDescriptor openTypedAssetFileDescriptor(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2);
	 std::vector<AndroidCXX::android_content_ContentProviderResult > applyBatch(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_util_ArrayList& arg1);
	 int bulkInsert(AndroidCXX::android_net_Uri& arg0,std::vector<AndroidCXX::android_content_ContentValues >& arg1);
	 AndroidCXX::android_os_Bundle call(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2,AndroidCXX::android_os_Bundle& arg3);
	 AndroidCXX::android_content_ContentProviderClient acquireContentProviderClient(AndroidCXX::android_net_Uri& arg0);
	 AndroidCXX::android_content_ContentProviderClient acquireContentProviderClient(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::android_content_ContentProviderClient acquireUnstableContentProviderClient(AndroidCXX::android_net_Uri& arg0);
	 AndroidCXX::android_content_ContentProviderClient acquireUnstableContentProviderClient(AndroidCXX::java_lang_String& arg0);
	 void registerContentObserver(AndroidCXX::android_net_Uri& arg0,bool& arg1,AndroidCXX::android_database_ContentObserver& arg2);
	 void unregisterContentObserver(AndroidCXX::android_database_ContentObserver& arg0);
	 void notifyChange(AndroidCXX::android_net_Uri& arg0,AndroidCXX::android_database_ContentObserver& arg1);
	 void notifyChange(AndroidCXX::android_net_Uri& arg0,AndroidCXX::android_database_ContentObserver& arg1,bool& arg2);
	 void startSync(AndroidCXX::android_net_Uri& arg0,AndroidCXX::android_os_Bundle& arg1);
	static void requestSync(AndroidCXX::android_accounts_Account& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2);
	static void validateSyncExtrasBundle(AndroidCXX::android_os_Bundle& arg0);
	 void cancelSync(AndroidCXX::android_net_Uri& arg0);
	static void cancelSync(AndroidCXX::android_accounts_Account& arg0,AndroidCXX::java_lang_String& arg1);
	static std::vector<AndroidCXX::android_content_SyncAdapterType > getSyncAdapterTypes();
	static bool getSyncAutomatically(AndroidCXX::android_accounts_Account& arg0,AndroidCXX::java_lang_String& arg1);
	static void setSyncAutomatically(AndroidCXX::android_accounts_Account& arg0,AndroidCXX::java_lang_String& arg1,bool& arg2);
	static void addPeriodicSync(AndroidCXX::android_accounts_Account& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2,long& arg3);
	static void removePeriodicSync(AndroidCXX::android_accounts_Account& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2);
	static AndroidCXX::java_util_List getPeriodicSyncs(AndroidCXX::android_accounts_Account& arg0,AndroidCXX::java_lang_String& arg1);
	static int getIsSyncable(AndroidCXX::android_accounts_Account& arg0,AndroidCXX::java_lang_String& arg1);
	static void setIsSyncable(AndroidCXX::android_accounts_Account& arg0,AndroidCXX::java_lang_String& arg1,int& arg2);
	static bool getMasterSyncAutomatically();
	static void setMasterSyncAutomatically(bool& arg0);
	static bool isSyncActive(AndroidCXX::android_accounts_Account& arg0,AndroidCXX::java_lang_String& arg1);
	static AndroidCXX::android_content_SyncInfo getCurrentSync();
	static AndroidCXX::java_util_List getCurrentSyncs();
	static bool isSyncPending(AndroidCXX::android_accounts_Account& arg0,AndroidCXX::java_lang_String& arg1);
	static AndroidCXX::java_lang_Object addStatusChangeListener(int& arg0,AndroidCXX::android_content_SyncStatusObserver& arg1);
	static void removeStatusChangeListener(AndroidCXX::java_lang_Object& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentResolver