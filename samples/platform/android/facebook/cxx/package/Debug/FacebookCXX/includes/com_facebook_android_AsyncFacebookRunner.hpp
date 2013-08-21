/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_content_Context.hpp>

#include <com_facebook_android_AsyncFacebookRunner_RequestListener.hpp>

#include <java_lang_Object.hpp>

#include <android_os_Bundle.hpp>

#include <java_lang_String.hpp>

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

	// Public ConstrucXXX
	com_facebook_android_AsyncFacebookRunner(FacebookCXX::com_facebook_android_Facebook const& arg0);
	com_facebook_android_AsyncFacebookRunner(const com_facebook_android_AsyncFacebookRunner& cc);
	com_facebook_android_AsyncFacebookRunner(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_android_AsyncFacebookRunner();
	// Functions
	virtual void  logout(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener const& arg1,AndroidCXX::java_lang_Object const& arg2) ;
	virtual void  logout(AndroidCXX::android_content_Context const& arg0,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener const& arg1) ;
	virtual void  request(AndroidCXX::android_os_Bundle const& arg0,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener const& arg1,AndroidCXX::java_lang_Object const& arg2) ;
	virtual void  request(AndroidCXX::android_os_Bundle const& arg0,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener const& arg1) ;
	virtual void  request(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Bundle const& arg1,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener const& arg2,AndroidCXX::java_lang_Object const& arg3) ;
	virtual void  request(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Bundle const& arg1,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener const& arg2) ;
	virtual void  request(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Bundle const& arg1,AndroidCXX::java_lang_String const& arg2,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener const& arg3,AndroidCXX::java_lang_Object const& arg4) ;
	virtual void  request(AndroidCXX::java_lang_String const& arg0,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener const& arg1,AndroidCXX::java_lang_Object const& arg2) ;
	virtual void  request(AndroidCXX::java_lang_String const& arg0,FacebookCXX::com_facebook_android_AsyncFacebookRunner_RequestListener const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_AsyncFacebookRunner