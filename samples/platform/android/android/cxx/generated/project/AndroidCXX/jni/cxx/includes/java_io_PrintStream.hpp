/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 	
 		 
	
 		 
 		 
 	
	
 		 
 	
 	
 		 
 		 
 		 
 	
 		 
	
 		 

// Generated Code 

#ifndef _java_io_PrintStream
#define _java_io_PrintStream
//
// Scroll Down 
//












#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>


#include <java_util_Locale.hpp>

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

class java_lang_Object;

class java_lang_String;

class java_lang_CharSequence;

class java_io_PrintStream;

class java_util_Locale;

class java_io_PrintStream
{
public:
	java_io_PrintStream(const java_io_PrintStream& cc);
	java_io_PrintStream(void * proxy);
	virtual ~java_io_PrintStream();
	 void println(char& arg0,bool& arg1,java_lang_Object& arg2,java_lang_String& arg3,std::vector<char>& arg4,double& arg5,float& arg6,long& arg7,int& arg8);
	 java_io_PrintStream *  append(java_lang_CharSequence& arg0,int& arg1,char& arg2);
	 java_io_PrintStream *  format(java_util_Locale& arg0,java_lang_String& arg1,std::vector<long>& arg2);
	 void write(std::vector<char>& arg0,int& arg1);
	 void print(float& arg0,double& arg1,std::vector<char>& arg2,java_lang_String& arg3,java_lang_Object& arg4,bool& arg5,char& arg6,int& arg7,long& arg8);
	 void flush();
	 void close();
	 bool checkError();
	 java_io_PrintStream *  printf(java_lang_String& arg0,std::vector<long>& arg1,java_util_Locale& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_PrintStream