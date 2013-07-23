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

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

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

class android_view_KeyEvent;

class java_lang_CharSequence;

class android_text_TextWatcher;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_DialerFilter
{
public:

	android_widget_DialerFilter(const android_widget_DialerFilter& cc);
	android_widget_DialerFilter(void * proxy);
	// Public Constructors
	android_widget_DialerFilter(AndroidCXX::android_content_Context& arg0);
	android_widget_DialerFilter(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_DialerFilter();
	// Default Destructor
	virtual ~android_widget_DialerFilter();
	// Functions
	 void append(AndroidCXX::java_lang_String& arg0);
	 void setMode(int& arg0);
	 int getMode();
	 bool onKeyDown(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onKeyUp(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool isQwertyKeyboard();
	 AndroidCXX::java_lang_CharSequence getLetters();
	 AndroidCXX::java_lang_CharSequence getDigits();
	 AndroidCXX::java_lang_CharSequence getFilterText();
	 void clearText();
	 void setLettersWatcher(AndroidCXX::android_text_TextWatcher& arg0);
	 void setDigitsWatcher(AndroidCXX::android_text_TextWatcher& arg0);
	 void setFilterWatcher(AndroidCXX::android_text_TextWatcher& arg0);
	 void removeFilterWatcher(AndroidCXX::android_text_TextWatcher& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_DialerFilter