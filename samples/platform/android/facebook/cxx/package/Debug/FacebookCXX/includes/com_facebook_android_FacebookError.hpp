/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	


 		 
 		 
 		 









// Generated Code 

#ifndef _com_facebook_android_FacebookError
#define _com_facebook_android_FacebookError
//
// Scroll Down 
//


#include <java_lang_String.hpp>


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


class com_facebook_android_FacebookError 
{
public:

	// Public Constructor
	com_facebook_android_FacebookError(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_android_FacebookError(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	com_facebook_android_FacebookError(const com_facebook_android_FacebookError& cc);
	com_facebook_android_FacebookError(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_android_FacebookError();
	// Functions
	virtual int  getErrorCode() ;
	virtual AndroidCXX::java_lang_String * getErrorType() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_FacebookError