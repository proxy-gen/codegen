/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 		 
	
 		 
	















// Generated Code 

#ifndef _com_facebook_android_Util
#define _com_facebook_android_Util
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>

#include <android_content_Context.hpp>

#include <org_json_JSONObject.hpp>

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

// Forward Declarations

class java_lang_String;

class android_os_Bundle;

class android_content_Context;

class org_json_JSONObject;

class com_facebook_android_Util
{
public:

	com_facebook_android_Util(const com_facebook_android_Util& cc);
	com_facebook_android_Util(void * proxy);
	// Public Constructors
	com_facebook_android_Util();
	// Default Destructor
	virtual ~com_facebook_android_Util();
	// Functions
	static FacebookCXX::android_os_Bundle parseUrl(FacebookCXX::java_lang_String& arg0);
	static FacebookCXX::java_lang_String openUrl(FacebookCXX::java_lang_String& arg0,FacebookCXX::java_lang_String& arg1,FacebookCXX::android_os_Bundle& arg2);
	static void showAlert(FacebookCXX::android_content_Context& arg0,FacebookCXX::java_lang_String& arg1,FacebookCXX::java_lang_String& arg2);
	static FacebookCXX::java_lang_String encodePostBody(FacebookCXX::android_os_Bundle& arg0,FacebookCXX::java_lang_String& arg1);
	static FacebookCXX::java_lang_String encodeUrl(FacebookCXX::android_os_Bundle& arg0);
	static FacebookCXX::android_os_Bundle decodeUrl(FacebookCXX::java_lang_String& arg0);
	static FacebookCXX::org_json_JSONObject parseJson(FacebookCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_Util