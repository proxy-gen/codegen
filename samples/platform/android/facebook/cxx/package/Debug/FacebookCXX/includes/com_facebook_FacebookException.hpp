/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//





 		 
 		 
 		 
 		 









// Generated Code 

#ifndef _com_facebook_FacebookException
#define _com_facebook_FacebookException
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



class com_facebook_FacebookException : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_FacebookException(Proxy * aProxy = new Proxy());
	com_facebook_FacebookException(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_FacebookException(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Throwable const& arg1,Proxy * aProxy = new Proxy());
	com_facebook_FacebookException(AndroidCXX::java_lang_Throwable const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_FacebookException(const com_facebook_FacebookException& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_FacebookException();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_FacebookException