/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
		
		
 			
 			
 			
 			
 			
 			
		
 			
		
 			
 			
		
		
		
		
		
		
		
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
		
 			
 			
		
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
		


#ifndef _android_app_Fragment
#define _android_app_Fragment





































































#include <android_os_Bundle.hpp>
#include <android_util_AttributeSet.hpp>
#include <android_content_Intent.hpp>
#include <android_content_res_Resources.hpp>
#include <android_app_FragmentManager.hpp>
#include <java_io_PrintWriter.hpp>
#include <java_lang_Object.hpp>
#include <android_view_MenuItem.hpp>
#include <android_view_MenuInflater.hpp>
#include <android_app_Fragment_SavedState.hpp>
#include <android_view_Menu.hpp>
#include <android_animation_Animator.hpp>
#include <java_lang_CharSequence.hpp>
#include <android_view_ContextMenu.hpp>
#include <android_content_Context.hpp>
#include <android_view_LayoutInflater.hpp>
#include <android_app_LoaderManager.hpp>
#include <android_view_ViewGroup.hpp>
#include <android_view_ContextMenu_ContextMenuInfo.hpp>
#include <android_app_Activity.hpp>
#include <android_content_res_Configuration.hpp>
#include <android_view_View.hpp>
#include <java_io_FileDescriptor.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_app_Fragment
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 android_content_res_Resources getResources();
 int getId();
 bool isHidden();
 java_lang_String getString(int& arg0,std::vector<long>& arg1);
 java_lang_String getTag();
 void dump(java_lang_String& arg0,java_io_FileDescriptor& arg1,java_io_PrintWriter& arg2,std::vector<long>& arg3);
static android_app_Fragment instantiate(android_content_Context& arg0,java_lang_String& arg1,android_os_Bundle& arg2);
 void setArguments(android_os_Bundle& arg0);
 android_os_Bundle getArguments();
 void setInitialSavedState(android_app_Fragment_SavedState& arg0);
 void setTargetFragment(android_app_Fragment& arg0,int& arg1);
 android_app_Fragment getTargetFragment();
 int getTargetRequestCode();
 android_app_Activity getActivity();
 java_lang_CharSequence getText(int& arg0);
 android_app_FragmentManager getFragmentManager();
 android_app_FragmentManager getChildFragmentManager();
 android_app_Fragment getParentFragment();
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
 android_app_LoaderManager getLoaderManager();
 void startActivity(android_content_Intent& arg0,android_os_Bundle& arg1);
 void startActivityForResult(android_content_Intent& arg0,int& arg1,android_os_Bundle& arg2);
 void onActivityResult(int& arg0,android_content_Intent& arg1);
 void onInflate(android_app_Activity& arg0,android_util_AttributeSet& arg1,android_os_Bundle& arg2);
 void onAttach(android_app_Activity& arg0);
 void onCreate(android_os_Bundle& arg0);
 android_view_View onCreateView(android_view_LayoutInflater& arg0,android_view_ViewGroup& arg1,android_os_Bundle& arg2);
 void onViewCreated(android_view_View& arg0,android_os_Bundle& arg1);
 android_view_View getView();
 void onActivityCreated(android_os_Bundle& arg0);
 void onViewStateRestored(android_os_Bundle& arg0);
 void onStart();
 void onResume();
 void onSaveInstanceState(android_os_Bundle& arg0);
 void onConfigurationChanged(android_content_res_Configuration& arg0);
 void onPause();
 void onStop();
 void onLowMemory();
 void onDestroyView();
 void onDestroy();
 void onDetach();
 void onCreateOptionsMenu(android_view_Menu& arg0,android_view_MenuInflater& arg1);
 void onPrepareOptionsMenu(android_view_Menu& arg0);
 void onDestroyOptionsMenu();
 bool onOptionsItemSelected(android_view_MenuItem& arg0);
 void onOptionsMenuClosed(android_view_Menu& arg0);
 void onCreateContextMenu(android_view_ContextMenu& arg0,android_view_View& arg1,android_view_ContextMenu_ContextMenuInfo& arg2);
 void registerForContextMenu(android_view_View& arg0);
 void unregisterForContextMenu(android_view_View& arg0);
 bool onContextItemSelected(android_view_MenuItem& arg0);
 void onTrimMemory(int& arg0);
 android_animation_Animator onCreateAnimator(int& arg0,bool& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Fragment