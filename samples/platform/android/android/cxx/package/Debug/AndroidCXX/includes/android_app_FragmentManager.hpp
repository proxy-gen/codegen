/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	
 		 
 		 
 		 
 	
 		 
	
	
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
	





























// Generated Code 

#ifndef _android_app_FragmentManager
#define _android_app_FragmentManager
//
// Scroll Down 
//


#include <android_os_Bundle.hpp>

#include <java_lang_String.hpp>

#include <android_app_Fragment.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_io_PrintWriter.hpp>

#include <android_app_FragmentTransaction.hpp>

#include <android_app_FragmentManager_BackStackEntry.hpp>

#include <android_app_FragmentManager_OnBackStackChangedListener.hpp>

#include <android_app_Fragment_SavedState.hpp>

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

class android_os_Bundle;

class java_lang_String;

class android_app_Fragment;

class java_io_FileDescriptor;

class java_io_PrintWriter;

class android_app_FragmentTransaction;

class android_app_FragmentManager_BackStackEntry;

class android_app_FragmentManager_OnBackStackChangedListener;

class android_app_Fragment_SavedState;

class android_app_FragmentManager
{
public:

	android_app_FragmentManager(const android_app_FragmentManager& cc);
	android_app_FragmentManager(Proxy proxy);
	// Public Constructors
	android_app_FragmentManager();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_FragmentManager();
	// Functions
	 bool isDestroyed();
	 AndroidCXX::android_app_Fragment getFragment(AndroidCXX::android_os_Bundle const& arg0,AndroidCXX::java_lang_String const& arg1);
	 void dump(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_FileDescriptor const& arg1,AndroidCXX::java_io_PrintWriter const& arg2,std::vector<AndroidCXX::java_lang_String > const& arg3);
	static void enableDebugLogging(bool const& arg0);
	 AndroidCXX::android_app_FragmentTransaction beginTransaction();
	 bool executePendingTransactions();
	 AndroidCXX::android_app_Fragment findFragmentById(int const& arg0);
	 AndroidCXX::android_app_Fragment findFragmentByTag(AndroidCXX::java_lang_String const& arg0);
	 void popBackStack(int const& arg0,int const& arg1);
	 void popBackStack(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 void popBackStack();
	 bool popBackStackImmediate();
	 bool popBackStackImmediate(int const& arg0,int const& arg1);
	 bool popBackStackImmediate(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 int getBackStackEntryCount();
	 AndroidCXX::android_app_FragmentManager_BackStackEntry getBackStackEntryAt(int const& arg0);
	 void addOnBackStackChangedListener(AndroidCXX::android_app_FragmentManager_OnBackStackChangedListener const& arg0);
	 void removeOnBackStackChangedListener(AndroidCXX::android_app_FragmentManager_OnBackStackChangedListener const& arg0);
	 void putFragment(AndroidCXX::android_os_Bundle const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_app_Fragment const& arg2);
	 AndroidCXX::android_app_Fragment_SavedState saveFragmentInstanceState(AndroidCXX::android_app_Fragment const& arg0);
	 void invalidateOptionsMenu();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_FragmentManager