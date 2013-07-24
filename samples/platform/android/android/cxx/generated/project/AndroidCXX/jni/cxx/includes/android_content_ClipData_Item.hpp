/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
	
	
	
 		 
	
 		 
	
 		 
	


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 



















// Generated Code 

#ifndef _android_content_ClipData_Item
#define _android_content_ClipData_Item
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_content_Intent.hpp>

#include <android_net_Uri.hpp>

#include <android_content_Context.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class java_lang_CharSequence;

class android_content_Intent;

class android_net_Uri;

class android_content_Context;

class android_content_ClipData_Item
{
public:

	android_content_ClipData_Item(const android_content_ClipData_Item& cc);
	android_content_ClipData_Item(void * proxy);
	// Public Constructors
	android_content_ClipData_Item(AndroidCXX::java_lang_CharSequence& arg0);
	android_content_ClipData_Item(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::java_lang_String& arg1);
	android_content_ClipData_Item(AndroidCXX::android_content_Intent& arg0);
	android_content_ClipData_Item(AndroidCXX::android_net_Uri& arg0);
	android_content_ClipData_Item(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::android_content_Intent& arg1,AndroidCXX::android_net_Uri& arg2);
	android_content_ClipData_Item(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_content_Intent& arg2,AndroidCXX::android_net_Uri& arg3);
	// TODO: remove
	// 
	// android_content_ClipData_Item();
	// 
	// Default Destructor
	virtual ~android_content_ClipData_Item();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_lang_CharSequence getText();
	 AndroidCXX::android_content_Intent getIntent();
	 AndroidCXX::android_net_Uri getUri();
	 AndroidCXX::java_lang_String getHtmlText();
	 AndroidCXX::java_lang_CharSequence coerceToText(AndroidCXX::android_content_Context& arg0);
	 AndroidCXX::java_lang_CharSequence coerceToStyledText(AndroidCXX::android_content_Context& arg0);
	 AndroidCXX::java_lang_String coerceToHtmlText(AndroidCXX::android_content_Context& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ClipData_Item