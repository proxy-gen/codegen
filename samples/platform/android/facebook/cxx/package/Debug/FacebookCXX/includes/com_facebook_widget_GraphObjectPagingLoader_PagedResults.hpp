/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
 		 








// Generated Code 

#ifndef _com_facebook_widget_GraphObjectPagingLoader_PagedResults
#define _com_facebook_widget_GraphObjectPagingLoader_PagedResults
//
// Scroll Down 
//



#include <com_facebook_model_GraphObject.hpp>

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


class com_facebook_widget_GraphObjectPagingLoader_PagedResults : public FacebookCXX::com_facebook_model_GraphObject
{
public:

	com_facebook_widget_GraphObjectPagingLoader_PagedResults(const com_facebook_widget_GraphObjectPagingLoader_PagedResults& cc);
	com_facebook_widget_GraphObjectPagingLoader_PagedResults(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_GraphObjectPagingLoader_PagedResults();
	// Functions
	virtual FacebookCXX::com_facebook_model_GraphObjectList * getData() ;

protected:
	com_facebook_widget_GraphObjectPagingLoader_PagedResults();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_GraphObjectPagingLoader_PagedResults