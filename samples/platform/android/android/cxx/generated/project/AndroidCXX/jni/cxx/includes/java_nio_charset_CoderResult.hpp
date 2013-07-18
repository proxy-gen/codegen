/*
 * Header (Singleton CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
		


#ifndef _java_nio_charset_CoderResult
#define _java_nio_charset_CoderResult












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

class java_nio_charset_CoderResult
{
public:
 java_lang_String toString();
 int length();
 void throwException();
 bool isUnderflow();
 bool isError();
 bool isOverflow();
static java_nio_charset_CoderResult malformedForLength(int& arg0);
 bool isMalformed();
 bool isUnmappable();
static java_nio_charset_CoderResult unmappableForLength(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_charset_CoderResult