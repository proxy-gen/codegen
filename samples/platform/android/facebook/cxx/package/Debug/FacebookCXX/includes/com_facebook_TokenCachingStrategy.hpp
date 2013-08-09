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

// Forward Declarations






class com_facebook_TokenCachingStrategy
{
public:

	com_facebook_TokenCachingStrategy(const com_facebook_TokenCachingStrategy& cc);
	com_facebook_TokenCachingStrategy(Proxy proxy);
	// Public Constructors
	com_facebook_TokenCachingStrategy();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_TokenCachingStrategy();
	// Functions
	 void clear();
	 AndroidCXX::android_os_Bundle load();
	static AndroidCXX::java_util_List getPermissions(AndroidCXX::android_os_Bundle const& arg0);
	 void save(AndroidCXX::android_os_Bundle const& arg0);
	static AndroidCXX::java_lang_String getToken(AndroidCXX::android_os_Bundle const& arg0);
	static com_facebook_AccessTokenSource::com_facebook_AccessTokenSource getSource(AndroidCXX::android_os_Bundle const& arg0);
	static bool hasTokenInformation(AndroidCXX::android_os_Bundle const& arg0);
	static AndroidCXX::java_util_Date getExpirationDate(AndroidCXX::android_os_Bundle const& arg0);
	static void putToken(AndroidCXX::android_os_Bundle const& arg0,AndroidCXX::java_lang_String const& arg1);
	static void putExpirationDate(AndroidCXX::android_os_Bundle const& arg0,AndroidCXX::java_util_Date const& arg1);
	static long getExpirationMilliseconds(AndroidCXX::android_os_Bundle const& arg0);
	static void putExpirationMilliseconds(AndroidCXX::android_os_Bundle const& arg0,long const& arg1);
	static void putPermissions(AndroidCXX::android_os_Bundle const& arg0,AndroidCXX::java_util_List const& arg1);
	static void putSource(AndroidCXX::android_os_Bundle const& arg0,com_facebook_AccessTokenSource::com_facebook_AccessTokenSource const& arg1);
	static AndroidCXX::java_util_Date getLastRefreshDate(AndroidCXX::android_os_Bundle const& arg0);
	static void putLastRefreshDate(AndroidCXX::android_os_Bundle const& arg0,AndroidCXX::java_util_Date const& arg1);
	static long getLastRefreshMilliseconds(AndroidCXX::android_os_Bundle const& arg0);
	static void putLastRefreshMilliseconds(AndroidCXX::android_os_Bundle const& arg0,long const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_TokenCachingStrategy