/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//





 		 
 		 
 		 
 		 









// Generated Code 

#ifndef _com_facebook_FacebookAuthorizationException
#define _com_facebook_FacebookAuthorizationException
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_Throwable.hpp>


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



class com_facebook_FacebookAuthorizationException : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_FacebookAuthorizationException(Proxy * aProxy = new Proxy());
	com_facebook_FacebookAuthorizationException(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_FacebookAuthorizationException(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Throwable const& arg1,Proxy * aProxy = new Proxy());
	com_facebook_FacebookAuthorizationException(AndroidCXX::java_lang_Throwable const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_FacebookAuthorizationException(const com_facebook_FacebookAuthorizationException& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_FacebookAuthorizationException();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_FacebookAuthorizationException