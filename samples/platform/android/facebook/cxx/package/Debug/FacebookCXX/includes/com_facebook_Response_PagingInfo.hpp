/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	









// Generated Code 

#ifndef _com_facebook_Response_PagingInfo
#define _com_facebook_Response_PagingInfo
//
// Scroll Down 
//


#include <java_lang_String.hpp>


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


class com_facebook_Response_PagingInfo : public FacebookCXX::com_facebook_model_GraphObject
{
public:

	com_facebook_Response_PagingInfo(const com_facebook_Response_PagingInfo& cc);
	com_facebook_Response_PagingInfo(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Response_PagingInfo();
	// Functions
	virtual AndroidCXX::java_lang_String * getNext() ;
	virtual AndroidCXX::java_lang_String * getPrevious() ;

protected:
	com_facebook_Response_PagingInfo();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Response_PagingInfo