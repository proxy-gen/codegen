/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_support_v4_app_FragmentManager_OnBackStackChangedListener
#define _android_support_v4_app_FragmentManager_OnBackStackChangedListener
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

class android_support_v4_app_FragmentManager_OnBackStackChangedListener : public java_lang_Object
{
public:

	android_support_v4_app_FragmentManager_OnBackStackChangedListener(const android_support_v4_app_FragmentManager_OnBackStackChangedListener& cc);
	android_support_v4_app_FragmentManager_OnBackStackChangedListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_support_v4_app_FragmentManager_OnBackStackChangedListener();
	// Functions
	virtual void  onBackStackChanged() ;

protected:
	android_support_v4_app_FragmentManager_OnBackStackChangedListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_app_FragmentManager_OnBackStackChangedListener