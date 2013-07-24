/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 








// Generated Code 

#ifndef _com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback
#define _com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback
//
// Scroll Down 
//


#include <com_facebook_Session.hpp>

#include <com_facebook_SessionState.hpp>

#include <java_lang_Exception.hpp>

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



class com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback
{
public:

	com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback(const com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback& cc);
	com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback();
	// 
	// Default Destructor
	virtual ~com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback();
	// Functions
	 void call(FacebookCXX::com_facebook_Session& arg0,COM_FACEBOOK_SESSIONSTATE::com_facebook_SessionState& arg1,AndroidCXX::java_lang_Exception& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback