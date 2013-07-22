/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	









// Generated Code 

#ifndef _com_facebook_AuthorizationClient_2
#define _com_facebook_AuthorizationClient_2
//
// Scroll Down 
//


#include <android_content_Intent.hpp>

#include <android_app_Activity.hpp>

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

// Forward Declarations



class com_facebook_AuthorizationClient_2
{
public:

	com_facebook_AuthorizationClient_2(const com_facebook_AuthorizationClient_2& cc);
	com_facebook_AuthorizationClient_2(void * proxy);
	// Public Constructors
	com_facebook_AuthorizationClient_2();
	// Default Destructor
	virtual ~com_facebook_AuthorizationClient_2();
	// Functions
	 void startActivityForResult(AndroidCXX::android_content_Intent& arg0,int& arg1);
	 AndroidCXX::android_app_Activity getActivityContext();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_AuthorizationClient_2