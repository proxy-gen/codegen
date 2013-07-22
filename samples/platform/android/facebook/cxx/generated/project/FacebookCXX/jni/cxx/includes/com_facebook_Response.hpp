/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 	
	
 		 
	
	
	
 	
 		 
 		 
 	
	
 	
 		 
 		 
	
	
 		 
	

















// Generated Code 

#ifndef _com_facebook_Response
#define _com_facebook_Response
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_Class.hpp>

#include <com_facebook_model_GraphObject.hpp>

#include <com_facebook_FacebookRequestError.hpp>

#include <com_facebook_model_GraphObjectList.hpp>

#include <java_net_HttpURLConnection.hpp>

#include <com_facebook_Request.hpp>

#include <com_facebook_Response_PagingDirection.hpp>

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
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace COM_FACEBOOK_RESPONSE_PAGINGDIRECTION;
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_String;

class java_lang_Class;

class com_facebook_model_GraphObject;

class com_facebook_FacebookRequestError;

class com_facebook_model_GraphObjectList;

class java_net_HttpURLConnection;

class com_facebook_Request;


class com_facebook_Response
{
public:

	com_facebook_Response(const com_facebook_Response& cc);
	com_facebook_Response(void * proxy);
	// Public Constructors
	com_facebook_Response();
	// Default Destructor
	virtual ~com_facebook_Response();
	// Functions
	 FacebookCXX::java_lang_String toString();
	 FacebookCXX::com_facebook_model_GraphObject getGraphObjectAs(FacebookCXX::java_lang_Class& arg0);
	 FacebookCXX::com_facebook_FacebookRequestError getError();
	 FacebookCXX::com_facebook_model_GraphObject getGraphObject();
	 FacebookCXX::com_facebook_model_GraphObjectList getGraphObjectList();
	 FacebookCXX::com_facebook_model_GraphObjectList getGraphObjectListAs(FacebookCXX::java_lang_Class& arg0);
	 FacebookCXX::java_net_HttpURLConnection getConnection();
	 FacebookCXX::com_facebook_Request getRequest();
	 FacebookCXX::com_facebook_Request getRequestForPagedResults(COM_FACEBOOK_RESPONSE_PAGINGDIRECTION::com_facebook_Response_PagingDirection& arg0);
	 bool getIsFromCache();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Response