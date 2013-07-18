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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_support_v4_app_Fragment;

class java_lang_String;


class java_lang_CharSequence;

class android_support_v4_app_FragmentTransaction
{
public:
 android_support_v4_app_FragmentTransaction add(int& arg0,android_support_v4_app_Fragment& arg1,java_lang_String& arg2);
 bool isEmpty();
 android_support_v4_app_FragmentTransaction replace(int& arg0,android_support_v4_app_Fragment& arg1,java_lang_String& arg2);
 android_support_v4_app_FragmentTransaction remove(android_support_v4_app_Fragment& arg0);
 android_support_v4_app_FragmentTransaction attach(android_support_v4_app_Fragment& arg0);
 android_support_v4_app_FragmentTransaction show(android_support_v4_app_Fragment& arg0);
 int commit();
 android_support_v4_app_FragmentTransaction hide(android_support_v4_app_Fragment& arg0);
 android_support_v4_app_FragmentTransaction detach(android_support_v4_app_Fragment& arg0);
 android_support_v4_app_FragmentTransaction setCustomAnimations(int& arg0);
 android_support_v4_app_FragmentTransaction setTransition(int& arg0);
 android_support_v4_app_FragmentTransaction setTransitionStyle(int& arg0);
 android_support_v4_app_FragmentTransaction addToBackStack(java_lang_String& arg0);
 bool isAddToBackStackAllowed();
 android_support_v4_app_FragmentTransaction disallowAddToBackStack();
 android_support_v4_app_FragmentTransaction setBreadCrumbTitle(java_lang_CharSequence& arg0,int& arg1);
 android_support_v4_app_FragmentTransaction setBreadCrumbShortTitle(java_lang_CharSequence& arg0,int& arg1);
 int commitAllowingStateLoss();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_FragmentTransaction