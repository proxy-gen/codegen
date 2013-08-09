/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
	













// Generated Code 

#ifndef _android_app_FragmentManager_BackStackEntry
#define _android_app_FragmentManager_BackStackEntry
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
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class java_lang_CharSequence;

class android_app_FragmentManager_BackStackEntry
{
public:

	android_app_FragmentManager_BackStackEntry(const android_app_FragmentManager_BackStackEntry& cc);
	android_app_FragmentManager_BackStackEntry(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_FragmentManager_BackStackEntry();
	// Functions
	 AndroidCXX::java_lang_String getName();
	 int getId();
	 int getBreadCrumbTitleRes();
	 int getBreadCrumbShortTitleRes();
	 AndroidCXX::java_lang_CharSequence getBreadCrumbTitle();
	 AndroidCXX::java_lang_CharSequence getBreadCrumbShortTitle();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_FragmentManager_BackStackEntry