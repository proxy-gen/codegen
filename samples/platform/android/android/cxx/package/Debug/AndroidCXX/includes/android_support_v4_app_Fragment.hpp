/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_String.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_io_PrintWriter.hpp>

#include <java_lang_Object.hpp>

#include <android_support_v4_app_FragmentActivity.hpp>

#include <android_os_Bundle.hpp>

#include <android_support_v4_app_FragmentManager.hpp>

#include <android_view_LayoutInflater.hpp>

#include <android_support_v4_app_LoaderManager.hpp>

#include <android_content_res_Resources.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_view_View.hpp>

#include <android_content_Context.hpp>

#include <android_content_Intent.hpp>

#include <android_app_Activity.hpp>

#include <android_content_res_Configuration.hpp>

#include <android_view_MenuItem.hpp>

#include <android_view_animation_Animation.hpp>

#include <android_view_ContextMenu.hpp>

#include <android_view_ContextMenu_ContextMenuInfo.hpp>

#include <android_view_Menu.hpp>

#include <android_view_MenuInflater.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_support_v4_app_Fragment_SavedState.hpp>


#include <android_content_ComponentCallbacks.hpp>

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

class java_lang_String;

class java_io_FileDescriptor;

class java_io_PrintWriter;

class java_lang_Object;

class android_support_v4_app_FragmentActivity;

class android_os_Bundle;

class android_support_v4_app_FragmentManager;

class android_view_LayoutInflater;

class android_support_v4_app_LoaderManager;


class android_content_res_Resources;

class java_lang_CharSequence;

class android_view_View;

class android_content_Context;

class android_content_Intent;

class android_app_Activity;

class android_content_res_Configuration;

class android_view_MenuItem;

class android_view_animation_Animation;

class android_view_ContextMenu;

class android_view_ContextMenu_ContextMenuInfo;

class android_view_Menu;

class android_view_MenuInflater;

class android_view_ViewGroup;

class android_util_AttributeSet;

class android_support_v4_app_Fragment_SavedState;

class android_support_v4_app_Fragment : public AndroidCXX::android_content_ComponentCallbacks,public AndroidCXX::android_view_View_OnCreateContextMenuListener
{
public:

	// Public Constructor
	android_support_v4_app_Fragment(Proxy * aProxy = new Proxy());
	android_support_v4_app_Fragment(const android_support_v4_app_Fragment& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_support_v4_app_Fragment();
	// Functions
	virtual void  dump(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_FileDescriptor const& arg1,AndroidCXX::java_io_PrintWriter const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_FragmentActivity * getActivity() ;
	virtual AndroidCXX::android_os_Bundle * getArguments() ;
	virtual AndroidCXX::android_support_v4_app_FragmentManager * getChildFragmentManager() ;
	virtual AndroidCXX::android_support_v4_app_FragmentManager * getFragmentManager() ;
	virtual int  getId() ;
	virtual AndroidCXX::android_view_LayoutInflater * getLayoutInflater(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_LoaderManager * getLoaderManager() ;
	virtual AndroidCXX::android_support_v4_app_Fragment * getParentFragment() ;
	virtual AndroidCXX::android_content_res_Resources * getResources() ;
	virtual bool  getRetainInstance() ;
	virtual AndroidCXX::java_lang_String * getString(int const& arg0,std::vector<AndroidCXX::java_lang_Object> const& arg1) ;
	virtual AndroidCXX::java_lang_String * getString(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getTag() ;
	virtual AndroidCXX::android_support_v4_app_Fragment * getTargetFragment() ;
	virtual int  getTargetRequestCode() ;
	virtual AndroidCXX::java_lang_CharSequence * getText(int const& arg0) ;
	virtual bool  getUserVisibleHint() ;
	virtual AndroidCXX::android_view_View * getView() ;
	virtual bool  hasOptionsMenu() ;
	virtual int  hashCode() ;
	static AndroidCXX::android_support_v4_app_Fragment * instantiate(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	static AndroidCXX::android_support_v4_app_Fragment * instantiate(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual bool  isAdded() ;
	virtual bool  isDetached() ;
	virtual bool  isHidden() ;
	virtual bool  isInLayout() ;
	virtual bool  isMenuVisible() ;
	virtual bool  isRemoving() ;
	virtual bool  isResumed() ;
	virtual bool  isVisible() ;
	virtual void  onActivityCreated(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  onActivityResult(int const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2) ;
	virtual void  onAttach(AndroidCXX::android_app_Activity const& arg0) ;
	virtual void  onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual bool  onContextItemSelected(AndroidCXX::android_view_MenuItem const& arg0) ;
	virtual AndroidCXX::android_view_animation_Animation * onCreateAnimation(int const& arg0,bool const& arg1,int const& arg2) ;
	virtual void  onCreateContextMenu(AndroidCXX::android_view_ContextMenu const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ContextMenu_ContextMenuInfo const& arg2) ;
	virtual void  onCreateOptionsMenu(AndroidCXX::android_view_Menu const& arg0,AndroidCXX::android_view_MenuInflater const& arg1) ;
	virtual void  onCreate(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual AndroidCXX::android_view_View * onCreateView(AndroidCXX::android_view_LayoutInflater const& arg0,AndroidCXX::android_view_ViewGroup const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  onDestroyOptionsMenu() ;
	virtual void  onDestroy() ;
	virtual void  onDestroyView() ;
	virtual void  onDetach() ;
	virtual void  onHiddenChanged(bool const& arg0) ;
	virtual void  onInflate(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  onLowMemory() ;
	virtual bool  onOptionsItemSelected(AndroidCXX::android_view_MenuItem const& arg0) ;
	virtual void  onOptionsMenuClosed(AndroidCXX::android_view_Menu const& arg0) ;
	virtual void  onPause() ;
	virtual void  onPrepareOptionsMenu(AndroidCXX::android_view_Menu const& arg0) ;
	virtual void  onResume() ;
	virtual void  onSaveInstanceState(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  onStart() ;
	virtual void  onStop() ;
	virtual void  onViewCreated(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  onViewStateRestored(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  registerForContextMenu(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setArguments(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  setHasOptionsMenu(bool const& arg0) ;
	virtual void  setInitialSavedState(AndroidCXX::android_support_v4_app_Fragment_SavedState const& arg0) ;
	virtual void  setMenuVisibility(bool const& arg0) ;
	virtual void  setRetainInstance(bool const& arg0) ;
	virtual void  setTargetFragment(AndroidCXX::android_support_v4_app_Fragment const& arg0,int const& arg1) ;
	virtual void  setUserVisibleHint(bool const& arg0) ;
	virtual void  startActivityForResult(AndroidCXX::android_content_Intent const& arg0,int const& arg1) ;
	virtual void  startActivity(AndroidCXX::android_content_Intent const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  unregisterForContextMenu(AndroidCXX::android_view_View const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_Fragment