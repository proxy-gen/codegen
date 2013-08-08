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
	android_text_InputFilter(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_InputFilter();
	// Functions
	 AndroidCXX::java_lang_CharSequence filter(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,AndroidCXX::android_text_Spanned const& arg3,int const& arg4,int const& arg5);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_InputFilter