/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 










// Generated Code 

#ifndef _android_app_ActionBar_TabListener
#define _android_app_ActionBar_TabListener
//
// Scroll Down 
//



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

class android_app_ActionBar_Tab;

class android_app_FragmentTransaction;

class android_app_ActionBar_TabListener 
{
public:

	android_app_ActionBar_TabListener(const android_app_ActionBar_TabListener& cc);
	android_app_ActionBar_TabListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_ActionBar_TabListener();
	// Functions
	virtual void  onTabSelected(AndroidCXX::android_app_ActionBar_Tab const& arg0,AndroidCXX::android_app_FragmentTransaction const& arg1) ;
	virtual void  onTabUnselected(AndroidCXX::android_app_ActionBar_Tab const& arg0,AndroidCXX::android_app_FragmentTransaction const& arg1) ;
	virtual void  onTabReselected(AndroidCXX::android_app_ActionBar_Tab const& arg0,AndroidCXX::android_app_FragmentTransaction const& arg1) ;

protected:
	android_app_ActionBar_TabListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_ActionBar_TabListener