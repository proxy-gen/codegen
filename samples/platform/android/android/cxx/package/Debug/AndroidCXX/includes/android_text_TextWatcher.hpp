/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 










// Generated Code 

#ifndef _android_text_TextWatcher
#define _android_text_TextWatcher
//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>

#include <android_text_Editable.hpp>

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

class android_text_Editable;

class android_text_TextWatcher
{
public:

	android_text_TextWatcher(const android_text_TextWatcher& cc);
	android_text_TextWatcher(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_TextWatcher();
	// Functions
	 void beforeTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void onTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void afterTextChanged(AndroidCXX::android_text_Editable const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_TextWatcher