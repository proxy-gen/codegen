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
	android_app_Activity(void * proxy);
	virtual ~android_app_Activity();
	 android_app_Activity *  getParent();
	 bool isDestroyed();
	 void finish();
	 void dump(java_lang_String& arg0,java_io_FileDescriptor& arg1,java_io_PrintWriter& arg2,std::vector<long>& arg3);
	 android_app_FragmentManager *  getFragmentManager();
	 android_app_LoaderManager *  getLoaderManager();
	 void startActivity(android_content_Intent& arg0,android_os_Bundle& arg1);
	 void startActivityForResult(android_content_Intent& arg0,int& arg1,android_os_Bundle& arg2);
	 android_view_LayoutInflater *  getLayoutInflater();
	 android_view_View *  onCreateView(android_view_View& arg0,java_lang_String& arg1,android_content_Context& arg2,android_util_AttributeSet& arg3);
	 void onConfigurationChanged(android_content_res_Configuration& arg0);
	 void onLowMemory();
	 bool onCreateOptionsMenu(android_view_Menu& arg0);
	 bool onPrepareOptionsMenu(android_view_Menu& arg0);
	 bool onOptionsItemSelected(android_view_MenuItem& arg0);
	 void onOptionsMenuClosed(android_view_Menu& arg0);
	 void onCreateContextMenu(android_view_ContextMenu& arg0,android_view_View& arg1,android_view_ContextMenu_ContextMenuInfo& arg2);
	 void registerForContextMenu(android_view_View& arg0);
	 void unregisterForContextMenu(android_view_View& arg0);
	 bool onContextItemSelected(android_view_MenuItem& arg0);
	 void startActivityFromFragment(android_app_Fragment& arg0,android_content_Intent& arg1,int& arg2,android_os_Bundle& arg3);
	 android_view_View *  findViewById(int& arg0);
	 android_view_Window *  getWindow();
	 void onAttachFragment(android_app_Fragment& arg0);
	 bool isFinishing();
	 void startActivities(std::vector<long>& arg0,android_os_Bundle& arg1);
	 void startIntentSender(android_content_IntentSender& arg0,android_content_Intent& arg1,int& arg2,android_os_Bundle& arg3);
	 java_lang_Object *  getSystemService(java_lang_String& arg0);
	 void onBackPressed();
	 bool onCreatePanelMenu(int& arg0,android_view_Menu& arg1);
	 bool onKeyDown(int& arg0,android_view_KeyEvent& arg1);
	 bool onMenuItemSelected(int& arg0,android_view_MenuItem& arg1);
	 void onPanelClosed(int& arg0,android_view_Menu& arg1);
	 bool onPreparePanel(int& arg0,android_view_View& arg1,android_view_Menu& arg2);
	 java_lang_Object *  onRetainNonConfigurationInstance();
	 java_lang_Object *  getLastNonConfigurationInstance();
	 android_view_MenuInflater *  getMenuInflater();
	 void invalidateOptionsMenu();
	 android_content_Intent *  getIntent();
	 void setIntent(android_content_Intent& arg0);
	 android_app_Application *  getApplication();
	 bool isChild();
	 android_view_WindowManager *  getWindowManager();
	 android_view_View *  getCurrentFocus();
	 bool onCreateThumbnail(android_graphics_Bitmap& arg0,android_graphics_Canvas& arg1);
	 java_lang_CharSequence *  onCreateDescription();
	 int getChangingConfigurations();
	 void onTrimMemory(int& arg0);
	 android_database_Cursor *  managedQuery(android_net_Uri& arg0,std::vector<long>& arg1,java_lang_String& arg2);
	 void startManagingCursor(android_database_Cursor& arg0);
	 void stopManagingCursor(android_database_Cursor& arg0);
	 android_app_ActionBar *  getActionBar();
	 void setContentView(android_view_View& arg0,int& arg1,android_view_ViewGroup_LayoutParams& arg2);
	 void addContentView(android_view_View& arg0,android_view_ViewGroup_LayoutParams& arg1);
	 void setFinishOnTouchOutside(bool& arg0);
	 void setDefaultKeyMode(int& arg0);
	 bool onKeyLongPress(int& arg0,android_view_KeyEvent& arg1);
	 bool onKeyUp(int& arg0,android_view_KeyEvent& arg1);
	 bool onKeyMultiple(int& arg0,android_view_KeyEvent& arg1);
	 bool onKeyShortcut(int& arg0,android_view_KeyEvent& arg1);
	 bool onTouchEvent(android_view_MotionEvent& arg0);
	 bool onTrackballEvent(android_view_MotionEvent& arg0);
	 bool onGenericMotionEvent(android_view_MotionEvent& arg0);
	 void onUserInteraction();
	 void onWindowAttributesChanged(android_view_WindowManager_LayoutParams& arg0);
	 void onContentChanged();
	 void onWindowFocusChanged(bool& arg0);
	 void onAttachedToWindow();
	 void onDetachedFromWindow();
	 bool hasWindowFocus();
	 bool dispatchKeyEvent(android_view_KeyEvent& arg0);
	 bool dispatchKeyShortcutEvent(android_view_KeyEvent& arg0);
	 bool dispatchTouchEvent(android_view_MotionEvent& arg0);
	 bool dispatchTrackballEvent(android_view_MotionEvent& arg0);
	 bool dispatchGenericMotionEvent(android_view_MotionEvent& arg0);
	 bool dispatchPopulateAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	 android_view_View *  onCreatePanelView(int& arg0);
	 bool onMenuOpened(int& arg0,android_view_Menu& arg1);
	 bool onNavigateUp();
	 bool onNavigateUpFromChild(android_app_Activity& arg0);
	 void onCreateNavigateUpTaskStack(android_app_TaskStackBuilder& arg0);
	 void onPrepareNavigateUpTaskStack(android_app_TaskStackBuilder& arg0);
	 void openOptionsMenu();
	 void closeOptionsMenu();
	 void openContextMenu(android_view_View& arg0);
	 void closeContextMenu();
	 void onContextMenuClosed(android_view_Menu& arg0);
	 bool showDialog(int& arg0,android_os_Bundle& arg1);
	 void dismissDialog(int& arg0);
	 void removeDialog(int& arg0);
	 bool onSearchRequested();
	 void startSearch(java_lang_String& arg0,bool& arg1,android_os_Bundle& arg2);
	 void triggerSearch(java_lang_String& arg0,android_os_Bundle& arg1);
	 void takeKeyEvents(bool& arg0);
	 bool requestWindowFeature(int& arg0);
	 void setFeatureDrawableResource(int& arg0);
	 void setFeatureDrawableUri(int& arg0,android_net_Uri& arg1);
	 void setFeatureDrawable(int& arg0,android_graphics_drawable_Drawable& arg1);
	 void setFeatureDrawableAlpha(int& arg0);
	 void startIntentSenderForResult(android_content_IntentSender& arg0,int& arg1,android_content_Intent& arg2,android_os_Bundle& arg3);
	 bool startActivityIfNeeded(android_content_Intent& arg0,int& arg1,android_os_Bundle& arg2);
	 bool startNextMatchingActivity(android_content_Intent& arg0,android_os_Bundle& arg1);
	 void startActivityFromChild(android_app_Activity& arg0,android_content_Intent& arg1,int& arg2,android_os_Bundle& arg3);
	 void startIntentSenderFromChild(android_app_Activity& arg0,android_content_IntentSender& arg1,int& arg2,android_content_Intent& arg3,android_os_Bundle& arg4);
	 void overridePendingTransition(int& arg0);
	 void setResult(int& arg0,android_content_Intent& arg1);
	 java_lang_String *  getCallingPackage();
	 android_content_ComponentName *  getCallingActivity();
	 void setVisible(bool& arg0);
	 bool isChangingConfigurations();
	 void recreate();
	 void finishAffinity();
	 void finishFromChild(android_app_Activity& arg0);
	 void finishActivity(int& arg0);
	 void finishActivityFromChild(android_app_Activity& arg0,int& arg1);
	 android_app_PendingIntent *  createPendingResult(int& arg0,android_content_Intent& arg1);
	 void setRequestedOrientation(int& arg0);
	 int getRequestedOrientation();
	 int getTaskId();
	 bool isTaskRoot();
	 bool moveTaskToBack(bool& arg0);
	 java_lang_String *  getLocalClassName();
	 android_content_ComponentName *  getComponentName();
	 android_content_SharedPreferences *  getPreferences(int& arg0);
	 void setTitle(java_lang_CharSequence& arg0,int& arg1);
	 void setTitleColor(int& arg0);
	 java_lang_CharSequence *  getTitle();
	 int getTitleColor();
	 void setProgressBarVisibility(bool& arg0);
	 void setProgressBarIndeterminateVisibility(bool& arg0);
	 void setProgressBarIndeterminate(bool& arg0);
	 void setProgress(int& arg0);
	 void setSecondaryProgress(int& arg0);
	 void setVolumeControlStream(int& arg0);
	 int getVolumeControlStream();
	 void runOnUiThread(java_lang_Runnable& arg0);
	 android_view_ActionMode *  startActionMode(android_view_ActionMode_Callback& arg0);
	 android_view_ActionMode *  onWindowStartingActionMode(android_view_ActionMode_Callback& arg0);
	 void onActionModeStarted(android_view_ActionMode& arg0);
	 void onActionModeFinished(android_view_ActionMode& arg0);
	 bool shouldUpRecreateTask(android_content_Intent& arg0);
	 bool navigateUpTo(android_content_Intent& arg0);
	 bool navigateUpToFromChild(android_app_Activity& arg0,android_content_Intent& arg1);
	 android_content_Intent *  getParentActivityIntent();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Activity