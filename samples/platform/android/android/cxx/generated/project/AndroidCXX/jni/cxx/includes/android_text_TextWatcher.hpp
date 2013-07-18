/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			


#ifndef _android_text_TextWatcher
#define _android_text_TextWatcher





#include <java_lang_CharSequence.hpp>
#include <android_text_Editable.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_text_TextWatcher
{
public:
	void beforeTextChanged(java_lang_CharSequence& arg0,int& arg1);
	void onTextChanged(java_lang_CharSequence& arg0,int& arg1);
	void afterTextChanged(android_text_Editable& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_TextWatcher