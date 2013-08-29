/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_net_HttpURLConnection.hpp>

#include <com_facebook_FacebookRequestError.hpp>

#include <java_lang_Class.hpp>

#include <com_facebook_model_GraphObject.hpp>

#include <com_facebook_model_GraphObjectList.hpp>

#include <com_facebook_Response_PagingDirection.hpp>

#include <com_facebook_Request.hpp>

#include <java_lang_String.hpp>


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


class com_facebook_FacebookRequestError;


class com_facebook_model_GraphObject;

class com_facebook_model_GraphObjectList;


class com_facebook_Request;


class com_facebook_Response 
{
public:

	// Public Constructor
	com_facebook_Response(const com_facebook_Response& cc);
	com_facebook_Response(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Response();
	// Functions
	virtual AndroidCXX::java_net_HttpURLConnection * getConnection() ;
	virtual FacebookCXX::com_facebook_FacebookRequestError * getError() ;
	virtual FacebookCXX::com_facebook_model_GraphObject * getGraphObjectAs(AndroidCXX::java_lang_Class const& arg0) ;
	virtual FacebookCXX::com_facebook_model_GraphObjectList * getGraphObjectListAs(AndroidCXX::java_lang_Class const& arg0) ;
	virtual FacebookCXX::com_facebook_model_GraphObjectList * getGraphObjectList() ;
	virtual FacebookCXX::com_facebook_model_GraphObject * getGraphObject() ;
	virtual bool  getIsFromCache() ;
	virtual FacebookCXX::com_facebook_Request * getRequestForPagedResults(com_facebook_Response_PagingDirection::com_facebook_Response_PagingDirection const& arg0) ;
	virtual FacebookCXX::com_facebook_Request * getRequest() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Response