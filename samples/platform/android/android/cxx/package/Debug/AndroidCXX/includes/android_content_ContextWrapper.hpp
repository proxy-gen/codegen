/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
	
	
 		 
 		 
 		 
	
	
	
	
	
	
	
	
	
	
 		 
	
 		 
	
 		 
	
 		 
 		 
	
 	
 		 
	
 		 
	
	
	
	
 		 
	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 	
 		 
	
	
 		 
 		 
 	
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 		 
	


 		 




























































































// Generated Code 

#ifndef _android_content_ContextWrapper
#define _android_content_ContextWrapper
//
// Scroll Down 
//


#include <java_lang_ClassLoader.hpp>

#include <java_lang_String.hpp>

#include <android_content_res_Resources.hpp>

#include <android_content_Intent.hpp>

#include <android_os_Bundle.hpp>

#include <android_content_Context.hpp>

#include <android_content_res_AssetManager.hpp>

#include <android_content_pm_PackageManager.hpp>

#include <android_content_ContentResolver.hpp>

#include <android_os_Looper.hpp>

#include <android_content_res_Resources_Theme.hpp>

#include <android_content_pm_ApplicationInfo.hpp>

#include <android_content_SharedPreferences.hpp>

#include <java_io_FileInputStream.hpp>

#include <java_io_FileOutputStream.hpp>

#include <java_io_File.hpp>

#include <android_database_sqlite_SQLiteDatabase_CursorFactory.hpp>

#include <android_database_DatabaseErrorHandler.hpp>

#include <android_database_sqlite_SQLiteDatabase.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_graphics_Bitmap.hpp>

#include <java_io_InputStream.hpp>

#include <android_content_IntentSender.hpp>

#include <android_content_BroadcastReceiver.hpp>

#include <android_os_Handler.hpp>

#include <android_os_UserHandle.hpp>

#include <android_content_IntentFilter.hpp>

#include <android_content_ComponentName.hpp>

#include <android_content_ServiceConnection.hpp>

#include <java_lang_Object.hpp>

#include <android_net_Uri.hpp>

#include <android_content_res_Configuration.hpp>

#include <android_view_Display.hpp>


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

class java_lang_ClassLoader;

class java_lang_String;

class android_content_res_Resources;

class android_content_Intent;

class android_os_Bundle;

class android_content_Context;

class android_content_res_AssetManager;

class android_content_pm_PackageManager;

class android_content_ContentResolver;

class android_os_Looper;

class android_content_res_Resources_Theme;

class android_content_pm_ApplicationInfo;

class android_content_SharedPreferences;

class java_io_FileInputStream;

class java_io_FileOutputStream;

class java_io_File;

class android_database_sqlite_SQLiteDatabase_CursorFactory;

class android_database_DatabaseErrorHandler;

class android_database_sqlite_SQLiteDatabase;

class android_graphics_drawable_Drawable;

class android_graphics_Bitmap;

class java_io_InputStream;

class android_content_IntentSender;

class android_content_BroadcastReceiver;

class android_os_Handler;

class android_os_UserHandle;

class android_content_IntentFilter;

class android_content_ComponentName;

class android_content_ServiceConnection;


class android_net_Uri;

class android_content_res_Configuration;

class android_view_Display;

