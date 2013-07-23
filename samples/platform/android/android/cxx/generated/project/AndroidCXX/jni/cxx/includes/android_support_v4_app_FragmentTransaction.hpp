/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
	
	
	
	
 		 
	
	
 		 
	
	
 		 
	
	
































// Generated Code 

#ifndef _android_support_v4_app_FragmentTransaction
#define _android_support_v4_app_FragmentTransaction
//
// Scroll Down 
//


#include <android_support_v4_app_Fragment.hpp>


#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

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

class android_support_v4_app_Fragment;

class android_support_v4_app_FragmentTransaction;

class java_lang_String;

class java_lang_CharSequence;

class android_support_v4_app_FragmentTransaction
{
public:

	android_support_v4_app_FragmentTransaction(const android_support_v4_app_FragmentTransaction& cc);
	android_support_v4_app_FragmentTransaction(void * proxy);
	// Public Constructors
	android_support_v4_app_FragmentTransaction();
	// Default Destructor
	virtual ~android_support_v4_app_FragmentTransaction();
	// Functions
	 AndroidCXX::android_support_v4_app_FragmentTransaction add(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1);
	 AndroidCXX::android_support_v4_app_FragmentTransaction add(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1,AndroidCXX::java_lang_String& arg2);
	 AndroidCXX::android_support_v4_app_FragmentTransaction add(AndroidCXX::android_support_v4_app_Fragment& arg0,AndroidCXX::java_lang_String& arg1);
	 bool isEmpty();
	 AndroidCXX::android_support_v4_app_FragmentTransaction replace(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1,AndroidCXX::java_lang_String& arg2);
	 AndroidCXX::android_support_v4_app_FragmentTransaction replace(int& arg0,AndroidCXX::android_support_v4_app_Fragment& arg1);
	 AndroidCXX::android_support_v4_app_FragmentTransaction remove(AndroidCXX::android_support_v4_app_Fragment& arg0);
	 AndroidCXX::android_support_v4_app_FragmentTransaction attach(AndroidCXX::android_support_v4_app_Fragment& arg0);
	 AndroidCXX::android_support_v4_app_FragmentTransaction show(AndroidCXX::android_support_v4_app_Fragment& arg0);
	 int commit();
	 AndroidCXX::android_support_v4_app_FragmentTransaction hide(AndroidCXX::android_support_v4_app_Fragment& arg0);
	 AndroidCXX::android_support_v4_app_FragmentTransaction detach(AndroidCXX::android_support_v4_app_Fragment& arg0);
	 AndroidCXX::android_support_v4_app_FragmentTransaction setCustomAnimations(int& arg0,int& arg1);
	 AndroidCXX::android_support_v4_app_FragmentTransaction setCustomAnimations(int& arg0,int& arg1,int& arg2,int& arg3);
	 AndroidCXX::android_support_v4_app_FragmentTransaction setTransition(int& arg0);
	 AndroidCXX::android_support_v4_app_FragmentTransaction setTransitionStyle(int& arg0);
	 AndroidCXX::android_support_v4_app_FragmentTransaction addToBackStack(AndroidCXX::java_lang_String& arg0);
	 bool isAddToBackStackAllowed();
	 AndroidCXX::android_support_v4_app_FragmentTransaction disallowAddToBackStack();
	 AndroidCXX::android_support_v4_app_FragmentTransaction setBreadCrumbTitle(AndroidCXX::java_lang_CharSequence& arg0);
	 AndroidCXX::android_support_v4_app_FragmentTransaction setBreadCrumbTitle(int& arg0);
	 AndroidCXX::android_support_v4_app_FragmentTransaction setBreadCrumbShortTitle(AndroidCXX::java_lang_CharSequence& arg0);
	 AndroidCXX::android_support_v4_app_FragmentTransaction setBreadCrumbShortTitle(int& arg0);
	 int commitAllowingStateLoss();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_FragmentTransaction