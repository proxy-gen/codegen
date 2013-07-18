/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
 			
 			
		
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
		
 			
 			
		
 			
 			
		
 			
 			
		
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
		
 			
 			
		
 			
 			
		
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
		
		
 			
 			
 			
		
 			


#ifndef _android_content_ContentResolver
#define _android_content_ContentResolver









































#include <java_util_ArrayList.hpp>
#include <java_util_List.hpp>
#include <android_content_SyncStatusObserver.hpp>
#include <android_database_Cursor.hpp>
#include <android_os_Bundle.hpp>
#include <java_io_OutputStream.hpp>
#include <android_content_ContentValues.hpp>
#include <android_content_res_AssetFileDescriptor.hpp>
#include <android_os_CancellationSignal.hpp>
#include <java_lang_Object.hpp>
#include <android_content_ContentProviderClient.hpp>
#include <android_os_ParcelFileDescriptor.hpp>
#include <android_accounts_Account.hpp>
#include <java_io_InputStream.hpp>
#include <android_database_ContentObserver.hpp>
#include <android_net_Uri.hpp>
#include <android_content_SyncInfo.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_content_ContentResolver
{
public:
 java_lang_String getType(android_net_Uri& arg0);
 int delete(android_net_Uri& arg0,java_lang_String& arg1,std::vector<long>& arg2);
 android_net_Uri insert(android_net_Uri& arg0,android_content_ContentValues& arg1);
 android_database_Cursor query(android_net_Uri& arg0,std::vector<long>& arg1,java_lang_String& arg2,android_os_CancellationSignal& arg3);
 int update(android_net_Uri& arg0,android_content_ContentValues& arg1,java_lang_String& arg2,std::vector<long>& arg3);
 std::vector<long> getStreamTypes(android_net_Uri& arg0,java_lang_String& arg1);
 java_io_InputStream openInputStream(android_net_Uri& arg0);
 java_io_OutputStream openOutputStream(android_net_Uri& arg0,java_lang_String& arg1);
 android_os_ParcelFileDescriptor openFileDescriptor(android_net_Uri& arg0,java_lang_String& arg1);
 android_content_res_AssetFileDescriptor openAssetFileDescriptor(android_net_Uri& arg0,java_lang_String& arg1);
 android_content_res_AssetFileDescriptor openTypedAssetFileDescriptor(android_net_Uri& arg0,java_lang_String& arg1,android_os_Bundle& arg2);
 std::vector<long> applyBatch(java_lang_String& arg0,java_util_ArrayList& arg1);
 int bulkInsert(android_net_Uri& arg0,std::vector<long>& arg1);
 android_os_Bundle call(android_net_Uri& arg0,java_lang_String& arg1,android_os_Bundle& arg2);
 android_content_ContentProviderClient acquireContentProviderClient(android_net_Uri& arg0,java_lang_String& arg1);
 android_content_ContentProviderClient acquireUnstableContentProviderClient(android_net_Uri& arg0,java_lang_String& arg1);
 void registerContentObserver(android_net_Uri& arg0,bool& arg1,android_database_ContentObserver& arg2);
 void unregisterContentObserver(android_database_ContentObserver& arg0);
 void notifyChange(android_net_Uri& arg0,android_database_ContentObserver& arg1,bool& arg2);
 void startSync(android_net_Uri& arg0,android_os_Bundle& arg1);
static void requestSync(android_accounts_Account& arg0,java_lang_String& arg1,android_os_Bundle& arg2);
static void validateSyncExtrasBundle(android_os_Bundle& arg0);
static void cancelSync(android_net_Uri& arg0,android_accounts_Account& arg1,java_lang_String& arg2);
static std::vector<long> getSyncAdapterTypes();
static bool getSyncAutomatically(android_accounts_Account& arg0,java_lang_String& arg1);
static void setSyncAutomatically(android_accounts_Account& arg0,java_lang_String& arg1,bool& arg2);
static void addPeriodicSync(android_accounts_Account& arg0,java_lang_String& arg1,android_os_Bundle& arg2,long& arg3);
static void removePeriodicSync(android_accounts_Account& arg0,java_lang_String& arg1,android_os_Bundle& arg2);
static java_util_List getPeriodicSyncs(android_accounts_Account& arg0,java_lang_String& arg1);
static int getIsSyncable(android_accounts_Account& arg0,java_lang_String& arg1);
static void setIsSyncable(android_accounts_Account& arg0,java_lang_String& arg1,int& arg2);
static bool getMasterSyncAutomatically();
static void setMasterSyncAutomatically(bool& arg0);
static bool isSyncActive(android_accounts_Account& arg0,java_lang_String& arg1);
static android_content_SyncInfo getCurrentSync();
static java_util_List getCurrentSyncs();
static bool isSyncPending(android_accounts_Account& arg0,java_lang_String& arg1);
static java_lang_Object addStatusChangeListener(int& arg0,android_content_SyncStatusObserver& arg1);
static void removeStatusChangeListener(java_lang_Object& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentResolver