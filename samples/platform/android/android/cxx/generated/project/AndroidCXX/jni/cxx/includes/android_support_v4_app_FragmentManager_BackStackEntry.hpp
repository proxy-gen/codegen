/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	

// Generated Code 

#ifndef _android_support_v4_app_FragmentManager_BackStackEntry
#define _android_support_v4_app_FragmentManager_BackStackEntry
//
// Scroll Down 
//









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

class java_lang_String;

class java_lang_CharSequence;

class android_support_v4_app_FragmentManager_BackStackEntry
{
public:
	 java_lang_String *  getName();
	 int getId();
	 int getBreadCrumbTitleRes();
	 int getBreadCrumbShortTitleRes();
	 java_lang_CharSequence *  getBreadCrumbTitle();
	 java_lang_CharSequence *  getBreadCrumbShortTitle();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_FragmentManager_BackStackEntry