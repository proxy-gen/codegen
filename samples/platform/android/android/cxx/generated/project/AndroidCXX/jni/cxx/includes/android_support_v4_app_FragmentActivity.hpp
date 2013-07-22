/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
	
	
	
	



























// Generated Code 

#ifndef _android_support_v4_app_FragmentActivity
#define _android_support_v4_app_FragmentActivity
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_io_PrintWriter.hpp>

#include <android_content_Intent.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_view_View.hpp>

#include <android_content_res_Configuration.hpp>

#include <android_support_v4_app_Fragment.hpp>

#include <android_view_Menu.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_MenuItem.hpp>

#include <java_lang_Object.hpp>

#include <android_support_v4_app_FragmentManager.hpp>

#include <android_support_v4_app_LoaderManager.hpp>

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

// Forward Declarations

class java_lang_String;

class java_io_FileDescriptor;

class java_io_PrintWriter;

class android_content_Intent;

class android_content_Context;

class android_util_AttributeSet;

class android_view_View;

class android_content_res_Configuration;

class android_support_v4_app_Fragment;

class android_view_Menu;

class android_view_KeyEvent;

class android_view_MenuItem;

class java_lang_Object;

class android_support_v4_app_FragmentManager;

class android_support_v4_app_LoaderManager;

class android_support_v4_app_FragmentActivity
{
public:

	android_support_v4_app_FragmentActivity(const android_support_v4_app_FragmentActivity& cc);
	android_support_v4_app_FragmentActivity(void * proxy);
	// Public Constructors
	android_support_v4_app_FragmentActivity();
	// Default Destructor
	virtual ~android_support_v4_app_FragmentActivity();
	// Functions
	 void dump(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_io_FileDescriptor& arg1,AndroidCXX::java_io_PrintWriter& arg2,std::vector<java_lang_String >& arg3);
	 void startActivityForResult(AndroidCXX::android_content_Intent& arg0,int& arg1);
	 AndroidCXX::android_view_View onCreateView(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_content_Context& arg1,AndroidCXX::android_util_AttributeSet& arg2);
	 void onConfigurationChanged(AndroidCXX::android_content_res_Configuration& arg0);
	 void onLowMemory();
	 void supportInvalidateOptionsMenu();
	 void startActivityFromFragment(AndroidCXX::android_support_v4_app_Fragment& arg0,AndroidCXX::android_content_Intent& arg1,int& arg2);
	 void onAttachFragment(AndroidCXX::android_support_v4_app_Fragment& arg0);
	 void onBackPressed();
	 bool onCreatePanelMenu(int& arg0,AndroidCXX::android_view_Menu& arg1);
	 bool onKeyDown(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onMenuItemSelected(int& arg0,AndroidCXX::android_view_MenuItem& arg1);
	 void onPanelClosed(int& arg0,AndroidCXX::android_view_Menu& arg1);
	 bool onPreparePanel(int& arg0,AndroidCXX::android_view_View& arg1,AndroidCXX::android_view_Menu& arg2);
	 AndroidCXX::java_lang_Object onRetainNonConfigurationInstance();
	 AndroidCXX::java_lang_Object onRetainCustomNonConfigurationInstance();
	 AndroidCXX::java_lang_Object getLastCustomNonConfigurationInstance();
	 AndroidCXX::android_support_v4_app_FragmentManager getSupportFragmentManager();
	 AndroidCXX::android_support_v4_app_LoaderManager getSupportLoaderManager();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_FragmentActivity