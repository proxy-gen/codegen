/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	


 		 
 		 








// Generated Code 

#ifndef _com_facebook_android_DialogError
#define _com_facebook_android_DialogError
//
// Scroll Down 
//


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


class com_facebook_android_DialogError : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_android_DialogError(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2,Proxy * aProxy = new Proxy());
	com_facebook_android_DialogError(const com_facebook_android_DialogError& cc);
	com_facebook_android_DialogError(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_android_DialogError();
	// Functions
	virtual int  getErrorCode() ;
	virtual AndroidCXX::java_lang_String * getFailingUrl() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_DialogError