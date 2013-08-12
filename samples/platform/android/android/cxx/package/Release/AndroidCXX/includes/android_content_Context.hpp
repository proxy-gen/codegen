/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_ClassLoader.hpp>

#include <java_lang_String.hpp>

#include <android_content_res_Resources.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_content_Intent.hpp>

#include <android_os_Bundle.hpp>

#include <android_content_res_AssetManager.hpp>

#include <android_content_pm_PackageManager.hpp>

#include <android_content_ContentResolver.hpp>

#include <android_os_Looper.hpp>


#include <android_content_ComponentCallbacks.hpp>

#include <android_content_res_Resources_Theme.hpp>

#include <android_content_res_TypedArray.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_content_pm_ApplicationInfo.hpp>

#include <android_content_SharedPreferences.hpp>

#include <java_io_FileInputStream.hpp>

#include <java_io_FileOutputStream.hpp>

#include <java_io_File.hpp>

#include <android_database_sqlite_SQLiteDatabase_CursorFactory.hpp>

#include <android_database_DatabaseErrorHandler.hpp>

#include <android_database_sqlite_SQLiteDatabase.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <java_io_InputStream.hpp>

#include <android_graphics_Bitmap.hpp>

#include <android_content_IntentSender.hpp>

#include <android_content_BroadcastReceiver.hpp>

#include <android_os_Handler.hpp>

#include <android_os_UserHandle.hpp>

#include <android_content_IntentFilter.hpp>

#include <android_content_ComponentName.hpp>

#include <android_content_ServiceConnection.hpp>

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

class java_lang_Object;

class java_lang_CharSequence;

class android_content_Intent;

class android_os_Bundle;

class android_content_res_AssetManager;

class android_content_pm_PackageManager;

class android_content_ContentResolver;

class android_os_Looper;

class android_content_Context;

class android_content_ComponentCallbacks;

class android_content_res_Resources_Theme;

class android_content_res_TypedArray;

class android_util_AttributeSet;

class android_content_pm_ApplicationInfo;

class android_content_SharedPreferences;

class java_io_FileInputStream;

class java_io_FileOutputStream;

class java_io_File;

class android_database_sqlite_SQLiteDatabase_CursorFactory;

class android_database_DatabaseErrorHandler;

class android_database_sqlite_SQLiteDatabase;

class android_graphics_drawable_Drawable;

class java_io_InputStream;

class android_graphics_Bitmap;

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

class android_content_Context
{
public:

