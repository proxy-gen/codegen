/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
 		 








// Generated Code 

#ifndef _com_facebook_model_GraphMultiResult
#define _com_facebook_model_GraphMultiResult
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


class com_facebook_model_GraphMultiResult : public FacebookCXX::com_facebook_model_GraphObject
{
public:

	com_facebook_model_GraphMultiResult(const com_facebook_model_GraphMultiResult& cc);
	com_facebook_model_GraphMultiResult(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_GraphMultiResult();
	// Functions
	virtual FacebookCXX::com_facebook_model_GraphObjectList * getData() ;

protected:
	com_facebook_model_GraphMultiResult();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphMultiResult