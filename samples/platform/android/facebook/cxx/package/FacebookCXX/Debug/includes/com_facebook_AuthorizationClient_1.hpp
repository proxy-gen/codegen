/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	









// Generated Code 

#ifndef _com_facebook_AuthorizationClient_1
#define _com_facebook_AuthorizationClient_1
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



class com_facebook_AuthorizationClient_1
{
public:

	com_facebook_AuthorizationClient_1(const com_facebook_AuthorizationClient_1& cc);
	com_facebook_AuthorizationClient_1(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_AuthorizationClient_1();
	// Functions
	 void startActivityForResult(AndroidCXX::android_content_Intent const& arg0,int const& arg1);
	 AndroidCXX::android_app_Activity getActivityContext();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_AuthorizationClient_1