/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <com_facebook_SessionState.hpp>

#include <java_lang_Exception.hpp>


#include <java_lang_Object.hpp>

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



class com_facebook_Session_StatusCallback : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_Session_StatusCallback(const com_facebook_Session_StatusCallback& cc);
	com_facebook_Session_StatusCallback(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Session_StatusCallback();
	// Functions
	virtual void  call(FacebookCXX::com_facebook_Session const& arg0,com_facebook_SessionState::com_facebook_SessionState const& arg1,AndroidCXX::java_lang_Exception const& arg2) ;

protected:
	com_facebook_Session_StatusCallback();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_StatusCallback