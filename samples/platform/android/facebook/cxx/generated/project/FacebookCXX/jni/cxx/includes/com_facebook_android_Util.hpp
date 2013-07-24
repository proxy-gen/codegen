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

// Forward Declarations





class com_facebook_android_Util
{
public:

	com_facebook_android_Util(const com_facebook_android_Util& cc);
	com_facebook_android_Util(void * proxy);
	// Public Constructors
	com_facebook_android_Util();
	// TODO: remove
	// 
	// Default Destructor
	virtual ~com_facebook_android_Util();
	// Functions
	static AndroidCXX::android_os_Bundle parseUrl(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::java_lang_String openUrl(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2);
	static void showAlert(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2);
	static AndroidCXX::java_lang_String encodePostBody(AndroidCXX::android_os_Bundle& arg0,AndroidCXX::java_lang_String& arg1);
	static AndroidCXX::java_lang_String encodeUrl(AndroidCXX::android_os_Bundle& arg0);
	static AndroidCXX::android_os_Bundle decodeUrl(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::org_json_JSONObject parseJson(AndroidCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_Util