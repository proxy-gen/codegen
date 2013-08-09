/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
	
	
	
	
 		 
	
	
 		 
	
	
 		 
	
	
































// Generated Code 

#ifndef _android_app_FragmentTransaction
#define _android_app_FragmentTransaction
//
// Scroll Down 
//


#include <android_app_Fragment.hpp>


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

class android_app_Fragment;

class android_app_FragmentTransaction;

class java_lang_String;

class java_lang_CharSequence;

class android_app_FragmentTransaction
{
public:

	android_app_FragmentTransaction(const android_app_FragmentTransaction& cc);
	android_app_FragmentTransaction(Proxy proxy);
	// Public Constructors
	android_app_FragmentTransaction();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_FragmentTransaction();
	// Functions
	 AndroidCXX::android_app_FragmentTransaction add(int const& arg0,AndroidCXX::android_app_Fragment const& arg1);
	 AndroidCXX::android_app_FragmentTransaction add(int const& arg0,AndroidCXX::android_app_Fragment const& arg1,AndroidCXX::java_lang_String const& arg2);
	 AndroidCXX::android_app_FragmentTransaction add(AndroidCXX::android_app_Fragment const& arg0,AndroidCXX::java_lang_String const& arg1);
	 bool isEmpty();
	 AndroidCXX::android_app_FragmentTransaction replace(int const& arg0,AndroidCXX::android_app_Fragment const& arg1,AndroidCXX::java_lang_String const& arg2);
	 AndroidCXX::android_app_FragmentTransaction replace(int const& arg0,AndroidCXX::android_app_Fragment const& arg1);
	 AndroidCXX::android_app_FragmentTransaction remove(AndroidCXX::android_app_Fragment const& arg0);
	 AndroidCXX::android_app_FragmentTransaction attach(AndroidCXX::android_app_Fragment const& arg0);
	 AndroidCXX::android_app_FragmentTransaction show(AndroidCXX::android_app_Fragment const& arg0);
	 int commit();
	 AndroidCXX::android_app_FragmentTransaction hide(AndroidCXX::android_app_Fragment const& arg0);
	 AndroidCXX::android_app_FragmentTransaction detach(AndroidCXX::android_app_Fragment const& arg0);
	 AndroidCXX::android_app_FragmentTransaction setCustomAnimations(int const& arg0,int const& arg1);
	 AndroidCXX::android_app_FragmentTransaction setCustomAnimations(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 AndroidCXX::android_app_FragmentTransaction setTransition(int const& arg0);
	 AndroidCXX::android_app_FragmentTransaction setTransitionStyle(int const& arg0);
	 AndroidCXX::android_app_FragmentTransaction addToBackStack(AndroidCXX::java_lang_String const& arg0);
	 bool isAddToBackStackAllowed();
	 AndroidCXX::android_app_FragmentTransaction disallowAddToBackStack();
	 AndroidCXX::android_app_FragmentTransaction setBreadCrumbTitle(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::android_app_FragmentTransaction setBreadCrumbTitle(int const& arg0);
	 AndroidCXX::android_app_FragmentTransaction setBreadCrumbShortTitle(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::android_app_FragmentTransaction setBreadCrumbShortTitle(int const& arg0);
	 int commitAllowingStateLoss();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_FragmentTransaction