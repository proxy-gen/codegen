/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 


 		 
 		 












// Generated Code 

#ifndef _com_facebook_UiLifecycleHelper
#define _com_facebook_UiLifecycleHelper
//
// Scroll Down 
//


#include <android_os_Bundle.hpp>

#include <android_content_Intent.hpp>

#include <android_app_Activity.hpp>

#include <com_facebook_Session_StatusCallback.hpp>

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




class com_facebook_Session_StatusCallback;

class com_facebook_UiLifecycleHelper
{
public:

	com_facebook_UiLifecycleHelper(const com_facebook_UiLifecycleHelper& cc);
	com_facebook_UiLifecycleHelper(Proxy proxy);
	// Public Constructors
	com_facebook_UiLifecycleHelper(AndroidCXX::android_app_Activity const& arg0,FacebookCXX::com_facebook_Session_StatusCallback const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_UiLifecycleHelper();
	// Functions
	 void onCreate(AndroidCXX::android_os_Bundle const& arg0);
	 void onResume();
	 void onSaveInstanceState(AndroidCXX::android_os_Bundle const& arg0);
	 void onPause();
	 void onDestroy();
	 void onActivityResult(int const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_UiLifecycleHelper