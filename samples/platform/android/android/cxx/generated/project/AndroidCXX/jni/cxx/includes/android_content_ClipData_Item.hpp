/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
		
		
		
 			
		
 			
		
 			
		


#ifndef _android_content_ClipData_Item
#define _android_content_ClipData_Item










#include <android_net_Uri.hpp>
#include <android_content_Intent.hpp>
#include <java_lang_CharSequence.hpp>
#include <android_content_Context.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_content_ClipData_Item
{
public:
 java_lang_String toString();
 java_lang_CharSequence getText();
 android_content_Intent getIntent();
 android_net_Uri getUri();
 java_lang_String getHtmlText();
 java_lang_CharSequence coerceToText(android_content_Context& arg0);
 java_lang_CharSequence coerceToStyledText(android_content_Context& arg0);
 java_lang_String coerceToHtmlText(android_content_Context& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ClipData_Item