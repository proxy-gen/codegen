/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 












// Generated Code 

#ifndef _com_facebook_android_AsyncFacebookRunner_RequestListener
#define _com_facebook_android_AsyncFacebookRunner_RequestListener
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <com_facebook_android_FacebookError.hpp>

#include <java_io_FileNotFoundException.hpp>

#include <java_net_MalformedURLException.hpp>

#include <java_io_IOException.hpp>

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
// 

// Forward Declarations

class java_lang_String;

class java_lang_Object;

class com_facebook_android_FacebookError;

class java_io_FileNotFoundException;

class java_net_MalformedURLException;

class java_io_IOException;

class com_facebook_android_AsyncFacebookRunner_RequestListener
{
public:

	com_facebook_android_AsyncFacebookRunner_RequestListener(const com_facebook_android_AsyncFacebookRunner_RequestListener& cc);
	com_facebook_android_AsyncFacebookRunner_RequestListener(void * proxy);
	// Public Constructors
	com_facebook_android_AsyncFacebookRunner_RequestListener();
	// Default Destructor
	virtual ~com_facebook_android_AsyncFacebookRunner_RequestListener();
	// Functions
	 void onComplete(FacebookCXX::java_lang_String& arg0,FacebookCXX::java_lang_Object& arg1);
	 void onFacebookError(FacebookCXX::com_facebook_android_FacebookError& arg0,FacebookCXX::java_lang_Object& arg1);
	 void onFileNotFoundException(FacebookCXX::java_io_FileNotFoundException& arg0,FacebookCXX::java_lang_Object& arg1);
	 void onMalformedURLException(FacebookCXX::java_net_MalformedURLException& arg0,FacebookCXX::java_lang_Object& arg1);
	 void onIOException(FacebookCXX::java_io_IOException& arg0,FacebookCXX::java_lang_Object& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_AsyncFacebookRunner_RequestListener