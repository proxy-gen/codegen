/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_app_ActionBar_OnNavigationListener
#define _android_app_ActionBar_OnNavigationListener
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

class android_app_ActionBar_OnNavigationListener : public AndroidCXX::java_lang_Object
{
public:

	android_app_ActionBar_OnNavigationListener(const android_app_ActionBar_OnNavigationListener& cc);
	android_app_ActionBar_OnNavigationListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_app_ActionBar_OnNavigationListener();
	// Functions
	virtual bool  onNavigationItemSelected(int const& arg0,long const& arg1) ;

protected:
	android_app_ActionBar_OnNavigationListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_ActionBar_OnNavigationListener