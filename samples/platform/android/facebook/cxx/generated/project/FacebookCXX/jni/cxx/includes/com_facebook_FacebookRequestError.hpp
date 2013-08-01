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

// Forward Declarations


class com_facebook_FacebookException;





class com_facebook_FacebookRequestError
{
public:

	com_facebook_FacebookRequestError(const com_facebook_FacebookRequestError& cc);
	com_facebook_FacebookRequestError(Proxy proxy);
	// Public Constructors
	com_facebook_FacebookRequestError(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_FacebookRequestError();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 FacebookCXX::com_facebook_FacebookException getException();
	 AndroidCXX::java_net_HttpURLConnection getConnection();
	 int getErrorCode();
	 bool shouldNotifyUser();
	 int getUserActionMessageId();
	 com_facebook_FacebookRequestError_Category::com_facebook_FacebookRequestError_Category getCategory();
	 int getRequestStatusCode();
	 int getSubErrorCode();
	 AndroidCXX::java_lang_String getErrorType();
	 AndroidCXX::java_lang_String getErrorMessage();
	 AndroidCXX::org_json_JSONObject getRequestResultBody();
	 AndroidCXX::org_json_JSONObject getRequestResult();
	 AndroidCXX::java_lang_Object getBatchRequestResult();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_FacebookRequestError