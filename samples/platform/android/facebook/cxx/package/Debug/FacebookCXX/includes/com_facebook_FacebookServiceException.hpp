/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	


 		 
 		 








// Generated Code 

#ifndef _com_facebook_FacebookServiceException
#define _com_facebook_FacebookServiceException
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


class com_facebook_FacebookServiceException : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_FacebookServiceException(FacebookCXX::com_facebook_FacebookRequestError const& arg0,AndroidCXX::java_lang_String const& arg1,Proxy * aProxy = new Proxy());
	com_facebook_FacebookServiceException(const com_facebook_FacebookServiceException& cc);
	com_facebook_FacebookServiceException(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_FacebookServiceException();
	// Functions
	virtual FacebookCXX::com_facebook_FacebookRequestError * getRequestError() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_FacebookServiceException