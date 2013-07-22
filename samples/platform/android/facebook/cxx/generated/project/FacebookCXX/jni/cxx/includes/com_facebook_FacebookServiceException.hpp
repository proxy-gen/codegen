/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>

#include <com_facebook_FacebookRequestError.hpp>

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

// Forward Declarations

class java_lang_String;

class com_facebook_FacebookRequestError;

class com_facebook_FacebookServiceException
{
public:

	com_facebook_FacebookServiceException(const com_facebook_FacebookServiceException& cc);
	com_facebook_FacebookServiceException(void * proxy);
	// Public Constructors
	com_facebook_FacebookServiceException(FacebookCXX::com_facebook_FacebookRequestError& arg0,FacebookCXX::java_lang_String& arg1);
	com_facebook_FacebookServiceException();
	// Default Destructor
	virtual ~com_facebook_FacebookServiceException();
	// Functions
	 FacebookCXX::java_lang_String toString();
	 FacebookCXX::com_facebook_FacebookRequestError getRequestError();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_FacebookServiceException