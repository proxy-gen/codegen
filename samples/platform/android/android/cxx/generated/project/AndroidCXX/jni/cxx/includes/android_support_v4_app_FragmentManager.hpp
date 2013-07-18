/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
		
 			
 			
 			
		
		
		
 			
		
 			
 			
		
 			
 			
 			
 			
 			
 			
		


#ifndef _android_support_v4_app_FragmentManager
#define _android_support_v4_app_FragmentManager


















#include <java_io_PrintWriter.hpp>
#include <android_os_Bundle.hpp>
#include <android_support_v4_app_Fragment.hpp>
#include <android_support_v4_app_FragmentTransaction.hpp>
#include <android_support_v4_app_Fragment_SavedState.hpp>
#include <android_support_v4_app_FragmentManager_BackStackEntry.hpp>
#include <android_support_v4_app_FragmentManager_OnBackStackChangedListener.hpp>
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

class android_support_v4_app_FragmentManager
{
public:
 android_support_v4_app_Fragment getFragment(android_os_Bundle& arg0,java_lang_String& arg1);
 void dump(java_lang_String& arg0,java_io_FileDescriptor& arg1,java_io_PrintWriter& arg2,std::vector<long>& arg3);
static void enableDebugLogging(bool& arg0);
 android_support_v4_app_FragmentTransaction beginTransaction();
 android_support_v4_app_FragmentTransaction openTransaction();
 bool executePendingTransactions();
 android_support_v4_app_Fragment findFragmentById(int& arg0);
 android_support_v4_app_Fragment findFragmentByTag(java_lang_String& arg0);
 void popBackStack(int& arg0,java_lang_String& arg1);
 bool popBackStackImmediate(int& arg0,java_lang_String& arg1);
 int getBackStackEntryCount();
 android_support_v4_app_FragmentManager_BackStackEntry getBackStackEntryAt(int& arg0);
 void addOnBackStackChangedListener(android_support_v4_app_FragmentManager_OnBackStackChangedListener& arg0);
 void removeOnBackStackChangedListener(android_support_v4_app_FragmentManager_OnBackStackChangedListener& arg0);
 void putFragment(android_os_Bundle& arg0,java_lang_String& arg1,android_support_v4_app_Fragment& arg2);
 android_support_v4_app_Fragment_SavedState saveFragmentInstanceState(android_support_v4_app_Fragment& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_FragmentManager