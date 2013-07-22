/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
 	
	
 		 
	
	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
 		 
	
	
	
	
	
	
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 













































































// Generated Code 

#ifndef _android_support_v4_app_Fragment
#define _android_support_v4_app_Fragment
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


#include <android_support_v4_app_Fragment_SavedState.hpp>

#include <android_support_v4_app_FragmentActivity.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_support_v4_app_FragmentManager.hpp>

#include <android_support_v4_app_LoaderManager.hpp>

#include <android_content_Intent.hpp>

#include <android_view_LayoutInflater.hpp>

#include <android_app_Activity.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_view_animation_Animation.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_view_View.hpp>

#include <android_content_res_Configuration.hpp>

#include <android_view_Menu.hpp>

#include <android_view_MenuInflater.hpp>

#include <android_view_MenuItem.hpp>

#include <android_view_ContextMenu.hpp>

#include <android_view_ContextMenu_ContextMenuInfo.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class android_content_res_Resources;

class java_io_FileDescriptor;

class java_io_PrintWriter;

class android_content_Context;

class android_os_Bundle;

class android_support_v4_app_Fragment;

class android_support_v4_app_Fragment_SavedState;

class android_support_v4_app_FragmentActivity;

class java_lang_CharSequence;

class android_support_v4_app_FragmentManager;

class android_support_v4_app_LoaderManager;

class android_content_Intent;

class android_view_LayoutInflater;

class android_app_Activity;

class android_util_AttributeSet;

class android_view_animation_Animation;

class android_view_ViewGroup;

class android_view_View;

class android_content_res_Configuration;

class android_view_Menu;

class android_view_MenuInflater;

class android_view_MenuItem;

class android_view_ContextMenu;

class android_view_ContextMenu_ContextMenuInfo;

class android_support_v4_app_Fragment
{
public:

	android_support_v4_app_Fragment(const android_support_v4_app_Fragment& cc);
	android_support_v4_app_Fragment(void * proxy);
	// Public Constructors
	android_support_v4_app_Fragment();
	// Default Destructor
	virtual ~android_support_v4_app_Fragment();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::android_content_res_Resources getResources();
	 int getId();
	 bool isHidden();
	 AndroidCXX::java_lang_String getString(int& arg0,std::vector<java_lang_Object >& arg1);
	 AndroidCXX::java_lang_String getString(int& arg0);
	 AndroidCXX::java_lang_String getTag();
	 void dump(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_io_FileDescriptor& arg1,AndroidCXX::java_io_PrintWriter& arg2,std::vector<java_lang_String >& arg3);
	static AndroidCXX::android_support_v4_app_Fragment instantiate(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2);
	static AndroidCXX::android_support_v4_app_Fragment instantiate(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_String& arg1);
	 void setArguments(AndroidCXX::android_os_Bundle& arg0);
	 AndroidCXX::android_os_Bundle getArguments();
	 void setInitialSavedState(AndroidCXX::android_support_v4_app_Fragment_SavedState& arg0);
	 void setTargetFragment(AndroidCXX::android_support_v4_app_Fragment& arg0,int& arg1);
	 AndroidCXX::android_support_v4_app_Fragment getTargetFragment();
	 int getTargetRequestCode();
	 AndroidCXX::android_support_v4_app_FragmentActivity getActivity();
	 AndroidCXX::java_lang_CharSequence getText(int& arg0);
	 AndroidCXX::android_support_v4_app_FragmentManager getFragmentManager();
	 AndroidCXX::android_support_v4_app_FragmentManager getChildFragmentManager();
	 AndroidCXX::android_support_v4_app_Fragment getParentFragment();
	 bool isAdded();
	 bool isDetached();
	 bool isRemoving();
	 bool isInLayout();
	 bool isResumed();
	 bool isVisible();
	 void onHiddenChanged(bool& arg0);
	 void setRetainInstance(bool& arg0);
	 bool getRetainInstance();
	 void setHasOptionsMenu(bool& arg0);
	 void setMenuVisibility(bool& arg0);
	 void setUserVisibleHint(bool& arg0);
	 bool getUserVisibleHint();
	 AndroidCXX::android_support_v4_app_LoaderManager getLoaderManager();
	 void startActivity(AndroidCXX::android_content_Intent& arg0);
	 void startActivityForResult(AndroidCXX::android_content_Intent& arg0,int& arg1);
	 void onActivityResult(int& arg0,int& arg1,AndroidCXX::android_content_Intent& arg2);
	 AndroidCXX::android_view_LayoutInflater getLayoutInflater(AndroidCXX::android_os_Bundle& arg0);
	 void onInflate(AndroidCXX::android_app_Activity& arg0,AndroidCXX::android_util_AttributeSet& arg1,AndroidCXX::android_os_Bundle& arg2);
	 void onAttach(AndroidCXX::android_app_Activity& arg0);
	 AndroidCXX::android_view_animation_Animation onCreateAnimation(int& arg0,bool& arg1,int& arg2);
	 void onCreate(AndroidCXX::android_os_Bundle& arg0);
	 AndroidCXX::android_view_View onCreateView(AndroidCXX::android_view_LayoutInflater& arg0,AndroidCXX::android_view_ViewGroup& arg1,AndroidCXX::android_os_Bundle& arg2);
	 void onViewCreated(AndroidCXX::android_view_View& arg0,AndroidCXX::android_os_Bundle& arg1);
	 AndroidCXX::android_view_View getView();
	 void onActivityCreated(AndroidCXX::android_os_Bundle& arg0);
	 void onViewStateRestored(AndroidCXX::android_os_Bundle& arg0);
	 void onStart();
	 void onResume();
	 void onSaveInstanceState(AndroidCXX::android_os_Bundle& arg0);
	 void onConfigurationChanged(AndroidCXX::android_content_res_Configuration& arg0);
	 void onPause();
	 void onStop();
	 void onLowMemory();
	 void onDestroyView();
	 void onDestroy();
	 void onDetach();
	 void onCreateOptionsMenu(AndroidCXX::android_view_Menu& arg0,AndroidCXX::android_view_MenuInflater& arg1);
	 void onPrepareOptionsMenu(AndroidCXX::android_view_Menu& arg0);
	 void onDestroyOptionsMenu();
	 bool onOptionsItemSelected(AndroidCXX::android_view_MenuItem& arg0);
	 void onOptionsMenuClosed(AndroidCXX::android_view_Menu& arg0);
	 void onCreateContextMenu(AndroidCXX::android_view_ContextMenu& arg0,AndroidCXX::android_view_View& arg1,AndroidCXX::android_view_ContextMenu_ContextMenuInfo& arg2);
	 void registerForContextMenu(AndroidCXX::android_view_View& arg0);
	 void unregisterForContextMenu(AndroidCXX::android_view_View& arg0);
	 bool onContextItemSelected(AndroidCXX::android_view_MenuItem& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_Fragment