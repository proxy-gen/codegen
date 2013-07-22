/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
	
 	
 		 
 		 
 		 
	
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 


























// Generated Code 

#ifndef _com_facebook_TokenCachingStrategy
#define _com_facebook_TokenCachingStrategy
//
// Scroll Down 
//


#include <android_os_Bundle.hpp>

#include <java_util_List.hpp>

#include <java_lang_String.hpp>

#include <com_facebook_AccessTokenSource.hpp>

#include <java_util_Date.hpp>

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

class android_os_Bundle;

class java_util_List;

class java_lang_String;


class java_util_Date;

class com_facebook_TokenCachingStrategy
{
public:

	com_facebook_TokenCachingStrategy(const com_facebook_TokenCachingStrategy& cc);
	com_facebook_TokenCachingStrategy(void * proxy);
	// Public Constructors
	com_facebook_TokenCachingStrategy();
	// Default Destructor
	virtual ~com_facebook_TokenCachingStrategy();
	// Functions
	 void clear();
	 FacebookCXX::android_os_Bundle load();
	static FacebookCXX::java_util_List getPermissions(FacebookCXX::android_os_Bundle& arg0);
	 void save(FacebookCXX::android_os_Bundle& arg0);
	static FacebookCXX::java_lang_String getToken(FacebookCXX::android_os_Bundle& arg0);
	static COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource getSource(FacebookCXX::android_os_Bundle& arg0);
	static bool hasTokenInformation(FacebookCXX::android_os_Bundle& arg0);
	static FacebookCXX::java_util_Date getExpirationDate(FacebookCXX::android_os_Bundle& arg0);
	static void putToken(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_lang_String& arg1);
	static void putExpirationDate(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_util_Date& arg1);
	static long getExpirationMilliseconds(FacebookCXX::android_os_Bundle& arg0);
	static void putExpirationMilliseconds(FacebookCXX::android_os_Bundle& arg0,long& arg1);
	static void putPermissions(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_util_List& arg1);
	static void putSource(FacebookCXX::android_os_Bundle& arg0,COM_FACEBOOK_ACCESSTOKENSOURCE::com_facebook_AccessTokenSource& arg1);
	static FacebookCXX::java_util_Date getLastRefreshDate(FacebookCXX::android_os_Bundle& arg0);
	static void putLastRefreshDate(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_util_Date& arg1);
	static long getLastRefreshMilliseconds(FacebookCXX::android_os_Bundle& arg0);
	static void putLastRefreshMilliseconds(FacebookCXX::android_os_Bundle& arg0,long& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_TokenCachingStrategy