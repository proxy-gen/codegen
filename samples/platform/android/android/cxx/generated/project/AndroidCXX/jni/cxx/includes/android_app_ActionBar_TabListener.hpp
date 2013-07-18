/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			


#ifndef _android_app_ActionBar_TabListener
#define _android_app_ActionBar_TabListener





#include <android_app_FragmentTransaction.hpp>
#include <android_app_ActionBar_Tab.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_app_ActionBar_TabListener
{
public:
	void onTabSelected(android_app_ActionBar_Tab& arg0,android_app_FragmentTransaction& arg1);
	void onTabUnselected(android_app_ActionBar_Tab& arg0,android_app_FragmentTransaction& arg1);
	void onTabReselected(android_app_ActionBar_Tab& arg0,android_app_FragmentTransaction& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_ActionBar_TabListener