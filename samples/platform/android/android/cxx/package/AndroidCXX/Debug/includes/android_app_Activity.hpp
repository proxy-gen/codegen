/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
 		 
 		 
 	
 		 
	
	
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
	
 		 
 	
 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
	
	
	
	
 		 
	
	
	
 		 
 		 
	
 		 
 		 
 	
 		 
 	
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
	
 		 
 		 
 		 
	
	
	
	
 		 
	
 		 
 		 
	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
	











































































































































































// Generated Code 

#ifndef _android_app_Activity
#define _android_app_Activity
//
// Scroll Down 
//



#include <java_lang_String.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_io_PrintWriter.hpp>

#include <android_app_FragmentManager.hpp>

#include <android_app_LoaderManager.hpp>

#include <android_content_Intent.hpp>

#include <android_os_Bundle.hpp>

#include <android_view_LayoutInflater.hpp>

#include <android_view_View.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_content_res_Configuration.hpp>

#include <android_view_Menu.hpp>

#include <android_view_MenuItem.hpp>

#include <android_view_ContextMenu.hpp>

#include <android_view_ContextMenu_ContextMenuInfo.hpp>

#include <android_app_Fragment.hpp>

#include <android_view_Window.hpp>

#include <android_content_IntentSender.hpp>

#include <java_lang_Object.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_MenuInflater.hpp>

#include <android_app_Application.hpp>

#include <android_view_WindowManager.hpp>

#include <android_graphics_Bitmap.hpp>

#include <android_graphics_Canvas.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_net_Uri.hpp>

#include <android_database_Cursor.hpp>

#include <android_app_ActionBar.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_WindowManager_LayoutParams.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_app_TaskStackBuilder.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_content_ComponentName.hpp>

#include <android_app_PendingIntent.hpp>

#include <android_content_SharedPreferences.hpp>

#include <java_lang_Runnable.hpp>

#include <android_view_ActionMode_Callback.hpp>

#include <android_view_ActionMode.hpp>

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

class android_app_Activity;

class java_lang_String;

class java_io_FileDescriptor;

class java_io_PrintWriter;

class android_app_FragmentManager;

class android_app_LoaderManager;

class android_content_Intent;

class android_os_Bundle;

class android_view_LayoutInflater;

class android_view_View;

class android_content_Context;

class android_util_AttributeSet;

class android_content_res_Configuration;

class android_view_Menu;

class android_view_MenuItem;

class android_view_ContextMenu;

class android_view_ContextMenu_ContextMenuInfo;

class android_app_Fragment;

class android_view_Window;

class android_content_IntentSender;

class java_lang_Object;

class android_view_KeyEvent;

class android_view_MenuInflater;

class android_app_Application;

class android_view_WindowManager;

class android_graphics_Bitmap;

class android_graphics_Canvas;

class java_lang_CharSequence;

class android_net_Uri;

class android_database_Cursor;

class android_app_ActionBar;

class android_view_ViewGroup_LayoutParams;

class android_view_MotionEvent;

class android_view_WindowManager_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_app_TaskStackBuilder;

class android_graphics_drawable_Drawable;

class android_content_ComponentName;

class android_app_PendingIntent;

class android_content_SharedPreferences;

class java_lang_Runnable;

class android_view_ActionMode_Callback;

class android_view_ActionMode;

class android_app_Activity
{
public:

