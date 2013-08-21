/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
 	
 		 
	
 		 
	
	
 		 
 		 
	
	
 	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	





























// Generated Code 

#ifndef _android_support_v4_app_FragmentManager
#define _android_support_v4_app_FragmentManager
//
// Scroll Down 
//



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

class android_support_v4_app_FragmentManager_OnBackStackChangedListener;

class android_support_v4_app_FragmentTransaction;

class java_lang_String;

class java_io_FileDescriptor;

class java_io_PrintWriter;

class android_support_v4_app_Fragment;

class android_support_v4_app_FragmentManager_BackStackEntry;

class android_os_Bundle;

class java_util_List;

class android_support_v4_app_Fragment_SavedState;

class android_support_v4_app_FragmentManager 
{
public:

	android_support_v4_app_FragmentManager(const android_support_v4_app_FragmentManager& cc);
	android_support_v4_app_FragmentManager(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_support_v4_app_FragmentManager();
	// Functions
	virtual void  addOnBackStackChangedListener(AndroidCXX::android_support_v4_app_FragmentManager_OnBackStackChangedListener const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * beginTransaction() ;
	virtual void  dump(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_FileDescriptor const& arg1,AndroidCXX::java_io_PrintWriter const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3) ;
	static void  enableDebugLogging(bool const& arg0) ;
	virtual bool  executePendingTransactions() ;
	virtual AndroidCXX::android_support_v4_app_Fragment * findFragmentById(int const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_Fragment * findFragmentByTag(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_FragmentManager_BackStackEntry * getBackStackEntryAt(int const& arg0) ;
	virtual int  getBackStackEntryCount() ;
	virtual AndroidCXX::android_support_v4_app_Fragment * getFragment(AndroidCXX::android_os_Bundle const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_util_List * getFragments() ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * openTransaction() ;
	virtual bool  popBackStackImmediate(int const& arg0,int const& arg1) ;
	virtual bool  popBackStackImmediate(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual bool  popBackStackImmediate() ;
	virtual void  popBackStack(int const& arg0,int const& arg1) ;
	virtual void  popBackStack(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual void  popBackStack() ;
	virtual void  putFragment(AndroidCXX::android_os_Bundle const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_support_v4_app_Fragment const& arg2) ;
	virtual void  removeOnBackStackChangedListener(AndroidCXX::android_support_v4_app_FragmentManager_OnBackStackChangedListener const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_Fragment_SavedState * saveFragmentInstanceState(AndroidCXX::android_support_v4_app_Fragment const& arg0) ;

protected:
	android_support_v4_app_FragmentManager();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_FragmentManager