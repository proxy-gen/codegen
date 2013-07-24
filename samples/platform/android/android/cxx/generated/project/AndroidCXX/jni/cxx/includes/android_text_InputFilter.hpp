/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	








// Generated Code 

#ifndef _android_text_InputFilter
#define _android_text_InputFilter
//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>

#include <android_text_Spanned.hpp>

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

class android_text_Spanned;

class android_text_InputFilter
{
public:

	android_text_InputFilter(const android_text_InputFilter& cc);
	android_text_InputFilter(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_text_InputFilter();
	// 
	// Default Destructor
	virtual ~android_text_InputFilter();
	// Functions
	 AndroidCXX::java_lang_CharSequence filter(AndroidCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2,AndroidCXX::android_text_Spanned& arg3,int& arg4,int& arg5);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_InputFilter