/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
		
		


#ifndef _java_lang_StackTraceElement
#define _java_lang_StackTraceElement










#include <java_lang_Object.hpp>
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

class java_lang_StackTraceElement
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 java_lang_String getFileName();
 int getLineNumber();
 java_lang_String getClassName();
 java_lang_String getMethodName();
 bool isNativeMethod();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_StackTraceElement