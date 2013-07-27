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

// Forward Declarations





class com_facebook_AccessToken;


class com_facebook_AccessToken
{
public:

	com_facebook_AccessToken(const com_facebook_AccessToken& cc);
	com_facebook_AccessToken(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_AccessToken();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_util_List getPermissions();
	 AndroidCXX::java_lang_String getToken();
	 AndroidCXX::java_util_Date getExpires();
	 com_facebook_AccessTokenSource::com_facebook_AccessTokenSource getSource();
	 AndroidCXX::java_util_Date getLastRefresh();
	static FacebookCXX::com_facebook_AccessToken createFromExistingAccessToken(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_Date const& arg1,AndroidCXX::java_util_Date const& arg2,com_facebook_AccessTokenSource::com_facebook_AccessTokenSource const& arg3,AndroidCXX::java_util_List const& arg4);
	static FacebookCXX::com_facebook_AccessToken createFromNativeLinkingIntent(AndroidCXX::android_content_Intent const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_AccessToken