/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//


 		 
 	
	
 		 
 		 
 		 
	
 		 
 		 
	

 		 
 		 
 		 
 		 
 		 









// Generated Code 

#ifndef _com_facebook_Request
#define _com_facebook_Request
//
// Scroll Down 
//


#include <java_util_Collection.hpp>

#include <com_facebook_RequestAsyncTask.hpp>

#include <com_facebook_Session.hpp>

#include <com_facebook_Request_GraphUserCallback.hpp>

#include <com_facebook_Request_GraphUserListCallback.hpp>

#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>

#include <com_facebook_HttpMethod.hpp>

#include <com_facebook_Request_Callback.hpp>


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


class com_facebook_RequestAsyncTask;


class com_facebook_Session;

class com_facebook_Request_GraphUserCallback;

class com_facebook_Request_GraphUserListCallback;




class com_facebook_Request_Callback;

class com_facebook_Request : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_Request(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2,com_facebook_HttpMethod::com_facebook_HttpMethod const& arg3,FacebookCXX::com_facebook_Request_Callback const& arg4,Proxy * aProxy = new Proxy());
	com_facebook_Request(const com_facebook_Request& cc);
	com_facebook_Request(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Request();
	// Functions
	static FacebookCXX::com_facebook_RequestAsyncTask * executeBatchAsync(AndroidCXX::java_util_Collection const& arg0) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executeMeRequestAsync(FacebookCXX::com_facebook_Session const& arg0,FacebookCXX::com_facebook_Request_GraphUserCallback const& arg1) ;
	static FacebookCXX::com_facebook_Request * newMyFriendsRequest(FacebookCXX::com_facebook_Session const& arg0,FacebookCXX::com_facebook_Request_GraphUserListCallback const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Request