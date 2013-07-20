/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 	
 		 
	
 		 
 		 
 	
	
 		 
 	
 		 
 		 
 		 
 	
 		 
 	
 		 
	
 		 

// Generated Code 

#ifndef _java_io_PrintWriter
#define _java_io_PrintWriter
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

class java_io_PrintWriter;

class java_util_Locale;

class java_io_PrintWriter
{
public:
	java_io_PrintWriter(const java_io_PrintWriter& cc);
	java_io_PrintWriter(void * proxy);
	virtual ~java_io_PrintWriter();
	 void println(char& arg0,bool& arg1,java_lang_Object& arg2,java_lang_String& arg3,std::vector<char>& arg4,double& arg5,float& arg6,long& arg7,int& arg8);
	 java_io_PrintWriter *  append(java_lang_CharSequence& arg0,int& arg1,char& arg2);
	 java_io_PrintWriter *  format(java_util_Locale& arg0,java_lang_String& arg1,std::vector<long>& arg2);
	 void write(std::vector<char>& arg0,int& arg1,java_lang_String& arg2);
	 void print(java_lang_String& arg0,java_lang_Object& arg1,bool& arg2,char& arg3,int& arg4,long& arg5,float& arg6,double& arg7,std::vector<char>& arg8);
	 void flush();
	 void close();
	 bool checkError();
	 java_io_PrintWriter *  printf(java_lang_String& arg0,std::vector<long>& arg1,java_util_Locale& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_PrintWriter