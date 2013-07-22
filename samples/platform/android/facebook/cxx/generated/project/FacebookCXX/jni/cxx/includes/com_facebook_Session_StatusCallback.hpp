/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 








// Generated Code 

#ifndef _com_facebook_Session_StatusCallback
#define _com_facebook_Session_StatusCallback
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
// 
// 
// 

// Forward Declarations

class com_facebook_Session;

class com_facebook_SessionState;

class java_lang_Exception;

class com_facebook_Session_StatusCallback
{
public:

	com_facebook_Session_StatusCallback(const com_facebook_Session_StatusCallback& cc);
	com_facebook_Session_StatusCallback(void * proxy);
	// Public Constructors
	com_facebook_Session_StatusCallback();
	// Default Destructor
	virtual ~com_facebook_Session_StatusCallback();
	// Functions
	 void call(FacebookCXX::com_facebook_Session& arg0,FacebookCXX::com_facebook_SessionState& arg1,FacebookCXX::java_lang_Exception& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_StatusCallback