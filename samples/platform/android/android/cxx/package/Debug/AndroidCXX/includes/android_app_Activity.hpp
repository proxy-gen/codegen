/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_view_View.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_content_Intent.hpp>

#include <android_app_PendingIntent.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <java_lang_String.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_io_PrintWriter.hpp>

#include <android_app_ActionBar.hpp>

#include <android_app_Application.hpp>

#include <android_content_ComponentName.hpp>

#include <android_app_FragmentManager.hpp>

#include <java_lang_Object.hpp>

#include <android_view_LayoutInflater.hpp>

#include <android_app_LoaderManager.hpp>

#include <android_view_MenuInflater.hpp>

#include <android_content_SharedPreferences.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_view_WindowManager.hpp>

#include <android_view_Window.hpp>

#include <android_net_Uri.hpp>

#include <android_database_Cursor.hpp>

#include <android_view_ActionMode.hpp>

#include <android_app_Fragment.hpp>

#include <android_content_res_Configuration.hpp>

#include <android_view_MenuItem.hpp>

#include <android_view_Menu.hpp>

#include <android_view_ContextMenu.hpp>

#include <android_view_ContextMenu_ContextMenuInfo.hpp>

#include <android_app_TaskStackBuilder.hpp>

#include <android_graphics_Bitmap.hpp>

#include <android_graphics_Canvas.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_os_Bundle.hpp>

#include <android_view_WindowManager_LayoutParams.hpp>

#include <android_view_ActionMode_Callback.hpp>

#include <java_lang_Runnable.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_content_IntentSender.hpp>


#include <android_content_ComponentCallbacks2.hpp>

#include <android_view_KeyEvent_Callback.hpp>

#include <android_view_LayoutInflater_Factory2.hpp>

#include <android_view_View_OnCreateContextMenuListener.hpp>

#include <android_view_Window_Callback.hpp>

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

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_content_Intent;

class android_app_PendingIntent;

class android_view_MotionEvent;

class android_view_KeyEvent;

class android_view_accessibility_AccessibilityEvent;

class java_lang_String;

class java_io_FileDescriptor;

class java_io_PrintWriter;


class android_app_ActionBar;

class android_app_Application;

class android_content_ComponentName;

class android_app_FragmentManager;

class java_lang_Object;

class android_view_LayoutInflater;

class android_app_LoaderManager;

class android_view_MenuInflater;

class android_content_SharedPreferences;

class java_lang_CharSequence;

class android_view_WindowManager;

class android_view_Window;

class android_net_Uri;

class android_database_Cursor;

class android_view_ActionMode;

class android_app_Fragment;

class android_content_res_Configuration;

class android_view_MenuItem;

class android_view_Menu;

class android_view_ContextMenu;

class android_view_ContextMenu_ContextMenuInfo;

class android_app_TaskStackBuilder;

class android_graphics_Bitmap;

class android_graphics_Canvas;

class android_content_Context;

class android_util_AttributeSet;

class android_os_Bundle;

class android_view_WindowManager_LayoutParams;

class android_view_ActionMode_Callback;

class java_lang_Runnable;

class android_graphics_drawable_Drawable;

class android_content_IntentSender;

class android_app_Activity : public android_content_ComponentCallbacks2,public android_view_KeyEvent_Callback,public android_view_LayoutInflater_Factory2,public android_view_View_OnCreateContextMenuListener,public android_view_Window_Callback
{
public:

