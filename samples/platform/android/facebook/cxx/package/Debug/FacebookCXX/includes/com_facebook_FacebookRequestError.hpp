/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_Object.hpp>

#include <com_facebook_FacebookRequestError_Category.hpp>

#include <java_net_HttpURLConnection.hpp>

#include <java_lang_String.hpp>

#include <com_facebook_FacebookException.hpp>

#include <org_json_JSONObject.hpp>


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

	// Public ConstrucXXX
	com_facebook_FacebookRequestError(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2);
	com_facebook_FacebookRequestError(const com_facebook_FacebookRequestError& cc);
	com_facebook_FacebookRequestError(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_FacebookRequestError();
	// Functions
	virtual AndroidCXX::java_lang_Object * getBatchRequestResult() ;
	virtual com_facebook_FacebookRequestError_Category::com_facebook_FacebookRequestError_Category  getCategory() ;
	virtual AndroidCXX::java_net_HttpURLConnection * getConnection() ;
	virtual int  getErrorCode() ;
	virtual AndroidCXX::java_lang_String * getErrorMessage() ;
	virtual AndroidCXX::java_lang_String * getErrorType() ;
	virtual FacebookCXX::com_facebook_FacebookException * getException() ;
	virtual AndroidCXX::org_json_JSONObject * getRequestResultBody() ;
	virtual AndroidCXX::org_json_JSONObject * getRequestResult() ;
	virtual int  getRequestStatusCode() ;
	virtual int  getSubErrorCode() ;
	virtual int  getUserActionMessageId() ;
	virtual bool  shouldNotifyUser() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_FacebookRequestError