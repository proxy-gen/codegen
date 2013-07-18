/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
		


#ifndef _android_app_FragmentManager_BackStackEntry
#define _android_app_FragmentManager_BackStackEntry








#include <java_lang_CharSequence.hpp>
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

class android_app_FragmentManager_BackStackEntry
{
public:
	java_lang_String getName();
	int getId();
	int getBreadCrumbTitleRes();
	int getBreadCrumbShortTitleRes();
	java_lang_CharSequence getBreadCrumbTitle();
	java_lang_CharSequence getBreadCrumbShortTitle();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_FragmentManager_BackStackEntry