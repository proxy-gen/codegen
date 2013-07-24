/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 	
 		 
	









// Generated Code 

#ifndef _com_facebook_Response_PagedResults
#define _com_facebook_Response_PagedResults
//
// Scroll Down 
//


#include <com_facebook_model_GraphObjectList.hpp>

#include <com_facebook_model_GraphObject.hpp>

#include <com_facebook_Response_PagingInfo.hpp>

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

class com_facebook_model_GraphObjectList;

class com_facebook_model_GraphObject;

class com_facebook_Response_PagingInfo;

class com_facebook_Response_PagedResults
{
public:

	com_facebook_Response_PagedResults(const com_facebook_Response_PagedResults& cc);
	com_facebook_Response_PagedResults(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// com_facebook_Response_PagedResults();
	// 
	// Default Destructor
	virtual ~com_facebook_Response_PagedResults();
	// Functions
	 FacebookCXX::com_facebook_model_GraphObjectList getData();
	 FacebookCXX::com_facebook_Response_PagingInfo getPaging();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Response_PagedResults