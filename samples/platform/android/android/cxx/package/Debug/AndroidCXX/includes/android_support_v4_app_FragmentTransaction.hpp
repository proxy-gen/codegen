/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_lang_Object.hpp>

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

class java_lang_String;


class java_lang_CharSequence;

class android_support_v4_app_FragmentTransaction : public AndroidCXX::java_lang_Object
{
public:

	android_support_v4_app_FragmentTransaction(const android_support_v4_app_FragmentTransaction& cc);
	android_support_v4_app_FragmentTransaction(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_support_v4_app_FragmentTransaction();
	// Functions
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * add(AndroidCXX::android_support_v4_app_Fragment const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * add(int const& arg0,AndroidCXX::android_support_v4_app_Fragment const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * add(int const& arg0,AndroidCXX::android_support_v4_app_Fragment const& arg1) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * addToBackStack(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * attach(AndroidCXX::android_support_v4_app_Fragment const& arg0) ;
	virtual int  commitAllowingStateLoss() ;
	virtual int  commit() ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * detach(AndroidCXX::android_support_v4_app_Fragment const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * disallowAddToBackStack() ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * hide(AndroidCXX::android_support_v4_app_Fragment const& arg0) ;
	virtual bool  isAddToBackStackAllowed() ;
	virtual bool  isEmpty() ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * remove(AndroidCXX::android_support_v4_app_Fragment const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * replace(int const& arg0,AndroidCXX::android_support_v4_app_Fragment const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * replace(int const& arg0,AndroidCXX::android_support_v4_app_Fragment const& arg1) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * setBreadCrumbShortTitle(int const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * setBreadCrumbShortTitle(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * setBreadCrumbTitle(int const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * setBreadCrumbTitle(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * setCustomAnimations(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * setCustomAnimations(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * setTransition(int const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * setTransitionStyle(int const& arg0) ;
	virtual AndroidCXX::android_support_v4_app_FragmentTransaction * show(AndroidCXX::android_support_v4_app_Fragment const& arg0) ;

protected:
	android_support_v4_app_FragmentTransaction();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_FragmentTransaction