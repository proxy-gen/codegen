/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			


#ifndef _java_io_Writer
#define _java_io_Writer






#include <java_lang_CharSequence.hpp>
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

class java_io_Writer
{
public:
 java_io_Writer append(java_lang_CharSequence& arg0,int& arg1,char& arg2);
 void write(std::vector<char>& arg0,int& arg1,java_lang_String& arg2);
 void flush();
 void close();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_Writer