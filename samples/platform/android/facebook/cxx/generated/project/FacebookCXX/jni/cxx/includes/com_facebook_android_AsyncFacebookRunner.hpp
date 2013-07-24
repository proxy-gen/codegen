/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 















// Generated Code 

#ifndef _com_facebook_android_AsyncFacebookRunner
#define _com_facebook_android_AsyncFacebookRunner
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>

#include <com_facebook_android_AsyncFacebookRunner_RequestListener.hpp>

#include <java_lang_Object.hpp>

#include <android_content_Context.hpp>

#include <com_facebook_android_Facebook.hpp>

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



class com_facebook_android_AsyncFacebookRunner_RequestListener;



class com_facebook_android_Facebook;

class com_facebook_android_AsyncFacebookRunner
{
public:

	com_facebook_android_AsyncFacebookRunner(const com_facebook_android_AsyncFacebookRunner& cc);
	com_facebook_android_AsyncFacebookRunner(void * proxy);
	// Public Constructors
	com_facebook_android_AsyncFacebookRunner(FacebookCXX::com_facebook_android_Facebook& arg0);
	// TODO: remove
	// 
	// com_facebook_android_AsyncFacebookRunner();
	// 
	// Default Destructor
	virtual ~com_facebook_android_AsyncFacebookRunner();
	// Functions
	 void request(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_os_Bundle& arg1,AndroidCXX::java_lang_String& arg2,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener& arg3,AndroidCXX::java_lang_Object& arg4);
	 void request(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_os_Bundle& arg1,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener& arg2,AndroidCXX::java_lang_Object& arg3);
	 void request(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_os_Bundle& arg1,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener& arg2);
	 void request(AndroidCXX::android_os_Bundle& arg0,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener& arg1,AndroidCXX::java_lang_Object& arg2);
	 void request(AndroidCXX::android_os_Bundle& arg0,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener& arg1);
	 void request(AndroidCXX::java_lang_String& arg0,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener& arg1,AndroidCXX::java_lang_Object& arg2);
	 void request(AndroidCXX::java_lang_String& arg0,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener& arg1);
	 void logout(AndroidCXX::android_content_Context& arg0,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener& arg1);
	 void logout(AndroidCXX::android_content_Context& arg0,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener& arg1,AndroidCXX::java_lang_Object& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_AsyncFacebookRunner