	android_app_Activity(const android_app_Activity& cc);
	android_app_Activity(Proxy proxy);
	// Public Constructors
	android_app_Activity();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_Activity();
	// Functions
	 AndroidCXX::android_app_Activity getParent();
	 bool isDestroyed();
	 void finish();
	 void dump(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_FileDescriptor const& arg1,AndroidCXX::java_io_PrintWriter const& arg2,std::vector<AndroidCXX::java_lang_String > const& arg3);
	 AndroidCXX::android_app_FragmentManager getFragmentManager();
	 AndroidCXX::android_app_LoaderManager getLoaderManager();
	 void startActivity(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void startActivity(AndroidCXX::android_content_Intent const& arg0);
	 void startActivityForResult(AndroidCXX::android_content_Intent const& arg0,int const& arg1);
	 void startActivityForResult(AndroidCXX::android_content_Intent const& arg0,int const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	 AndroidCXX::android_view_LayoutInflater getLayoutInflater();
	 AndroidCXX::android_view_View onCreateView(AndroidCXX::android_view_View const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_content_Context const& arg2,AndroidCXX::android_util_AttributeSet const& arg3);
	 AndroidCXX::android_view_View onCreateView(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_content_Context const& arg1,AndroidCXX::android_util_AttributeSet const& arg2);
	 void onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0);
	 void onLowMemory();
	 bool onCreateOptionsMenu(AndroidCXX::android_view_Menu const& arg0);
	 bool onPrepareOptionsMenu(AndroidCXX::android_view_Menu const& arg0);
	 bool onOptionsItemSelected(AndroidCXX::android_view_MenuItem const& arg0);
	 void onOptionsMenuClosed(AndroidCXX::android_view_Menu const& arg0);
	 void onCreateContextMenu(AndroidCXX::android_view_ContextMenu const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ContextMenu_ContextMenuInfo const& arg2);
	 void registerForContextMenu(AndroidCXX::android_view_View const& arg0);
	 void unregisterForContextMenu(AndroidCXX::android_view_View const& arg0);
	 bool onContextItemSelected(AndroidCXX::android_view_MenuItem const& arg0);
	 void startActivityFromFragment(AndroidCXX::android_app_Fragment const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2);
	 void startActivityFromFragment(AndroidCXX::android_app_Fragment const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2,AndroidCXX::android_os_Bundle const& arg3);
	 AndroidCXX::android_view_View findViewById(int const& arg0);
	 AndroidCXX::android_view_Window getWindow();
	 void onAttachFragment(AndroidCXX::android_app_Fragment const& arg0);
	 bool isFinishing();
	 void startActivities(std::vector<AndroidCXX::android_content_Intent > const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void startActivities(std::vector<AndroidCXX::android_content_Intent > const& arg0);
	 void startIntentSender(AndroidCXX::android_content_IntentSender const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2,int const& arg3,int const& arg4);
	 void startIntentSender(AndroidCXX::android_content_IntentSender const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2,int const& arg3,int const& arg4,AndroidCXX::android_os_Bundle const& arg5);
	 AndroidCXX::java_lang_Object getSystemService(AndroidCXX::java_lang_String const& arg0);
	 void onBackPressed();
	 bool onCreatePanelMenu(int const& arg0,AndroidCXX::android_view_Menu const& arg1);
	 bool onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onMenuItemSelected(int const& arg0,AndroidCXX::android_view_MenuItem const& arg1);
	 void onPanelClosed(int const& arg0,AndroidCXX::android_view_Menu const& arg1);
	 bool onPreparePanel(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_Menu const& arg2);
	 AndroidCXX::java_lang_Object onRetainNonConfigurationInstance();
	 AndroidCXX::java_lang_Object getLastNonConfigurationInstance();
	 AndroidCXX::android_view_MenuInflater getMenuInflater();
	 void invalidateOptionsMenu();
	 AndroidCXX::android_content_Intent getIntent();
	 void setIntent(AndroidCXX::android_content_Intent const& arg0);
	 AndroidCXX::android_app_Application getApplication();
	 bool isChild();
	 AndroidCXX::android_view_WindowManager getWindowManager();
	 AndroidCXX::android_view_View getCurrentFocus();
	 bool onCreateThumbnail(AndroidCXX::android_graphics_Bitmap const& arg0,AndroidCXX::android_graphics_Canvas const& arg1);
	 AndroidCXX::java_lang_CharSequence onCreateDescription();
	 void onProvideAssistData(AndroidCXX::android_os_Bundle const& arg0);
	 int getChangingConfigurations();
	 void onTrimMemory(int const& arg0);
	 AndroidCXX::android_database_Cursor managedQuery(AndroidCXX::android_net_Uri const& arg0,std::vector<AndroidCXX::java_lang_String > const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<AndroidCXX::java_lang_String > const& arg3,AndroidCXX::java_lang_String const& arg4);
	 void startManagingCursor(AndroidCXX::android_database_Cursor const& arg0);
	 void stopManagingCursor(AndroidCXX::android_database_Cursor const& arg0);
	 AndroidCXX::android_app_ActionBar getActionBar();
	 void setContentView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg1);
	 void setContentView(AndroidCXX::android_view_View const& arg0);
	 void setContentView(int const& arg0);
	 void addContentView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg1);
	 void setFinishOnTouchOutside(bool const& arg0);
	 void setDefaultKeyMode(int const& arg0);
	 bool onKeyLongPress(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onKeyMultiple(int const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2);
	 bool onKeyShortcut(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool onTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool onGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 void onUserInteraction();
	 void onWindowAttributesChanged(AndroidCXX::android_view_WindowManager_LayoutParams const& arg0);
	 void onContentChanged();
	 void onWindowFocusChanged(bool const& arg0);
	 void onAttachedToWindow();
	 void onDetachedFromWindow();
	 bool hasWindowFocus();
	 bool dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0);
	 bool dispatchKeyShortcutEvent(AndroidCXX::android_view_KeyEvent const& arg0);
	 bool dispatchTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool dispatchTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool dispatchGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 AndroidCXX::android_view_View onCreatePanelView(int const& arg0);
	 bool onMenuOpened(int const& arg0,AndroidCXX::android_view_Menu const& arg1);
	 bool onNavigateUp();
	 bool onNavigateUpFromChild(AndroidCXX::android_app_Activity const& arg0);
	 void onCreateNavigateUpTaskStack(AndroidCXX::android_app_TaskStackBuilder const& arg0);
	 void onPrepareNavigateUpTaskStack(AndroidCXX::android_app_TaskStackBuilder const& arg0);
	 void openOptionsMenu();
	 void closeOptionsMenu();
	 void openContextMenu(AndroidCXX::android_view_View const& arg0);
	 void closeContextMenu();
	 void onContextMenuClosed(AndroidCXX::android_view_Menu const& arg0);
	 bool showDialog(int const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void showDialog(int const& arg0);
	 void dismissDialog(int const& arg0);
	 void removeDialog(int const& arg0);
	 bool onSearchRequested();
	 void startSearch(AndroidCXX::java_lang_String const& arg0,bool const& arg1,AndroidCXX::android_os_Bundle const& arg2,bool const& arg3);
	 void triggerSearch(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void takeKeyEvents(bool const& arg0);
	 bool requestWindowFeature(int const& arg0);
	 void setFeatureDrawableResource(int const& arg0,int const& arg1);
	 void setFeatureDrawableUri(int const& arg0,AndroidCXX::android_net_Uri const& arg1);
	 void setFeatureDrawable(int const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1);
	 void setFeatureDrawableAlpha(int const& arg0,int const& arg1);
	 void startIntentSenderForResult(AndroidCXX::android_content_IntentSender const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2,int const& arg3,int const& arg4,int const& arg5,AndroidCXX::android_os_Bundle const& arg6);
	 void startIntentSenderForResult(AndroidCXX::android_content_IntentSender const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2,int const& arg3,int const& arg4,int const& arg5);
	 bool startActivityIfNeeded(AndroidCXX::android_content_Intent const& arg0,int const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	 bool startActivityIfNeeded(AndroidCXX::android_content_Intent const& arg0,int const& arg1);
	 bool startNextMatchingActivity(AndroidCXX::android_content_Intent const& arg0);
	 bool startNextMatchingActivity(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void startActivityFromChild(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2,AndroidCXX::android_os_Bundle const& arg3);
	 void startActivityFromChild(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2);
	 void startIntentSenderFromChild(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_content_IntentSender const& arg1,int const& arg2,AndroidCXX::android_content_Intent const& arg3,int const& arg4,int const& arg5,int const& arg6,AndroidCXX::android_os_Bundle const& arg7);
	 void startIntentSenderFromChild(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_content_IntentSender const& arg1,int const& arg2,AndroidCXX::android_content_Intent const& arg3,int const& arg4,int const& arg5,int const& arg6);
	 void overridePendingTransition(int const& arg0,int const& arg1);
	 void setResult(int const& arg0);
	 void setResult(int const& arg0,AndroidCXX::android_content_Intent const& arg1);
	 AndroidCXX::java_lang_String getCallingPackage();
	 AndroidCXX::android_content_ComponentName getCallingActivity();
	 void setVisible(bool const& arg0);
	 bool isChangingConfigurations();
	 void recreate();
	 void finishAffinity();
	 void finishFromChild(AndroidCXX::android_app_Activity const& arg0);
	 void finishActivity(int const& arg0);
	 void finishActivityFromChild(AndroidCXX::android_app_Activity const& arg0,int const& arg1);
	 AndroidCXX::android_app_PendingIntent createPendingResult(int const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2);
	 void setRequestedOrientation(int const& arg0);
	 int getRequestedOrientation();
	 int getTaskId();
	 bool isTaskRoot();
	 bool moveTaskToBack(bool const& arg0);
	 AndroidCXX::java_lang_String getLocalClassName();
	 AndroidCXX::android_content_ComponentName getComponentName();
	 AndroidCXX::android_content_SharedPreferences getPreferences(int const& arg0);
	 void setTitle(AndroidCXX::java_lang_CharSequence const& arg0);
	 void setTitle(int const& arg0);
	 void setTitleColor(int const& arg0);
	 AndroidCXX::java_lang_CharSequence getTitle();
	 int getTitleColor();
	 void setProgressBarVisibility(bool const& arg0);
	 void setProgressBarIndeterminateVisibility(bool const& arg0);
	 void setProgressBarIndeterminate(bool const& arg0);
	 void setProgress(int const& arg0);
	 void setSecondaryProgress(int const& arg0);
	 void setVolumeControlStream(int const& arg0);
	 int getVolumeControlStream();
	 void runOnUiThread(AndroidCXX::java_lang_Runnable const& arg0);
	 bool isImmersive();
	 void setImmersive(bool const& arg0);
	 AndroidCXX::android_view_ActionMode startActionMode(AndroidCXX::android_view_ActionMode_Callback const& arg0);
	 AndroidCXX::android_view_ActionMode onWindowStartingActionMode(AndroidCXX::android_view_ActionMode_Callback const& arg0);
	 void onActionModeStarted(AndroidCXX::android_view_ActionMode const& arg0);
	 void onActionModeFinished(AndroidCXX::android_view_ActionMode const& arg0);
	 bool shouldUpRecreateTask(AndroidCXX::android_content_Intent const& arg0);
	 bool navigateUpTo(AndroidCXX::android_content_Intent const& arg0);
	 bool navigateUpToFromChild(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_content_Intent const& arg1);
	 AndroidCXX::android_content_Intent getParentActivityIntent();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Activity