/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//









// Generated Code 

#ifndef _com_facebook_FacebookRequestError
#define _com_facebook_FacebookRequestError
//
// Scroll Down 
//



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

class com_facebook_FacebookRequestError : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_FacebookRequestError(const com_facebook_FacebookRequestError& cc);
	com_facebook_FacebookRequestError(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_FacebookRequestError();
	// Functions
	virtual int  getErrorCode() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_FacebookRequestError