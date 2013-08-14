/*
 * Header (Instance CXX)
 * Author: codegen
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

class java_lang_String;

class java_lang_CharSequence;

class android_support_v4_app_FragmentManager_BackStackEntry : public java_lang_Object
{
public:

	android_support_v4_app_FragmentManager_BackStackEntry(const android_support_v4_app_FragmentManager_BackStackEntry& cc);
	android_support_v4_app_FragmentManager_BackStackEntry(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_support_v4_app_FragmentManager_BackStackEntry();
	// Functions
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual int  getId() ;
	virtual int  getBreadCrumbTitleRes() ;
	virtual int  getBreadCrumbShortTitleRes() ;
	virtual AndroidCXX::java_lang_CharSequence * getBreadCrumbTitle() ;
	virtual AndroidCXX::java_lang_CharSequence * getBreadCrumbShortTitle() ;

protected:
	android_support_v4_app_FragmentManager_BackStackEntry();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_FragmentManager_BackStackEntry