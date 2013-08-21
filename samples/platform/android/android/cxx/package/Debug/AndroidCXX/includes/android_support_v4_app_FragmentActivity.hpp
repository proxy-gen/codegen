/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <java_lang_Object.hpp>

#include <android_support_v4_app_FragmentManager.hpp>

#include <android_support_v4_app_LoaderManager.hpp>

#include <android_support_v4_app_Fragment.hpp>

#include <android_content_res_Configuration.hpp>

#include <android_view_Menu.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_view_View.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_MenuItem.hpp>

#include <android_content_Intent.hpp>


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


class android_support_v4_app_FragmentManager;

class android_support_v4_app_LoaderManager;

class android_support_v4_app_Fragment;

class android_content_res_Configuration;

class android_view_Menu;

class android_content_Context;

class android_util_AttributeSet;

class android_view_View;

class android_view_KeyEvent;

class android_view_MenuItem;

class android_content_Intent;

class android_support_v4_app_FragmentActivity : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	android_support_v4_app_FragmentActivity();
	android_support_v4_app_FragmentActivity(const android_support_v4_app_FragmentActivity& cc);
	android_support_v4_app_FragmentActivity(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_support_v4_app_FragmentActivity();
	// Functions
	virtual void  dump(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_FileDescriptor const& arg1,AndroidCXX::java_io_PrintWriter const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3) ;
	virtual AndroidCXX::java_lang_Object * getLastCustomNonConfigurationInstance() ;
	virtual AndroidCXX::android_support_v4_app_FragmentManager * getSupportFragmentManager() ;
	virtual AndroidCXX::android_support_v4_app_LoaderManager * getSupportLoaderManager() ;
	virtual void  onAttachFragment(AndroidCXX::android_support_v4_app_Fragment const& arg0) ;
	virtual void  onBackPressed() ;
	virtual void  onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual bool  onCreatePanelMenu(int const& arg0,AndroidCXX::android_view_Menu const& arg1) ;
	virtual AndroidCXX::android_view_View * onCreateView(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_content_Context const& arg1,AndroidCXX::android_util_AttributeSet const& arg2) ;
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual void  onLowMemory() ;
	virtual bool  onMenuItemSelected(int const& arg0,AndroidCXX::android_view_MenuItem const& arg1) ;
	virtual void  onPanelClosed(int const& arg0,AndroidCXX::android_view_Menu const& arg1) ;
	virtual bool  onPreparePanel(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_Menu const& arg2) ;
	virtual AndroidCXX::java_lang_Object * onRetainCustomNonConfigurationInstance() ;
	virtual AndroidCXX::java_lang_Object * onRetainNonConfigurationInstance() ;
	virtual void  startActivityForResult(AndroidCXX::android_content_Intent const& arg0,int const& arg1) ;
	virtual void  startActivityFromFragment(AndroidCXX::android_support_v4_app_Fragment const& arg0,AndroidCXX::android_content_Intent const& arg1,int const& arg2) ;
	virtual void  supportInvalidateOptionsMenu() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_FragmentActivity