/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_content_res_Configuration.hpp>

#include <android_view_ContextMenu.hpp>

#include <android_view_View.hpp>

#include <android_view_ContextMenu_ContextMenuInfo.hpp>

#include <android_os_Bundle.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_io_PrintWriter.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_content_Intent.hpp>

#include <android_app_Activity.hpp>

#include <android_app_LoaderManager.hpp>

#include <android_app_FragmentManager.hpp>

#include <android_view_Menu.hpp>

#include <android_view_MenuInflater.hpp>

#include <android_view_MenuItem.hpp>

#include <android_view_LayoutInflater.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_content_Context.hpp>

#include <android_app_Fragment_SavedState.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_animation_Animator.hpp>


#include <android_content_ComponentCallbacks2.hpp>

#include <android_view_View_OnCreateContextMenuListener.hpp>

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

class android_content_res_Configuration;

class android_view_ContextMenu;

class android_view_View;

class android_view_ContextMenu_ContextMenuInfo;

class android_os_Bundle;

class java_io_FileDescriptor;

class java_io_PrintWriter;

class java_lang_CharSequence;

class android_content_Intent;

class android_app_Activity;

class android_app_LoaderManager;

class android_app_FragmentManager;

class android_view_Menu;

class android_view_MenuInflater;

class android_view_MenuItem;

class android_view_LayoutInflater;

class android_view_ViewGroup;

class android_content_Context;


class android_app_Fragment_SavedState;

class android_util_AttributeSet;

class android_animation_Animator;

class android_app_Fragment : public android_content_ComponentCallbacks2,public android_view_View_OnCreateContextMenuListener
{
public:

	// Public ConstrucXXX
	android_app_Fragment();
	android_app_Fragment(const android_app_Fragment& cc);
	android_app_Fragment(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_Fragment();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual AndroidCXX::android_content_res_Resources * getResources() ;
	virtual int  getId() ;
	virtual bool  isHidden() ;
	virtual AndroidCXX::java_lang_String * getString(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getString(int const& arg0,std::vector<java_lang_Object> const& arg1) ;
	virtual AndroidCXX::java_lang_String * getTag() ;
	virtual void  onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual void  onCreateContextMenu(AndroidCXX::android_view_ContextMenu const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ContextMenu_ContextMenuInfo const& arg2) ;
	virtual void  onSaveInstanceState(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual bool  isInLayout() ;
	virtual void  dump(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_FileDescriptor const& arg1,AndroidCXX::java_io_PrintWriter const& arg2,std::vector<java_lang_String> const& arg3) ;
	virtual AndroidCXX::java_lang_CharSequence * getText(int const& arg0) ;
	virtual void  startActivity(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  startActivity(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual bool  isVisible() ;
	virtual void  onCreate(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  onLowMemory() ;
	virtual void  onTrimMemory(int const& arg0) ;
	virtual AndroidCXX::android_view_View * getView() ;
	virtual AndroidCXX::android_app_Activity * getActivity() ;
	virtual AndroidCXX::android_app_LoaderManager * getLoaderManager() ;
	virtual void  onStart() ;
	virtual void  onResume() ;
	virtual void  onPause() ;
	virtual void  onStop() ;
	virtual void  onDestroy() ;
	virtual AndroidCXX::android_app_FragmentManager * getFragmentManager() ;
	virtual void  onCreateOptionsMenu(AndroidCXX::android_view_Menu const& arg0,AndroidCXX::android_view_MenuInflater const& arg1) ;
	virtual void  onPrepareOptionsMenu(AndroidCXX::android_view_Menu const& arg0) ;
	virtual bool  onOptionsItemSelected(AndroidCXX::android_view_MenuItem const& arg0) ;
	virtual void  onOptionsMenuClosed(AndroidCXX::android_view_Menu const& arg0) ;
	virtual void  registerForContextMenu(AndroidCXX::android_view_View const& arg0) ;
	virtual void  unregisterForContextMenu(AndroidCXX::android_view_View const& arg0) ;
	virtual bool  onContextItemSelected(AndroidCXX::android_view_MenuItem const& arg0) ;
	virtual void  startActivityForResult(AndroidCXX::android_content_Intent const& arg0,int const& arg1) ;
	virtual void  startActivityForResult(AndroidCXX::android_content_Intent const& arg0,int const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  onActivityResult(int const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2) ;
	virtual AndroidCXX::android_view_View * onCreateView(AndroidCXX::android_view_LayoutInflater const& arg0,AndroidCXX::android_view_ViewGroup const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	static AndroidCXX::android_app_Fragment * instantiate(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	static AndroidCXX::android_app_Fragment * instantiate(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  setArguments(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual AndroidCXX::android_os_Bundle * getArguments() ;
	virtual void  setInitialSavedState(AndroidCXX::android_app_Fragment_SavedState const& arg0) ;
	virtual void  setTargetFragment(AndroidCXX::android_app_Fragment const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_app_Fragment * getTargetFragment() ;
	virtual int  getTargetRequestCode() ;
	virtual AndroidCXX::android_app_FragmentManager * getChildFragmentManager() ;
	virtual AndroidCXX::android_app_Fragment * getParentFragment() ;
	virtual bool  isAdded() ;
	virtual bool  isDetached() ;
	virtual bool  isRemoving() ;
	virtual bool  isResumed() ;
	virtual void  onHiddenChanged(bool const& arg0) ;
	virtual void  setRetainInstance(bool const& arg0) ;
	virtual bool  getRetainInstance() ;
	virtual void  setHasOptionsMenu(bool const& arg0) ;
	virtual void  setMenuVisibility(bool const& arg0) ;
	virtual void  setUserVisibleHint(bool const& arg0) ;
	virtual bool  getUserVisibleHint() ;
	virtual void  onInflate(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  onInflate(AndroidCXX::android_util_AttributeSet const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  onAttach(AndroidCXX::android_app_Activity const& arg0) ;
	virtual AndroidCXX::android_animation_Animator * onCreateAnimator(int const& arg0,bool const& arg1,int const& arg2) ;
	virtual void  onViewCreated(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  onActivityCreated(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  onViewStateRestored(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  onDestroyView() ;
	virtual void  onDetach() ;
	virtual void  onDestroyOptionsMenu() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Fragment