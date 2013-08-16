/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 		 
	
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
	
	
	
	
	
	
 		 
	
 		 
	
	
 		 
	
 		 
	
	
	
	
	
	
	
	
	
 		 
	
 	
	
 		 
	
 		 
	
	
	
	
 		 
 		 
 	
	
 		 
 	
	
 		 
 	
	
 	
	
 		 
	
 		 
	
 		 
 		 
 		 
	
 		 
 		 
	
	
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 






































































































// Generated Code 

#ifndef _android_content_Context
#define _android_content_Context
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

class android_content_Intent;

class android_content_ServiceConnection;

class java_lang_String;

class android_net_Uri;

class android_content_res_Configuration;


class android_view_Display;

class android_content_pm_ApplicationInfo;

class android_content_res_AssetManager;

class java_io_File;

class java_lang_ClassLoader;

class android_content_ContentResolver;

class android_os_Looper;

class android_content_pm_PackageManager;

class android_content_res_Resources;

class android_content_SharedPreferences;

class java_lang_Object;

class java_lang_CharSequence;

class android_content_res_Resources_Theme;

class android_graphics_drawable_Drawable;

class android_content_res_TypedArray;

class android_util_AttributeSet;

class java_io_FileInputStream;

class java_io_FileOutputStream;

class android_database_sqlite_SQLiteDatabase_CursorFactory;

class android_database_DatabaseErrorHandler;

class android_database_sqlite_SQLiteDatabase;

class android_content_ComponentCallbacks;

class android_content_BroadcastReceiver;

class android_content_IntentFilter;

class android_os_Handler;

class android_os_UserHandle;

class android_os_Bundle;

class android_graphics_Bitmap;

class java_io_InputStream;

class android_content_ComponentName;

class android_content_IntentSender;

class android_content_Context 
{
public:

