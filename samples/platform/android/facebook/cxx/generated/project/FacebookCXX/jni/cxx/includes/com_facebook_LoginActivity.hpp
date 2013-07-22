/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 












// Generated Code 

#ifndef _com_facebook_LoginActivity
#define _com_facebook_LoginActivity
//
// Scroll Down 
//


#include <android_os_Bundle.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_os_Bundle;

class com_facebook_LoginActivity
{
public:

	com_facebook_LoginActivity(const com_facebook_LoginActivity& cc);
	com_facebook_LoginActivity(void * proxy);
	// Public Constructors
	com_facebook_LoginActivity();
	// Default Destructor
	virtual ~com_facebook_LoginActivity();
	// Functions
	 void onCreate(FacebookCXX::android_os_Bundle& arg0);
	 void onResume();
	 void onSaveInstanceState(FacebookCXX::android_os_Bundle& arg0);
	 void onPause();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_LoginActivity