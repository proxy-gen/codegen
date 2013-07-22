/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	
	
	
	
	
	
	


 		 
 		 




















// Generated Code 

#ifndef _com_facebook_FacebookRequestError
#define _com_facebook_FacebookRequestError
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <com_facebook_FacebookException.hpp>

#include <java_net_HttpURLConnection.hpp>

#include <com_facebook_FacebookRequestError_Category.hpp>

#include <org_json_JSONObject.hpp>

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
// 
// 
// 
// 
// using namespace COM_FACEBOOK_FACEBOOKREQUESTERROR_CATEGORY;
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

class java_lang_String;

class com_facebook_FacebookException;

class java_net_HttpURLConnection;


class org_json_JSONObject;

class java_lang_Object;

class com_facebook_FacebookRequestError
{
public:

	com_facebook_FacebookRequestError(const com_facebook_FacebookRequestError& cc);
	com_facebook_FacebookRequestError(void * proxy);
	// Public Constructors
	com_facebook_FacebookRequestError(int& arg0,FacebookCXX::java_lang_String& arg1,FacebookCXX::java_lang_String& arg2);
	com_facebook_FacebookRequestError();
	// Default Destructor
	virtual ~com_facebook_FacebookRequestError();
	// Functions
	 FacebookCXX::java_lang_String toString();
	 FacebookCXX::com_facebook_FacebookException getException();
	 FacebookCXX::java_net_HttpURLConnection getConnection();
	 int getErrorCode();
	 bool shouldNotifyUser();
	 int getUserActionMessageId();
	 COM_FACEBOOK_FACEBOOKREQUESTERROR_CATEGORY::com_facebook_FacebookRequestError_Category getCategory();
	 int getRequestStatusCode();
	 int getSubErrorCode();
	 FacebookCXX::java_lang_String getErrorType();
	 FacebookCXX::java_lang_String getErrorMessage();
	 FacebookCXX::org_json_JSONObject getRequestResultBody();
	 FacebookCXX::org_json_JSONObject getRequestResult();
	 FacebookCXX::java_lang_Object getBatchRequestResult();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_FacebookRequestError