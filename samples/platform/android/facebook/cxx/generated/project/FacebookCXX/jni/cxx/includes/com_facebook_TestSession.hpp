/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
 	
	
 		 
 		 
 		 
 	
	
 		 
 		 
 		 
 	
 		 
	
 		 
	
 		 
	
 		 
	
















// Generated Code 

#ifndef _com_facebook_TestSession
#define _com_facebook_TestSession
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_app_Activity.hpp>

#include <java_util_List.hpp>


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

class android_app_Activity;

class java_util_List;

class com_facebook_TestSession;

class com_facebook_TestSession
{
public:

	com_facebook_TestSession(const com_facebook_TestSession& cc);
	com_facebook_TestSession(void * proxy);
	// Public Constructors
	com_facebook_TestSession();
	// Default Destructor
	virtual ~com_facebook_TestSession();
	// Functions
	 FacebookCXX::java_lang_String toString();
	static FacebookCXX::com_facebook_TestSession createSessionWithPrivateUser(FacebookCXX::android_app_Activity& arg0,FacebookCXX::java_util_List& arg1);
	static FacebookCXX::com_facebook_TestSession createSessionWithSharedUser(FacebookCXX::android_app_Activity& arg0,FacebookCXX::java_util_List& arg1);
	static FacebookCXX::com_facebook_TestSession createSessionWithSharedUser(FacebookCXX::android_app_Activity& arg0,FacebookCXX::java_util_List& arg1,FacebookCXX::java_lang_String& arg2);
	static FacebookCXX::java_lang_String getTestApplicationId();
	static void setTestApplicationId(FacebookCXX::java_lang_String& arg0);
	static FacebookCXX::java_lang_String getTestApplicationSecret();
	static void setTestApplicationSecret(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::java_lang_String getTestUserId();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_TestSession