/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
	











// Generated Code 

#ifndef _android_widget_MultiAutoCompleteTextView_CommaTokenizer
#define _android_widget_MultiAutoCompleteTextView_CommaTokenizer
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

// Forward Declarations

class java_lang_CharSequence;

class android_widget_MultiAutoCompleteTextView_CommaTokenizer
{
public:

	android_widget_MultiAutoCompleteTextView_CommaTokenizer(const android_widget_MultiAutoCompleteTextView_CommaTokenizer& cc);
	android_widget_MultiAutoCompleteTextView_CommaTokenizer(Proxy proxy);
	// Public Constructors
	android_widget_MultiAutoCompleteTextView_CommaTokenizer();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_MultiAutoCompleteTextView_CommaTokenizer();
	// Functions
	 int findTokenStart(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1);
	 int findTokenEnd(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1);
	 AndroidCXX::java_lang_CharSequence terminateToken(AndroidCXX::java_lang_CharSequence const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_MultiAutoCompleteTextView_CommaTokenizer