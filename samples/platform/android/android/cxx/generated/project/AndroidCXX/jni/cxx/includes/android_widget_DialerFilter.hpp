/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		
		
		
 			
 			
 			
 			


#ifndef _android_widget_DialerFilter
#define _android_widget_DialerFilter
















#include <android_text_TextWatcher.hpp>
#include <java_lang_CharSequence.hpp>
#include <android_view_KeyEvent.hpp>
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

class android_widget_DialerFilter
{
public:
 void append(java_lang_String& arg0);
 void setMode(int& arg0);
 int getMode();
 bool onKeyDown(int& arg0,android_view_KeyEvent& arg1);
 bool onKeyUp(int& arg0,android_view_KeyEvent& arg1);
 bool isQwertyKeyboard();
 java_lang_CharSequence getLetters();
 java_lang_CharSequence getDigits();
 java_lang_CharSequence getFilterText();
 void clearText();
 void setLettersWatcher(android_text_TextWatcher& arg0);
 void setDigitsWatcher(android_text_TextWatcher& arg0);
 void setFilterWatcher(android_text_TextWatcher& arg0);
 void removeFilterWatcher(android_text_TextWatcher& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_DialerFilter