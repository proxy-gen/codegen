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

#include <android_util_AttributeSet.hpp>

#include <android_content_res_TypedArray.hpp>

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

class android_util_AttributeSet;

class android_content_res_TypedArray;

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
	 java_lang_ClassLoader *  getClassLoader();
	 int checkPermission(java_lang_String& arg0,int& arg1);
	 android_content_res_Resources *  getResources();
	 java_lang_String *  getPackageName();
	 java_lang_String *  getString(int& arg0,std::vector<long>& arg1);
	 java_lang_CharSequence *  getText(int& arg0);
	 void startActivity(android_content_Intent& arg0,android_os_Bundle& arg1);
	 android_content_res_AssetManager *  getAssets();
	 android_content_pm_PackageManager *  getPackageManager();
	 android_content_ContentResolver *  getContentResolver();
	 android_os_Looper *  getMainLooper();
	 android_content_Context *  getApplicationContext();
	 void registerComponentCallbacks(android_content_ComponentCallbacks& arg0);
	 void unregisterComponentCallbacks(android_content_ComponentCallbacks& arg0);
	 void setTheme(int& arg0);
	 android_content_res_Resources_Theme *  getTheme();
	 android_content_res_TypedArray *  obtainStyledAttributes(std::vector<int>& arg0,int& arg1,android_util_AttributeSet& arg2);
	 android_content_pm_ApplicationInfo *  getApplicationInfo();
	 java_lang_String *  getPackageResourcePath();
	 java_lang_String *  getPackageCodePath();
	 android_content_SharedPreferences *  getSharedPreferences(java_lang_String& arg0,int& arg1);
	 java_io_FileInputStream *  openFileInput(java_lang_String& arg0);
	 java_io_FileOutputStream *  openFileOutput(java_lang_String& arg0,int& arg1);
	 bool deleteFile(java_lang_String& arg0);
	 java_io_File *  getFileStreamPath(java_lang_String& arg0);
	 java_io_File *  getFilesDir();
	 java_io_File *  getExternalFilesDir(java_lang_String& arg0);
	 java_io_File *  getObbDir();
	 java_io_File *  getCacheDir();
	 java_io_File *  getExternalCacheDir();
	 std::vector<long> fileList();
	 java_io_File *  getDir(java_lang_String& arg0,int& arg1);
	 android_database_sqlite_SQLiteDatabase *  openOrCreateDatabase(java_lang_String& arg0,int& arg1,android_database_sqlite_SQLiteDatabase_CursorFactory& arg2,android_database_DatabaseErrorHandler& arg3);
	 bool deleteDatabase(java_lang_String& arg0);
	 java_io_File *  getDatabasePath(java_lang_String& arg0);
	 std::vector<long> databaseList();
	 android_graphics_drawable_Drawable *  getWallpaper();
	 android_graphics_drawable_Drawable *  peekWallpaper();
	 int getWallpaperDesiredMinimumWidth();
	 int getWallpaperDesiredMinimumHeight();
	 void setWallpaper(java_io_InputStream& arg0,android_graphics_Bitmap& arg1);
	 void clearWallpaper();
	 void startActivities(std::vector<long>& arg0,android_os_Bundle& arg1);
	 void startIntentSender(android_content_IntentSender& arg0,android_content_Intent& arg1,int& arg2,android_os_Bundle& arg3);
	 void sendBroadcast(android_content_Intent& arg0,java_lang_String& arg1);
	 void sendOrderedBroadcast(android_content_Intent& arg0,java_lang_String& arg1,android_content_BroadcastReceiver& arg2,android_os_Handler& arg3,int& arg4,android_os_Bundle& arg5);
	 void sendBroadcastAsUser(android_content_Intent& arg0,android_os_UserHandle& arg1,java_lang_String& arg2);
	 void sendOrderedBroadcastAsUser(android_content_Intent& arg0,android_os_UserHandle& arg1,java_lang_String& arg2,android_content_BroadcastReceiver& arg3,android_os_Handler& arg4,int& arg5,android_os_Bundle& arg6);
	 void sendStickyBroadcast(android_content_Intent& arg0);
	 void sendStickyOrderedBroadcast(android_content_Intent& arg0,android_content_BroadcastReceiver& arg1,android_os_Handler& arg2,int& arg3,java_lang_String& arg4,android_os_Bundle& arg5);
	 void removeStickyBroadcast(android_content_Intent& arg0);
	 void sendStickyBroadcastAsUser(android_content_Intent& arg0,android_os_UserHandle& arg1);
	 void sendStickyOrderedBroadcastAsUser(android_content_Intent& arg0,android_os_UserHandle& arg1,android_content_BroadcastReceiver& arg2,android_os_Handler& arg3,int& arg4,java_lang_String& arg5,android_os_Bundle& arg6);
	 void removeStickyBroadcastAsUser(android_content_Intent& arg0,android_os_UserHandle& arg1);
	 android_content_Intent *  registerReceiver(android_content_BroadcastReceiver& arg0,android_content_IntentFilter& arg1,java_lang_String& arg2,android_os_Handler& arg3);
	 void unregisterReceiver(android_content_BroadcastReceiver& arg0);
	 android_content_ComponentName *  startService(android_content_Intent& arg0);
	 bool stopService(android_content_Intent& arg0);
	 bool bindService(android_content_Intent& arg0,android_content_ServiceConnection& arg1,int& arg2);
	 void unbindService(android_content_ServiceConnection& arg0);
	 bool startInstrumentation(android_content_ComponentName& arg0,java_lang_String& arg1,android_os_Bundle& arg2);
	 java_lang_Object *  getSystemService(java_lang_String& arg0);
	 int checkCallingPermission(java_lang_String& arg0);
	 int checkCallingOrSelfPermission(java_lang_String& arg0);
	 void enforcePermission(java_lang_String& arg0,int& arg1);
	 void enforceCallingPermission(java_lang_String& arg0);
	 void enforceCallingOrSelfPermission(java_lang_String& arg0);
	 void grantUriPermission(java_lang_String& arg0,android_net_Uri& arg1,int& arg2);
	 void revokeUriPermission(android_net_Uri& arg0,int& arg1);
	 int checkUriPermission(android_net_Uri& arg0,int& arg1,java_lang_String& arg2);
	 int checkCallingUriPermission(android_net_Uri& arg0,int& arg1);
	 int checkCallingOrSelfUriPermission(android_net_Uri& arg0,int& arg1);
	 void enforceUriPermission(android_net_Uri& arg0,java_lang_String& arg1,int& arg2);
	 void enforceCallingUriPermission(android_net_Uri& arg0,int& arg1,java_lang_String& arg2);
	 void enforceCallingOrSelfUriPermission(android_net_Uri& arg0,int& arg1,java_lang_String& arg2);
	 android_content_Context *  createPackageContext(java_lang_String& arg0,int& arg1);
	 android_content_Context *  createConfigurationContext(android_content_res_Configuration& arg0);
	 android_content_Context *  createDisplayContext(android_view_Display& arg0);
	 bool isRestricted();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_Context