	android_content_Context(const android_content_Context& cc);
	android_content_Context(Proxy proxy);
	// Public Constructors
	android_content_Context();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_Context();
	// Functions
	 AndroidCXX::java_lang_ClassLoader getClassLoader();
	 int checkPermission(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2);
	 AndroidCXX::android_content_res_Resources getResources();
	 AndroidCXX::java_lang_String getPackageName();
	 AndroidCXX::java_lang_String getString(int const& arg0);
	 AndroidCXX::java_lang_String getString(int const& arg0,std::vector<java_lang_Object> const& arg1);
	 AndroidCXX::java_lang_CharSequence getText(int const& arg0);
	 void startActivity(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void startActivity(AndroidCXX::android_content_Intent const& arg0);
	 AndroidCXX::android_content_res_AssetManager getAssets();
	 AndroidCXX::android_content_pm_PackageManager getPackageManager();
	 AndroidCXX::android_content_ContentResolver getContentResolver();
	 AndroidCXX::android_os_Looper getMainLooper();
	 AndroidCXX::android_content_Context getApplicationContext();
	 void registerComponentCallbacks(AndroidCXX::android_content_ComponentCallbacks const& arg0);
	 void unregisterComponentCallbacks(AndroidCXX::android_content_ComponentCallbacks const& arg0);
	 void setTheme(int const& arg0);
	 AndroidCXX::android_content_res_Resources_Theme getTheme();
	 AndroidCXX::android_content_res_TypedArray obtainStyledAttributes(std::vector<int> const& arg0);
	 AndroidCXX::android_content_res_TypedArray obtainStyledAttributes(int const& arg0,std::vector<int> const& arg1);
	 AndroidCXX::android_content_res_TypedArray obtainStyledAttributes(AndroidCXX::android_util_AttributeSet const& arg0,std::vector<int> const& arg1);
	 AndroidCXX::android_content_res_TypedArray obtainStyledAttributes(AndroidCXX::android_util_AttributeSet const& arg0,std::vector<int> const& arg1,int const& arg2,int const& arg3);
	 AndroidCXX::android_content_pm_ApplicationInfo getApplicationInfo();
	 AndroidCXX::java_lang_String getPackageResourcePath();
	 AndroidCXX::java_lang_String getPackageCodePath();
	 AndroidCXX::android_content_SharedPreferences getSharedPreferences(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 AndroidCXX::java_io_FileInputStream openFileInput(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_io_FileOutputStream openFileOutput(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 bool deleteFile(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_io_File getFileStreamPath(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_io_File getFilesDir();
	 AndroidCXX::java_io_File getExternalFilesDir(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_io_File getObbDir();
	 AndroidCXX::java_io_File getCacheDir();
	 AndroidCXX::java_io_File getExternalCacheDir();
	 std::vector<java_lang_String> fileList();
	 AndroidCXX::java_io_File getDir(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 AndroidCXX::android_database_sqlite_SQLiteDatabase openOrCreateDatabase(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg2,AndroidCXX::android_database_DatabaseErrorHandler const& arg3);
	 AndroidCXX::android_database_sqlite_SQLiteDatabase openOrCreateDatabase(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg2);
	 bool deleteDatabase(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_io_File getDatabasePath(AndroidCXX::java_lang_String const& arg0);
	 std::vector<java_lang_String> databaseList();
	 AndroidCXX::android_graphics_drawable_Drawable getWallpaper();
	 AndroidCXX::android_graphics_drawable_Drawable peekWallpaper();
	 int getWallpaperDesiredMinimumWidth();
	 int getWallpaperDesiredMinimumHeight();
	 void setWallpaper(AndroidCXX::java_io_InputStream const& arg0);
	 void setWallpaper(AndroidCXX::android_graphics_Bitmap const& arg0);
	 void clearWallpaper();
	 void startActivities(std::vector<android_content_Intent> const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void startActivities(std::vector<android_content_Intent> const& arg0);
	 void startIntentSender(AndroidCXX::android_content_IntentSender const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2,int const& arg3,int const& arg4,AndroidCXX::android_os_Bundle const& arg5);
	 void startIntentSender(AndroidCXX::android_content_IntentSender const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2,int const& arg3,int const& arg4);
	 void sendBroadcast(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::java_lang_String const& arg1);
	 void sendBroadcast(AndroidCXX::android_content_Intent const& arg0);
	 void sendOrderedBroadcast(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_content_BroadcastReceiver const& arg2,AndroidCXX::android_os_Handler const& arg3,int const& arg4,AndroidCXX::java_lang_String const& arg5,AndroidCXX::android_os_Bundle const& arg6);
	 void sendOrderedBroadcast(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::java_lang_String const& arg1);
	 void sendBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1,AndroidCXX::java_lang_String const& arg2);
	 void sendBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1);
	 void sendOrderedBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_content_BroadcastReceiver const& arg3,AndroidCXX::android_os_Handler const& arg4,int const& arg5,AndroidCXX::java_lang_String const& arg6,AndroidCXX::android_os_Bundle const& arg7);
	 void sendStickyBroadcast(AndroidCXX::android_content_Intent const& arg0);
	 void sendStickyOrderedBroadcast(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_content_BroadcastReceiver const& arg1,AndroidCXX::android_os_Handler const& arg2,int const& arg3,AndroidCXX::java_lang_String const& arg4,AndroidCXX::android_os_Bundle const& arg5);
	 void removeStickyBroadcast(AndroidCXX::android_content_Intent const& arg0);
	 void sendStickyBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1);
	 void sendStickyOrderedBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1,AndroidCXX::android_content_BroadcastReceiver const& arg2,AndroidCXX::android_os_Handler const& arg3,int const& arg4,AndroidCXX::java_lang_String const& arg5,AndroidCXX::android_os_Bundle const& arg6);
	 void removeStickyBroadcastAsUser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_UserHandle const& arg1);
	 AndroidCXX::android_content_Intent registerReceiver(AndroidCXX::android_content_BroadcastReceiver const& arg0,AndroidCXX::android_content_IntentFilter const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_os_Handler const& arg3);
	 AndroidCXX::android_content_Intent registerReceiver(AndroidCXX::android_content_BroadcastReceiver const& arg0,AndroidCXX::android_content_IntentFilter const& arg1);
	 void unregisterReceiver(AndroidCXX::android_content_BroadcastReceiver const& arg0);
	 AndroidCXX::android_content_ComponentName startService(AndroidCXX::android_content_Intent const& arg0);
	 bool stopService(AndroidCXX::android_content_Intent const& arg0);
	 bool bindService(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_content_ServiceConnection const& arg1,int const& arg2);
	 void unbindService(AndroidCXX::android_content_ServiceConnection const& arg0);
	 bool startInstrumentation(AndroidCXX::android_content_ComponentName const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	 AndroidCXX::java_lang_Object getSystemService(AndroidCXX::java_lang_String const& arg0);
	 int checkCallingPermission(AndroidCXX::java_lang_String const& arg0);
	 int checkCallingOrSelfPermission(AndroidCXX::java_lang_String const& arg0);
	 void enforcePermission(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_lang_String const& arg3);
	 void enforceCallingPermission(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 void enforceCallingOrSelfPermission(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 void grantUriPermission(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_net_Uri const& arg1,int const& arg2);
	 void revokeUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1);
	 int checkUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 int checkUriPermission(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,int const& arg3,int const& arg4,int const& arg5);
	 int checkCallingUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1);
	 int checkCallingOrSelfUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1);
	 void enforceUriPermission(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,int const& arg3,int const& arg4,int const& arg5,AndroidCXX::java_lang_String const& arg6);
	 void enforceUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1,int const& arg2,int const& arg3,AndroidCXX::java_lang_String const& arg4);
	 void enforceCallingUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2);
	 void enforceCallingOrSelfUriPermission(AndroidCXX::android_net_Uri const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2);
	 AndroidCXX::android_content_Context createPackageContext(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 AndroidCXX::android_content_Context createConfigurationContext(AndroidCXX::android_content_res_Configuration const& arg0);
	 AndroidCXX::android_content_Context createDisplayContext(AndroidCXX::android_view_Display const& arg0);
	 bool isRestricted();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_Context