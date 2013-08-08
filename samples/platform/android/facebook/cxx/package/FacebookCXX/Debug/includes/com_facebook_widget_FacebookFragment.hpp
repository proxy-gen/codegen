/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 











// Generated Code 

#ifndef _com_facebook_widget_FacebookFragment
#define _com_facebook_widget_FacebookFragment
//
// Scroll Down 
//


#include <android_content_Intent.hpp>

#include <com_facebook_Session.hpp>

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

// Forward Declarations


class com_facebook_Session;


class com_facebook_widget_FacebookFragment
{
public:

	com_facebook_widget_FacebookFragment(const com_facebook_widget_FacebookFragment& cc);
	com_facebook_widget_FacebookFragment(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_FacebookFragment();
	// Functions
	 void onDestroy();
	 void onActivityResult(int const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2);
	 void setSession(FacebookCXX::com_facebook_Session const& arg0);
	 void onActivityCreated(AndroidCXX::android_os_Bundle const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_FacebookFragment