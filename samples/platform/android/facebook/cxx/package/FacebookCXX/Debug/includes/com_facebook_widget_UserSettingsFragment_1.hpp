/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#ifndef _com_facebook_widget_UserSettingsFragment_1
#define _com_facebook_widget_UserSettingsFragment_1
//
// Scroll Down 
//


#include <com_facebook_model_GraphUser.hpp>

#include <com_facebook_Response.hpp>

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

class com_facebook_model_GraphUser;

class com_facebook_Response;

class com_facebook_widget_UserSettingsFragment_1
{
public:

	com_facebook_widget_UserSettingsFragment_1(const com_facebook_widget_UserSettingsFragment_1& cc);
	com_facebook_widget_UserSettingsFragment_1(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_UserSettingsFragment_1();
	// Functions
	 void onCompleted(FacebookCXX::com_facebook_model_GraphUser const& arg0,FacebookCXX::com_facebook_Response const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_UserSettingsFragment_1