class android_content_ContextWrapper : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_content_ContextWrapper(AndroidCXX::android_content_Context const& arg0);
	android_content_ContextWrapper(const android_content_ContextWrapper& cc);
	android_content_ContextWrapper(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_ContextWrapper();
	// Functions
	virtual AndroidCXX::java_lang_ClassLoader * getClassLoader() ;
	virtual int  checkPermission(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::android_content_res_Resources * getResources() ;
	virtual AndroidCXX::java_lang_String * getPackageName() ;
	virtual void  startActivity(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  startActivity(AndroidCXX::android_content_Intent const& arg0) ;
	virtual AndroidCXX::android_content_Context * getBaseContext() ;
	virtual AndroidCXX::android_content_res_AssetManager * getAssets() ;
	virtual AndroidCXX::android_content_pm_PackageManager * getPackageManager() ;
	virtual AndroidCXX::android_content_ContentResolver * getContentResolver() ;
	virtual AndroidCXX::android_os_Looper * getMainLooper() ;
	virtual AndroidCXX::android_content_Context * getApplicationContext() ;
	virtual void  setTheme(int const& arg0) ;
	virtual AndroidCXX::android_content_res_Resources_Theme * getTheme() ;
	virtual AndroidCXX::android_content_pm_ApplicationInfo * getApplicationInfo() ;
	virtual AndroidCXX::java_lang_String * getPackageResourcePath() ;
	virtual AndroidCXX::java_lang_String * getPackageCodePath() ;
	virtual AndroidCXX::android_content_SharedPreferences * getSharedPreferences(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_io_FileInputStream * openFileInput(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_io_FileOutputStream * openFileOutput(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual bool  deleteFile(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_io_File * getFileStreamPath(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<java_lang_String>  fileList() ;
	virtual AndroidCXX::java_io_File * getFilesDir() ;
	virtual AndroidCXX::java_io_File * getExternalFilesDir(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_io_File * getObbDir() ;
	virtual AndroidCXX::java_io_File * getCacheDir() ;
	virtual AndroidCXX::java_io_File * getExternalCacheDir() ;
	virtual AndroidCXX::java_io_File * getDir(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_database_sqlite_SQLiteDatabase * openOrCreateDatabase(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg2,AndroidCXX::android_database_DatabaseErrorHandler const& arg3) ;
	virtual AndroidCXX::android_database_sqlite_SQLiteDatabase * openOrCreateDatabase(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg2) ;
	virtual bool  deleteDatabase(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_io_File * getDatabasePath(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<java_lang_String>  databaseList() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getWallpaper() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * peekWallpaper() ;
	virtual int  getWallpaperDesiredMinimumWidth() ;
	virtual int  getWallpaperDesiredMinimumHeight() ;
	virtual void  setWallpaper(AndroidCXX::android_graphics_Bitmap const& arg0) ;
	virtual void  setWallpaper(AndroidCXX::java_io_InputStream const& arg0) ;
	virtual void  clearWallpaper() ;
	virtual void  startActivities(std::vector<android_content_Intent> const& arg0) ;
	virtual void  startActivities(std::vector<android_content_Intent> const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  startIntentSender(AndroidCXX::android_content_IntentSender const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2,int const& arg3,int const& arg4) ;
	virtual void  startIntentSender(AndroidCXX::android_content_IntentSender const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2,int const& arg3,int const& arg4,AndroidCXX::android_os_Bundle const& arg5) ;
	virtual void  sendBroadcast(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  sendBroadcast(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  sendOrderedBroadcast(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  sendOrderedBroadcast(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_content_BroadcastReceiver const& arg2,AndroidCXX::android_os_Handler const& arg3,int const& arg4,AndroidCXX::java_lang_String const& arg5,AndroidCXX::android_os_Bundle const& arg6) ;
	virtual void  sendBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual void  sendBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1) ;
	virtual void  sendOrderedBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_content_BroadcastReceiver const& arg3,AndroidCXX::android_os_Handler const& arg4,int const& arg5,AndroidCXX::java_lang_String const& arg6,AndroidCXX::android_os_Bundle const& arg7) ;
	virtual void  sendStickyBroadcast(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  sendStickyOrderedBroadcast(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_content_BroadcastReceiver const& arg1,AndroidCXX::android_os_Handler const& arg2,int const& arg3,AndroidCXX::java_lang_String const& arg4,AndroidCXX::android_os_Bundle const& arg5) ;
	virtual void  removeStickyBroadcast(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  sendStickyBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1) ;
	virtual void  sendStickyOrderedBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1,AndroidCXX::android_content_BroadcastReceiver const& arg2,AndroidCXX::android_os_Handler const& arg3,int const& arg4,AndroidCXX::java_lang_String const& arg5,AndroidCXX::android_os_Bundle const& arg6) ;
	virtual void  removeStickyBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1) ;
	virtual AndroidCXX::android_content_Intent * registerReceiver(AndroidCXX::android_content_BroadcastReceiver const& arg0,AndroidCXX::android_content_IntentFilter const& arg1) ;
	virtual AndroidCXX::android_content_Intent * registerReceiver(AndroidCXX::android_content_BroadcastReceiver const& arg0,AndroidCXX::android_content_IntentFilter const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_os_Handler const& arg3) ;
	virtual void  unregisterReceiver(AndroidCXX::android_content_BroadcastReceiver const& arg0) ;
	virtual AndroidCXX::android_content_ComponentName * startService(AndroidCXX::android_content_Intent const& arg0) ;
	virtual bool  stopService(AndroidCXX::android_content_Intent const& arg0) ;
	virtual bool  bindService(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_content_ServiceConnection const& arg1,int const& arg2) ;
	virtual void  unbindService(AndroidCXX::android_content_ServiceConnection const& arg0) ;
	virtual bool  startInstrumentation(AndroidCXX::android_content_ComponentName const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual AndroidCXX::java_lang_Object * getSystemService(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  checkCallingPermission(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  checkCallingOrSelfPermission(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  enforcePermission(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_lang_String const& arg3) ;
	virtual void  enforceCallingPermission(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  enforceCallingOrSelfPermission(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  grantUriPermission(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_net_Uri const& arg1,int const& arg2) ;
	virtual void  revokeUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1) ;
	virtual int  checkUriPermission(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,int const& arg3,int const& arg4,int const& arg5) ;
	virtual int  checkUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual int  checkCallingUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1) ;
	virtual int  checkCallingOrSelfUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1) ;
	virtual void  enforceUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1,int const& arg2,int const& arg3,AndroidCXX::java_lang_String const& arg4) ;
	virtual void  enforceUriPermission(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,int const& arg3,int const& arg4,int const& arg5,AndroidCXX::java_lang_String const& arg6) ;
	virtual void  enforceCallingUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual void  enforceCallingOrSelfUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual AndroidCXX::android_content_Context * createPackageContext(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_Context * createConfigurationContext(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual AndroidCXX::android_content_Context * createDisplayContext(AndroidCXX::android_view_Display const& arg0) ;
	virtual bool  isRestricted() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContextWrapper