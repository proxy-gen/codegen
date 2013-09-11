/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//


 		 
 		 







// Generated Code 

#ifndef _com_facebook_Request_GraphUserCallback
#define _com_facebook_Request_GraphUserCallback
//
// Scroll Down 
//



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

class com_facebook_model_GraphUser;

class com_facebook_Response;

class com_facebook_Request_GraphUserCallback : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_Request_GraphUserCallback(const com_facebook_Request_GraphUserCallback& cc);
	com_facebook_Request_GraphUserCallback(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Request_GraphUserCallback();
	// Functions
	virtual void  onCompleted(FacebookCXX::com_facebook_model_GraphUser const& arg0,FacebookCXX::com_facebook_Response const& arg1) ;

protected:
	void setCXXCallbackPtr(void * callbackPtr);
	com_facebook_Request_GraphUserCallback();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Request_GraphUserCallback