/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_app_Activity.hpp>

#include <java_util_List.hpp>

#include <java_lang_String.hpp>


#include <java_lang_Object.hpp>

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





class com_facebook_TestSession : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_TestSession(const com_facebook_TestSession& cc);
	com_facebook_TestSession(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_TestSession();
	// Functions
	static FacebookCXX::com_facebook_TestSession * createSessionWithPrivateUser(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::java_util_List const& arg1) ;
	static FacebookCXX::com_facebook_TestSession * createSessionWithSharedUser(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::java_util_List const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	static FacebookCXX::com_facebook_TestSession * createSessionWithSharedUser(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::java_util_List const& arg1) ;
	static AndroidCXX::java_lang_String * getTestApplicationId() ;
	static AndroidCXX::java_lang_String * getTestApplicationSecret() ;
	virtual AndroidCXX::java_lang_String * getTestUserId() ;
	static void  setTestApplicationId(AndroidCXX::java_lang_String const& arg0) ;
	static void  setTestApplicationSecret(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_TestSession