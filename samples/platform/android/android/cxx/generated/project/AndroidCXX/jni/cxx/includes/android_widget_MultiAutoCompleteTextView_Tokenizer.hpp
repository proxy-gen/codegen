/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	










// Generated Code 

#ifndef _android_widget_MultiAutoCompleteTextView_Tokenizer
#define _android_widget_MultiAutoCompleteTextView_Tokenizer
//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>

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

class java_lang_CharSequence;

class android_widget_MultiAutoCompleteTextView_Tokenizer
{
public:

	android_widget_MultiAutoCompleteTextView_Tokenizer(const android_widget_MultiAutoCompleteTextView_Tokenizer& cc);
	android_widget_MultiAutoCompleteTextView_Tokenizer(void * proxy);
	// Public Constructors
	android_widget_MultiAutoCompleteTextView_Tokenizer();
	// Default Destructor
	virtual ~android_widget_MultiAutoCompleteTextView_Tokenizer();
	// Functions
	 int findTokenStart(AndroidCXX::java_lang_CharSequence& arg0,int& arg1);
	 int findTokenEnd(AndroidCXX::java_lang_CharSequence& arg0,int& arg1);
	 AndroidCXX::java_lang_CharSequence terminateToken(AndroidCXX::java_lang_CharSequence& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_MultiAutoCompleteTextView_Tokenizer