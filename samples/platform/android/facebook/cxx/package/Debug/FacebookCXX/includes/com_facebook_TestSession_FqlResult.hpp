/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
 		 








// Generated Code 

#ifndef _com_facebook_TestSession_FqlResult
#define _com_facebook_TestSession_FqlResult
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


class com_facebook_TestSession_FqlResult : public FacebookCXX::com_facebook_model_GraphObject
{
public:

	com_facebook_TestSession_FqlResult(const com_facebook_TestSession_FqlResult& cc);
	com_facebook_TestSession_FqlResult(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_TestSession_FqlResult();
	// Functions
	virtual FacebookCXX::com_facebook_model_GraphObjectList * getFqlResultSet() ;

protected:
	com_facebook_TestSession_FqlResult();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_TestSession_FqlResult