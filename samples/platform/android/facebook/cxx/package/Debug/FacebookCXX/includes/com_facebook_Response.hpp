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


#include <com_facebook_FacebookRequestError.hpp>

#include <java_lang_String.hpp>


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

class com_facebook_FacebookRequestError;


class com_facebook_Response : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_Response(const com_facebook_Response& cc);
	com_facebook_Response(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Response();
	// Functions
	virtual FacebookCXX::com_facebook_FacebookRequestError * getError() ;
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