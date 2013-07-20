/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
	
	
 		 
	
	
	
	
 	
 		 
 	
 		 

// Generated Code 

#ifndef _java_lang_Throwable
#define _java_lang_Throwable
//
// Scroll Down 
//












#include <java_io_PrintStream.hpp>

#include <java_io_PrintWriter.hpp>


#include <java_lang_String.hpp>

#include <java_lang_StackTraceElement.hpp>

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

class java_io_PrintStream;

class java_io_PrintWriter;

class java_lang_Throwable;

class java_lang_String;

class java_lang_StackTraceElement;

class java_lang_Throwable
{
public:
	java_lang_Throwable(const java_lang_Throwable& cc);
	java_lang_Throwable(void * proxy);
	virtual ~java_lang_Throwable();
	 void printStackTrace(java_io_PrintStream& arg0,java_io_PrintWriter& arg1);
	 java_lang_Throwable *  fillInStackTrace();
	 java_lang_Throwable *  getCause();
	 java_lang_Throwable *  initCause(java_lang_Throwable& arg0);
	 java_lang_String *  toString();
	 java_lang_String *  getMessage();
	 java_lang_String *  getLocalizedMessage();
	 std::vector<long> getStackTrace();
	 void setStackTrace(std::vector<long>& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Throwable