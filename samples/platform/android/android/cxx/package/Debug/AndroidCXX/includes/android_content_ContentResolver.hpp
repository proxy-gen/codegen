/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_content_ContentProviderClient;

class java_lang_String;

class android_accounts_Account;

class android_os_Bundle;

class android_content_SyncStatusObserver;

class java_lang_Object;

class java_util_ArrayList;

class android_content_ContentProviderResult;

class android_content_ContentProviderOperation;

class android_content_ContentValues;

class android_content_SyncInfo;

class java_util_List;

class android_content_PeriodicSync;

class android_content_SyncAdapterType;

class android_database_ContentObserver;

class android_content_res_AssetFileDescriptor;

class android_os_ParcelFileDescriptor;

class java_io_InputStream;

class java_io_OutputStream;

class android_os_CancellationSignal;

class android_database_Cursor;

class android_content_Context;

class android_content_ContentResolver 
{
public:

	android_content_ContentResolver(const android_content_ContentResolver& cc);
	android_content_ContentResolver(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_ContentResolver();
	// Functions
	virtual AndroidCXX::android_content_ContentProviderClient * acquireContentProviderClient(AndroidCXX::android_net_Uri const& arg0) ;
	virtual AndroidCXX::android_content_ContentProviderClient * acquireContentProviderClient(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_ContentProviderClient * acquireUnstableContentProviderClient(AndroidCXX::android_net_Uri const& arg0) ;
	virtual AndroidCXX::android_content_ContentProviderClient * acquireUnstableContentProviderClient(AndroidCXX::java_lang_String const& arg0) ;
	static void  addPeriodicSync(AndroidCXX::android_accounts_Account const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2,long const& arg3) ;
	static AndroidCXX::java_lang_Object * addStatusChangeListener(int const& arg0,AndroidCXX::android_content_SyncStatusObserver const& arg1) ;
	virtual std::vector<AndroidCXX::android_content_ContentProviderResult>  applyBatch(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_ArrayList const& arg1) ;
	virtual int  bulkInsert(AndroidCXX::android_net_Uri const& arg0,std::vector<AndroidCXX::android_content_ContentValues> const& arg1) ;
	virtual AndroidCXX::android_os_Bundle * call(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_os_Bundle const& arg3) ;
	static void  cancelSync(AndroidCXX::android_accounts_Account const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  cancelSync(AndroidCXX::android_net_Uri const& arg0) ;
	virtual int  _delete(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<AndroidCXX::java_lang_String> const& arg2) ;
	static AndroidCXX::android_content_SyncInfo * getCurrentSync() ;
	static AndroidCXX::java_util_List * getCurrentSyncs() ;
	static int  getIsSyncable(AndroidCXX::android_accounts_Account const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	static bool  getMasterSyncAutomatically() ;
	static AndroidCXX::java_util_List * getPeriodicSyncs(AndroidCXX::android_accounts_Account const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual std::vector<AndroidCXX::java_lang_String>  getStreamTypes(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	static std::vector<AndroidCXX::android_content_SyncAdapterType>  getSyncAdapterTypes() ;
	static bool  getSyncAutomatically(AndroidCXX::android_accounts_Account const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_lang_String * getType(AndroidCXX::android_net_Uri const& arg0) ;
	virtual AndroidCXX::android_net_Uri * insert(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::android_content_ContentValues const& arg1) ;
	static bool  isSyncActive(AndroidCXX::android_accounts_Account const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	static bool  isSyncPending(AndroidCXX::android_accounts_Account const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  notifyChange(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::android_database_ContentObserver const& arg1,bool const& arg2) ;
	virtual void  notifyChange(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::android_database_ContentObserver const& arg1) ;
	virtual AndroidCXX::android_content_res_AssetFileDescriptor * openAssetFileDescriptor(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::android_os_ParcelFileDescriptor * openFileDescriptor(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_io_InputStream * openInputStream(AndroidCXX::android_net_Uri const& arg0) ;
	virtual AndroidCXX::java_io_OutputStream * openOutputStream(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_io_OutputStream * openOutputStream(AndroidCXX::android_net_Uri const& arg0) ;
	virtual AndroidCXX::android_content_res_AssetFileDescriptor * openTypedAssetFileDescriptor(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual AndroidCXX::android_database_Cursor * query(AndroidCXX::android_net_Uri const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3,AndroidCXX::java_lang_String const& arg4,AndroidCXX::android_os_CancellationSignal const& arg5) ;
	virtual AndroidCXX::android_database_Cursor * query(AndroidCXX::android_net_Uri const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3,AndroidCXX::java_lang_String const& arg4) ;
	virtual void  registerContentObserver(AndroidCXX::android_net_Uri const& arg0,bool const& arg1,AndroidCXX::android_database_ContentObserver const& arg2) ;
	static void  removePeriodicSync(AndroidCXX::android_accounts_Account const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	static void  removeStatusChangeListener(AndroidCXX::java_lang_Object const& arg0) ;
	static void  requestSync(AndroidCXX::android_accounts_Account const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	static void  setIsSyncable(AndroidCXX::android_accounts_Account const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2) ;
	static void  setMasterSyncAutomatically(bool const& arg0) ;
	static void  setSyncAutomatically(AndroidCXX::android_accounts_Account const& arg0,AndroidCXX::java_lang_String const& arg1,bool const& arg2) ;
	virtual void  startSync(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  unregisterContentObserver(AndroidCXX::android_database_ContentObserver const& arg0) ;
	virtual int  update(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::android_content_ContentValues const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3) ;
	static void  validateSyncExtrasBundle(AndroidCXX::android_os_Bundle const& arg0) ;

protected:
	android_content_ContentResolver();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentResolver