/*
 * Header (Instance CXX)
 * Author: codegen
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

namespace AndroidCXX {

// Forward Declarations

class java_lang_CharSequence;

class android_widget_MultiAutoCompleteTextView_Tokenizer : public java_lang_Object
{
public:

	android_widget_MultiAutoCompleteTextView_Tokenizer(const android_widget_MultiAutoCompleteTextView_Tokenizer& cc);
	android_widget_MultiAutoCompleteTextView_Tokenizer(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_MultiAutoCompleteTextView_Tokenizer();
	// Functions
	virtual int  findTokenStart(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1) ;
	virtual int  findTokenEnd(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_CharSequence * terminateToken(AndroidCXX::java_lang_CharSequence const& arg0) ;

protected:
	android_widget_MultiAutoCompleteTextView_Tokenizer();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_MultiAutoCompleteTextView_Tokenizer