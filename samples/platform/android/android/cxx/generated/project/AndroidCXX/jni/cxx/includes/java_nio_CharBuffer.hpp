/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
		
 			
		
 			
		
 			
		
 			
		
 			
		
		
		
		
		
		


#ifndef _java_nio_CharBuffer
#define _java_nio_CharBuffer
























#include <java_nio_ByteOrder.hpp>
#include <java_lang_CharSequence.hpp>
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

class java_nio_CharBuffer
{
public:
 java_nio_CharBuffer get(std::vector<char>& arg0,int& arg1);
 java_nio_CharBuffer put(int& arg0,char& arg1,java_lang_String& arg2,std::vector<char>& arg3,java_nio_CharBuffer& arg4);
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 java_nio_CharBuffer append(java_lang_CharSequence& arg0,int& arg1,char& arg2);
 int hashCode();
 int compareTo(java_nio_CharBuffer& arg0);
 int length();
 char charAt(int& arg0);
 java_lang_CharSequence subSequence(int& arg0);
 bool isDirect();
 bool hasArray();
 std::vector<char> array();
 int arrayOffset();
static java_nio_CharBuffer wrap(java_lang_CharSequence& arg0,int& arg1,std::vector<char>& arg2);
 int read(java_nio_CharBuffer& arg0);
static java_nio_CharBuffer allocate(int& arg0);
 java_nio_CharBuffer duplicate();
 java_nio_CharBuffer slice();
 java_nio_CharBuffer asReadOnlyBuffer();
 java_nio_CharBuffer compact();
 java_nio_ByteOrder order();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_CharBuffer