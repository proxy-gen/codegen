/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
 	
 		 
	
	
	
	
 		 
 		 
 		 
 		 
 		 
 	
	
 		 
 		 
	















// Generated Code 

#ifndef _com_facebook_AccessToken
#define _com_facebook_AccessToken
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_util_List.hpp>

#include <java_util_Date.hpp>

#include <com_facebook_AccessTokenSource.hpp>


#include <android_content_Intent.hpp>

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
// using namespace COM_FACEBOOK_ACCESSTOKENSOURCE;
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

class java_util_List;

class java_util_Date;


class com_facebook_AccessToken;

class android_content_Intent;

class com_facebook_AccessToken
{
public:

	com_facebook_AccessToken(const com_facebook_AccessToken& cc);
	com_facebook_AccessToken(void * proxy);
	// Public Constructors
	com_facebook_AccessToken();
	// Default Destructor
	virtual ~com_facebook_AccessToken();
	// Functions
	 FacebookCXX::java_lang_String toString();
	 FacebookCXX::java_util_List getPermissions();
	 FacebookCXX::java_lang_String getToken();
	 FacebookCXX::java_util_Date getExpires();
	 COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource getSource();
	 FacebookCXX::java_util_Date getLastRefresh();
	static FacebookCXX::com_facebook_AccessToken createFromExistingAccessToken(FacebookCXX::java_lang_String& arg0,FacebookCXX::java_util_Date& arg1,FacebookCXX::java_util_Date& arg2,COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource& arg3,FacebookCXX::java_util_List& arg4);
	static FacebookCXX::com_facebook_AccessToken createFromNativeLinkingIntent(FacebookCXX::android_content_Intent& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_AccessToken