/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class com_facebook_android_FacebookError
{
public:

	com_facebook_android_FacebookError(const com_facebook_android_FacebookError& cc);
	com_facebook_android_FacebookError(void * proxy);
	// Public Constructors
	com_facebook_android_FacebookError(FacebookCXX::java_lang_String& arg0);
	com_facebook_android_FacebookError(FacebookCXX::java_lang_String& arg0,FacebookCXX::java_lang_String& arg1,int& arg2);
	com_facebook_android_FacebookError();
	// Default Destructor
	virtual ~com_facebook_android_FacebookError();
	// Functions
	 int getErrorCode();
	 FacebookCXX::java_lang_String getErrorType();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_FacebookError