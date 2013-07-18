/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		
		
		
 			
 			
 			
 			

// Generated Code 

#ifndef _android_widget_DialerFilter
#define _android_widget_DialerFilter
//
// Scroll Down 
//

















#include <java_lang_String.hpp>

#include <android_view_KeyEvent.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_text_TextWatcher.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class android_view_KeyEvent;

class java_lang_CharSequence;

class android_text_TextWatcher;

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