	// Public ConstrucXXX
	android_app_Activity();
	android_app_Activity(const android_app_Activity& cc);
	android_app_Activity(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_Activity();
	// Functions
	virtual void  addContentView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg1) ;
	virtual void  closeContextMenu() ;
	virtual void  closeOptionsMenu() ;
	virtual AndroidCXX::android_app_PendingIntent * createPendingResult(int const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2) ;
	virtual void  dismissDialog(int const& arg0) ;
	virtual bool  dispatchGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  dispatchKeyShortcutEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual bool  dispatchTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  dispatchTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  dump(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_FileDescriptor const& arg1,AndroidCXX::java_io_PrintWriter const& arg2,std::vector<java_lang_String> const& arg3) ;
	virtual AndroidCXX::android_view_View * findViewById(int const& arg0) ;
	virtual void  finishActivityFromChild(AndroidCXX::android_app_Activity const& arg0,int const& arg1) ;
	virtual void  finishActivity(int const& arg0) ;
	virtual void  finishAffinity() ;
	virtual void  finishFromChild(AndroidCXX::android_app_Activity const& arg0) ;
	virtual void  finish() ;
	virtual AndroidCXX::android_app_ActionBar * getActionBar() ;
	virtual AndroidCXX::android_app_Application * getApplication() ;
	virtual AndroidCXX::android_content_ComponentName * getCallingActivity() ;
	virtual AndroidCXX::java_lang_String * getCallingPackage() ;
	virtual int  getChangingConfigurations() ;
	virtual AndroidCXX::android_content_ComponentName * getComponentName() ;
	virtual AndroidCXX::android_view_View * getCurrentFocus() ;
	virtual AndroidCXX::android_app_FragmentManager * getFragmentManager() ;
	virtual AndroidCXX::android_content_Intent * getIntent() ;
	virtual AndroidCXX::java_lang_Object * getLastNonConfigurationInstance() ;
	virtual AndroidCXX::android_view_LayoutInflater * getLayoutInflater() ;
	virtual AndroidCXX::android_app_LoaderManager * getLoaderManager() ;
	virtual AndroidCXX::java_lang_String * getLocalClassName() ;
	virtual AndroidCXX::android_view_MenuInflater * getMenuInflater() ;
	virtual AndroidCXX::android_content_Intent * getParentActivityIntent() ;
	virtual AndroidCXX::android_app_Activity * getParent() ;
	virtual AndroidCXX::android_content_SharedPreferences * getPreferences(int const& arg0) ;
	virtual int  getRequestedOrientation() ;
	virtual AndroidCXX::java_lang_Object * getSystemService(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  getTaskId() ;
	virtual int  getTitleColor() ;
	virtual AndroidCXX::java_lang_CharSequence * getTitle() ;
	virtual int  getVolumeControlStream() ;
	virtual AndroidCXX::android_view_WindowManager * getWindowManager() ;
	virtual AndroidCXX::android_view_Window * getWindow() ;
	virtual bool  hasWindowFocus() ;
	virtual void  invalidateOptionsMenu() ;
	virtual bool  isChangingConfigurations() ;
	virtual bool  isChild() ;
	virtual bool  isDestroyed() ;
	virtual bool  isFinishing() ;
	virtual bool  isImmersive() ;
	virtual bool  isTaskRoot() ;
	virtual AndroidCXX::android_database_Cursor * managedQuery(AndroidCXX::android_net_Uri const& arg0,std::vector<java_lang_String> const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<java_lang_String> const& arg3,AndroidCXX::java_lang_String const& arg4) ;
	virtual bool  moveTaskToBack(bool const& arg0) ;
	virtual bool  navigateUpToFromChild(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_content_Intent const& arg1) ;
	virtual bool  navigateUpTo(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  onActionModeFinished(AndroidCXX::android_view_ActionMode const& arg0) ;
	virtual void  onActionModeStarted(AndroidCXX::android_view_ActionMode const& arg0) ;
	virtual void  onAttachFragment(AndroidCXX::android_app_Fragment const& arg0) ;
	virtual void  onAttachedToWindow() ;
	virtual void  onBackPressed() ;
	virtual void  onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual void  onContentChanged() ;
	virtual bool  onContextItemSelected(AndroidCXX::android_view_MenuItem const& arg0) ;
	virtual void  onContextMenuClosed(AndroidCXX::android_view_Menu const& arg0) ;
	virtual void  onCreateContextMenu(AndroidCXX::android_view_ContextMenu const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ContextMenu_ContextMenuInfo const& arg2) ;
	virtual AndroidCXX::java_lang_CharSequence * onCreateDescription() ;
	virtual void  onCreateNavigateUpTaskStack(AndroidCXX::android_app_TaskStackBuilder const& arg0) ;
	virtual bool  onCreateOptionsMenu(AndroidCXX::android_view_Menu const& arg0) ;
	virtual bool  onCreatePanelMenu(int const& arg0,AndroidCXX::android_view_Menu const& arg1) ;
	virtual AndroidCXX::android_view_View * onCreatePanelView(int const& arg0) ;
	virtual bool  onCreateThumbnail(AndroidCXX::android_graphics_Bitmap const& arg0,AndroidCXX::android_graphics_Canvas const& arg1) ;
	virtual AndroidCXX::android_view_View * onCreateView(AndroidCXX::android_view_View const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_content_Context const& arg2,AndroidCXX::android_util_AttributeSet const& arg3) ;
	virtual AndroidCXX::android_view_View * onCreateView(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_content_Context const& arg1,AndroidCXX::android_util_AttributeSet const& arg2) ;
	virtual void  onDetachedFromWindow() ;
	virtual bool  onGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyLongPress(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyMultiple(int const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2) ;
	virtual bool  onKeyShortcut(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual void  onLowMemory() ;
	virtual bool  onMenuItemSelected(int const& arg0,AndroidCXX::android_view_MenuItem const& arg1) ;
	virtual bool  onMenuOpened(int const& arg0,AndroidCXX::android_view_Menu const& arg1) ;
	virtual bool  onNavigateUpFromChild(AndroidCXX::android_app_Activity const& arg0) ;
	virtual bool  onNavigateUp() ;
	virtual bool  onOptionsItemSelected(AndroidCXX::android_view_MenuItem const& arg0) ;
	virtual void  onOptionsMenuClosed(AndroidCXX::android_view_Menu const& arg0) ;
	virtual void  onPanelClosed(int const& arg0,AndroidCXX::android_view_Menu const& arg1) ;
	virtual void  onPrepareNavigateUpTaskStack(AndroidCXX::android_app_TaskStackBuilder const& arg0) ;
	virtual bool  onPrepareOptionsMenu(AndroidCXX::android_view_Menu const& arg0) ;
	virtual bool  onPreparePanel(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_Menu const& arg2) ;
	virtual void  onProvideAssistData(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual AndroidCXX::java_lang_Object * onRetainNonConfigurationInstance() ;
	virtual bool  onSearchRequested() ;
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  onTrimMemory(int const& arg0) ;
	virtual void  onUserInteraction() ;
	virtual void  onWindowAttributesChanged(AndroidCXX::android_view_WindowManager_LayoutParams const& arg0) ;
	virtual void  onWindowFocusChanged(bool const& arg0) ;
	virtual AndroidCXX::android_view_ActionMode * onWindowStartingActionMode(AndroidCXX::android_view_ActionMode_Callback const& arg0) ;
	virtual void  openContextMenu(AndroidCXX::android_view_View const& arg0) ;
	virtual void  openOptionsMenu() ;
	virtual void  overridePendingTransition(int const& arg0,int const& arg1) ;
	virtual void  recreate() ;
	virtual void  registerForContextMenu(AndroidCXX::android_view_View const& arg0) ;
	virtual void  removeDialog(int const& arg0) ;
	virtual bool  requestWindowFeature(int const& arg0) ;
	virtual void  runOnUiThread(AndroidCXX::java_lang_Runnable const& arg0) ;
	virtual void  setContentView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg1) ;
	virtual void  setContentView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setContentView(int const& arg0) ;
	virtual void  setDefaultKeyMode(int const& arg0) ;
	virtual void  setFeatureDrawableAlpha(int const& arg0,int const& arg1) ;
	virtual void  setFeatureDrawable(int const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1) ;
	virtual void  setFeatureDrawableResource(int const& arg0,int const& arg1) ;
	virtual void  setFeatureDrawableUri(int const& arg0,AndroidCXX::android_net_Uri const& arg1) ;
	virtual void  setFinishOnTouchOutside(bool const& arg0) ;
	virtual void  setImmersive(bool const& arg0) ;
	virtual void  setIntent(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  setProgressBarIndeterminate(bool const& arg0) ;
	virtual void  setProgressBarIndeterminateVisibility(bool const& arg0) ;
	virtual void  setProgressBarVisibility(bool const& arg0) ;
	virtual void  setProgress(int const& arg0) ;
	virtual void  setRequestedOrientation(int const& arg0) ;
	virtual void  setResult(int const& arg0,AndroidCXX::android_content_Intent const& arg1) ;
	virtual void  setResult(int const& arg0) ;
	virtual void  setSecondaryProgress(int const& arg0) ;
	virtual void  setTitleColor(int const& arg0) ;
	virtual void  setTitle(int const& arg0) ;
	virtual void  setTitle(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setVisible(bool const& arg0) ;
	virtual void  setVolumeControlStream(int const& arg0) ;
	virtual bool  shouldUpRecreateTask(AndroidCXX::android_content_Intent const& arg0) ;
	virtual bool  showDialog(int const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  showDialog(int const& arg0) ;
	virtual AndroidCXX::android_view_ActionMode * startActionMode(AndroidCXX::android_view_ActionMode_Callback const& arg0) ;
	virtual void  startActivities(std::vector<android_content_Intent> const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  startActivities(std::vector<android_content_Intent> const& arg0) ;
	virtual void  startActivityForResult(AndroidCXX::android_content_Intent const& arg0,int const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  startActivityForResult(AndroidCXX::android_content_Intent const& arg0,int const& arg1) ;
	virtual void  startActivityFromChild(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2,AndroidCXX::android_os_Bundle const& arg3) ;
	virtual void  startActivityFromChild(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2) ;
	virtual void  startActivityFromFragment(AndroidCXX::android_app_Fragment const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2,AndroidCXX::android_os_Bundle const& arg3) ;
	virtual void  startActivityFromFragment(AndroidCXX::android_app_Fragment const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2) ;
	virtual bool  startActivityIfNeeded(AndroidCXX::android_content_Intent const& arg0,int const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual bool  startActivityIfNeeded(AndroidCXX::android_content_Intent const& arg0,int const& arg1) ;
	virtual void  startActivity(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  startActivity(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  startIntentSenderForResult(AndroidCXX::android_content_IntentSender const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2,int const& arg3,int const& arg4,int const& arg5,AndroidCXX::android_os_Bundle const& arg6) ;
	virtual void  startIntentSenderForResult(AndroidCXX::android_content_IntentSender const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2,int const& arg3,int const& arg4,int const& arg5) ;
	virtual void  startIntentSenderFromChild(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_content_IntentSender const& arg1,int const& arg2,AndroidCXX::android_content_Intent const& arg3,int const& arg4,int const& arg5,int const& arg6,AndroidCXX::android_os_Bundle const& arg7) ;
	virtual void  startIntentSenderFromChild(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_content_IntentSender const& arg1,int const& arg2,AndroidCXX::android_content_Intent const& arg3,int const& arg4,int const& arg5,int const& arg6) ;
	virtual void  startIntentSender(AndroidCXX::android_content_IntentSender const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2,int const& arg3,int const& arg4,AndroidCXX::android_os_Bundle const& arg5) ;
	virtual void  startIntentSender(AndroidCXX::android_content_IntentSender const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2,int const& arg3,int const& arg4) ;
	virtual void  startManagingCursor(AndroidCXX::android_database_Cursor const& arg0) ;
	virtual bool  startNextMatchingActivity(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual bool  startNextMatchingActivity(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  startSearch(AndroidCXX::java_lang_String const& arg0,bool const& arg1,AndroidCXX::android_os_Bundle const& arg2,bool const& arg3) ;
	virtual void  stopManagingCursor(AndroidCXX::android_database_Cursor const& arg0) ;
	virtual void  takeKeyEvents(bool const& arg0) ;
	virtual void  triggerSearch(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  unregisterForContextMenu(AndroidCXX::android_view_View const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Activity