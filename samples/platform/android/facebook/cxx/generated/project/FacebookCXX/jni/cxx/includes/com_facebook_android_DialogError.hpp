/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

// Forward Declarations

class java_lang_String;

class com_facebook_android_DialogError
{
public:

	com_facebook_android_DialogError(const com_facebook_android_DialogError& cc);
	com_facebook_android_DialogError(void * proxy);
	// Public Constructors
	com_facebook_android_DialogError(FacebookCXX::java_lang_String& arg0,int& arg1,FacebookCXX::java_lang_String& arg2);
	com_facebook_android_DialogError();
	// Default Destructor
	virtual ~com_facebook_android_DialogError();
	// Functions
	 int getErrorCode();
	 FacebookCXX::java_lang_String getFailingUrl();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_DialogError