	android_content_Context(const android_content_Context& cc);
	android_content_Context(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_Context();
	// Functions
	virtual bool  bindService(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_content_ServiceConnection const& arg1,int const& arg2) ;
	virtual int  checkCallingOrSelfPermission(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  checkCallingOrSelfUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1) ;
	virtual int  checkCallingPermission(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  checkCallingUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1) ;
	virtual int  checkPermission(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2) ;
	virtual int  checkUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual int  checkUriPermission(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,int const& arg3,int const& arg4,int const& arg5) ;
	virtual void  clearWallpaper() ;
	virtual AndroidCXX::android_content_Context * createConfigurationContext(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual AndroidCXX::android_content_Context * createDisplayContext(AndroidCXX::android_view_Display const& arg0) ;
	virtual AndroidCXX::android_content_Context * createPackageContext(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual std::vector<java_lang_String>  databaseList() ;
	virtual bool  deleteDatabase(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  deleteFile(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  enforceCallingOrSelfPermission(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  enforceCallingOrSelfUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual void  enforceCallingPermission(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  enforceCallingUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual void  enforcePermission(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_lang_String const& arg3) ;
	virtual void  enforceUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1,int const& arg2,int const& arg3,AndroidCXX::java_lang_String const& arg4) ;
	virtual void  enforceUriPermission(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,int const& arg3,int const& arg4,int const& arg5,AndroidCXX::java_lang_String const& arg6) ;
	virtual std::vector<java_lang_String>  fileList() ;
	virtual AndroidCXX::android_content_Context * getApplicationContext() ;
	virtual AndroidCXX::android_content_pm_ApplicationInfo * getApplicationInfo() ;
	virtual AndroidCXX::android_content_res_AssetManager * getAssets() ;
	virtual AndroidCXX::java_io_File * getCacheDir() ;
	virtual AndroidCXX::java_lang_ClassLoader * getClassLoader() ;
	virtual AndroidCXX::android_content_ContentResolver * getContentResolver() ;
	virtual AndroidCXX::java_io_File * getDatabasePath(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_io_File * getDir(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_io_File * getExternalCacheDir() ;
	virtual AndroidCXX::java_io_File * getExternalFilesDir(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_io_File * getFileStreamPath(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_io_File * getFilesDir() ;
	virtual AndroidCXX::android_os_Looper * getMainLooper() ;
	virtual AndroidCXX::java_io_File * getObbDir() ;
	virtual AndroidCXX::java_lang_String * getPackageCodePath() ;
	virtual AndroidCXX::android_content_pm_PackageManager * getPackageManager() ;
	virtual AndroidCXX::java_lang_String * getPackageName() ;
	virtual AndroidCXX::java_lang_String * getPackageResourcePath() ;
	virtual AndroidCXX::android_content_res_Resources * getResources() ;
	virtual AndroidCXX::android_content_SharedPreferences * getSharedPreferences(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_String * getString(int const& arg0,std::vector<java_lang_Object> const& arg1) ;
	virtual AndroidCXX::java_lang_String * getString(int const& arg0) ;
	virtual AndroidCXX::java_lang_Object * getSystemService(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * getText(int const& arg0) ;
	virtual AndroidCXX::android_content_res_Resources_Theme * getTheme() ;
	virtual int  getWallpaperDesiredMinimumHeight() ;
	virtual int  getWallpaperDesiredMinimumWidth() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getWallpaper() ;
	virtual void  grantUriPermission(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_net_Uri const& arg1,int const& arg2) ;
	virtual bool  isRestricted() ;
	virtual AndroidCXX::android_content_res_TypedArray * obtainStyledAttributes(std::vector<int> const& arg0) ;
	virtual AndroidCXX::android_content_res_TypedArray * obtainStyledAttributes(AndroidCXX::android_util_AttributeSet const& arg0,std::vector<int> const& arg1,int const& arg2,int const& arg3) ;
	virtual AndroidCXX::android_content_res_TypedArray * obtainStyledAttributes(AndroidCXX::android_util_AttributeSet const& arg0,std::vector<int> const& arg1) ;
	virtual AndroidCXX::android_content_res_TypedArray * obtainStyledAttributes(int const& arg0,std::vector<int> const& arg1) ;
	virtual AndroidCXX::java_io_FileInputStream * openFileInput(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_io_FileOutputStream * openFileOutput(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_database_sqlite_SQLiteDatabase * openOrCreateDatabase(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg2,AndroidCXX::android_database_DatabaseErrorHandler const& arg3) ;
	virtual AndroidCXX::android_database_sqlite_SQLiteDatabase * openOrCreateDatabase(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg2) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * peekWallpaper() ;
	virtual void  registerComponentCallbacks(AndroidCXX::android_content_ComponentCallbacks const& arg0) ;
	virtual AndroidCXX::android_content_Intent * registerReceiver(AndroidCXX::android_content_BroadcastReceiver const& arg0,AndroidCXX::android_content_IntentFilter const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_os_Handler const& arg3) ;
	virtual AndroidCXX::android_content_Intent * registerReceiver(AndroidCXX::android_content_BroadcastReceiver const& arg0,AndroidCXX::android_content_IntentFilter const& arg1) ;
	virtual void  removeStickyBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1) ;
	virtual void  removeStickyBroadcast(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  revokeUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1) ;
	virtual void  sendBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual void  sendBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1) ;
	virtual void  sendBroadcast(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  sendBroadcast(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  sendOrderedBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_content_BroadcastReceiver const& arg3,AndroidCXX::android_os_Handler const& arg4,int const& arg5,AndroidCXX::java_lang_String const& arg6,AndroidCXX::android_os_Bundle const& arg7) ;
	virtual void  sendOrderedBroadcast(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_content_BroadcastReceiver const& arg2,AndroidCXX::android_os_Handler const& arg3,int const& arg4,AndroidCXX::java_lang_String const& arg5,AndroidCXX::android_os_Bundle const& arg6) ;
	virtual void  sendOrderedBroadcast(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  sendStickyBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1) ;
	virtual void  sendStickyBroadcast(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  sendStickyOrderedBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1,AndroidCXX::android_content_BroadcastReceiver const& arg2,AndroidCXX::android_os_Handler const& arg3,int const& arg4,AndroidCXX::java_lang_String const& arg5,AndroidCXX::android_os_Bundle const& arg6) ;
	virtual void  sendStickyOrderedBroadcast(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_content_BroadcastReceiver const& arg1,AndroidCXX::android_os_Handler const& arg2,int const& arg3,AndroidCXX::java_lang_String const& arg4,AndroidCXX::android_os_Bundle const& arg5) ;
	virtual void  setTheme(int const& arg0) ;
	virtual void  setWallpaper(AndroidCXX::android_graphics_Bitmap const& arg0) ;
	virtual void  setWallpaper(AndroidCXX::java_io_InputStream const& arg0) ;
	virtual void  startActivities(std::vector<android_content_Intent> const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  startActivities(std::vector<android_content_Intent> const& arg0) ;
	virtual void  startActivity(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  startActivity(AndroidCXX::android_content_Intent const& arg0) ;
	virtual bool  startInstrumentation(AndroidCXX::android_content_ComponentName const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  startIntentSender(AndroidCXX::android_content_IntentSender const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2,int const& arg3,int const& arg4,AndroidCXX::android_os_Bundle const& arg5) ;
	virtual void  startIntentSender(AndroidCXX::android_content_IntentSender const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2,int const& arg3,int const& arg4) ;
	virtual AndroidCXX::android_content_ComponentName * startService(AndroidCXX::android_content_Intent const& arg0) ;
	virtual bool  stopService(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  unbindService(AndroidCXX::android_content_ServiceConnection const& arg0) ;
	virtual void  unregisterComponentCallbacks(AndroidCXX::android_content_ComponentCallbacks const& arg0) ;
	virtual void  unregisterReceiver(AndroidCXX::android_content_BroadcastReceiver const& arg0) ;

protected:
	android_content_Context();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_Context