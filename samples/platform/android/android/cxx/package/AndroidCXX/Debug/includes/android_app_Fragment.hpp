/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
 	
	
 		 
	
	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
 		 
	
	
	
	
	
	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
















































































// Generated Code 

#ifndef _android_app_Fragment
#define _android_app_Fragment
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <android_content_res_Resources.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_io_PrintWriter.hpp>

#include <android_content_Context.hpp>

#include <android_os_Bundle.hpp>


#include <android_app_Fragment_SavedState.hpp>

#include <android_app_Activity.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_app_FragmentManager.hpp>

#include <android_app_LoaderManager.hpp>

#include <android_content_Intent.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_view_LayoutInflater.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_view_View.hpp>

#include <android_content_res_Configuration.hpp>

#include <android_view_Menu.hpp>

#include <android_view_MenuInflater.hpp>

#include <android_view_MenuItem.hpp>

#include <android_view_ContextMenu.hpp>

#include <android_view_ContextMenu_ContextMenuInfo.hpp>

#include <android_animation_Animator.hpp>

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

class java_lang_Object;

class java_lang_String;

class android_content_res_Resources;

class java_io_FileDescriptor;

class java_io_PrintWriter;

class android_content_Context;

class android_os_Bundle;

class android_app_Fragment;

class android_app_Fragment_SavedState;

class android_app_Activity;

class java_lang_CharSequence;

class android_app_FragmentManager;

class android_app_LoaderManager;

class android_content_Intent;

class android_util_AttributeSet;

class android_view_LayoutInflater;

class android_view_ViewGroup;

class android_view_View;

class android_content_res_Configuration;

class android_view_Menu;

class android_view_MenuInflater;

class android_view_MenuItem;

class android_view_ContextMenu;

class android_view_ContextMenu_ContextMenuInfo;

class android_animation_Animator;

class android_app_Fragment
{
public:

	android_app_Fragment(const android_app_Fragment& cc);
	android_app_Fragment(Proxy proxy);
	// Public Constructors
	android_app_Fragment();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_Fragment();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::android_content_res_Resources getResources();
	 int getId();
	 bool isHidden();
	 AndroidCXX::java_lang_String getString(int const& arg0,std::vector<AndroidCXX::java_lang_Object > const& arg1);
	 AndroidCXX::java_lang_String getString(int const& arg0);
	 AndroidCXX::java_lang_String getTag();
	 void dump(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_FileDescriptor const& arg1,AndroidCXX::java_io_PrintWriter const& arg2,std::vector<AndroidCXX::java_lang_String > const& arg3);
	static AndroidCXX::android_app_Fragment instantiate(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	static AndroidCXX::android_app_Fragment instantiate(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1);
	 void setArguments(AndroidCXX::android_os_Bundle const& arg0);
	 AndroidCXX::android_os_Bundle getArguments();
	 void setInitialSavedState(AndroidCXX::android_app_Fragment_SavedState const& arg0);
	 void setTargetFragment(AndroidCXX::android_app_Fragment const& arg0,int const& arg1);
	 AndroidCXX::android_app_Fragment getTargetFragment();
	 int getTargetRequestCode();
	 AndroidCXX::android_app_Activity getActivity();
	 AndroidCXX::java_lang_CharSequence getText(int const& arg0);
	 AndroidCXX::android_app_FragmentManager getFragmentManager();
	 AndroidCXX::android_app_FragmentManager getChildFragmentManager();
	 AndroidCXX::android_app_Fragment getParentFragment();
	 bool isAdded();
	 bool isDetached();
	 bool isRemoving();
	 bool isInLayout();
	 bool isResumed();
	 bool isVisible();
	 void onHiddenChanged(bool const& arg0);
	 void setRetainInstance(bool const& arg0);
	 bool getRetainInstance();
	 void setHasOptionsMenu(bool const& arg0);
	 void setMenuVisibility(bool const& arg0);
	 void setUserVisibleHint(bool const& arg0);
	 bool getUserVisibleHint();
	 AndroidCXX::android_app_LoaderManager getLoaderManager();
	 void startActivity(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void startActivity(AndroidCXX::android_content_Intent const& arg0);
	 void startActivityForResult(AndroidCXX::android_content_Intent const& arg0,int const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	 void startActivityForResult(AndroidCXX::android_content_Intent const& arg0,int const& arg1);
	 void onActivityResult(int const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2);
	 void onInflate(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	 void onInflate(AndroidCXX::android_util_AttributeSet const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void onAttach(AndroidCXX::android_app_Activity const& arg0);
	 void onCreate(AndroidCXX::android_os_Bundle const& arg0);
	 AndroidCXX::android_view_View onCreateView(AndroidCXX::android_view_LayoutInflater const& arg0,AndroidCXX::android_view_ViewGroup const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	 void onViewCreated(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 AndroidCXX::android_view_View getView();
	 void onActivityCreated(AndroidCXX::android_os_Bundle const& arg0);
	 void onViewStateRestored(AndroidCXX::android_os_Bundle const& arg0);
	 void onStart();
	 void onResume();
	 void onSaveInstanceState(AndroidCXX::android_os_Bundle const& arg0);
	 void onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0);
	 void onPause();
	 void onStop();
	 void onLowMemory();
	 void onDestroyView();
	 void onDestroy();
	 void onDetach();
	 void onCreateOptionsMenu(AndroidCXX::android_view_Menu const& arg0,AndroidCXX::android_view_MenuInflater const& arg1);
	 void onPrepareOptionsMenu(AndroidCXX::android_view_Menu const& arg0);
	 void onDestroyOptionsMenu();
	 bool onOptionsItemSelected(AndroidCXX::android_view_MenuItem const& arg0);
	 void onOptionsMenuClosed(AndroidCXX::android_view_Menu const& arg0);
	 void onCreateContextMenu(AndroidCXX::android_view_ContextMenu const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ContextMenu_ContextMenuInfo const& arg2);
	 void registerForContextMenu(AndroidCXX::android_view_View const& arg0);
	 void unregisterForContextMenu(AndroidCXX::android_view_View const& arg0);
	 bool onContextItemSelected(AndroidCXX::android_view_MenuItem const& arg0);
	 void onTrimMemory(int const& arg0);
	 AndroidCXX::android_animation_Animator onCreateAnimator(int const& arg0,bool const& arg1,int const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Fragment