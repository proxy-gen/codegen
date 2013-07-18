/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		


#ifndef _java_lang_CharSequence
#define _java_lang_CharSequence






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

class java_lang_CharSequence
{
public:
	java_lang_String toString();
	int length();
	char charAt(int& arg0);
	java_lang_CharSequence subSequence(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_CharSequence