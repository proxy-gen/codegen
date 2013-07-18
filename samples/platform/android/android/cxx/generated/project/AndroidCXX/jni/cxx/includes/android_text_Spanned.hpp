/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			

// Generated Code 

#ifndef _android_text_Spanned
#define _android_text_Spanned
//
// Scroll Down 
//








#include <java_lang_Class.hpp>

#include <java_lang_Object.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_Class;

class java_lang_Object;

class android_text_Spanned
{
public:
 std::vector<long> getSpans(int& arg0,java_lang_Class& arg1);
 int getSpanStart(java_lang_Object& arg0);
 int getSpanEnd(java_lang_Object& arg0);
 int getSpanFlags(java_lang_Object& arg0);
 int nextSpanTransition(int& arg0,java_lang_Class& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_Spanned