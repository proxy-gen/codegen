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
#include <CXXTypes.hpp>


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
	// Public Constructors
	java_lang_Throwable();
	java_lang_Throwable(AndroidCXX::java_lang_String& arg0);
	java_lang_Throwable(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_Throwable& arg1);
	java_lang_Throwable(AndroidCXX::java_lang_Throwable& arg0);
	// Default Destructor
	virtual ~java_lang_Throwable();
	// Functions
	 void printStackTrace(AndroidCXX::java_io_PrintStream& arg0);
	 void printStackTrace();
	 void printStackTrace(AndroidCXX::java_io_PrintWriter& arg0);
	 AndroidCXX::java_lang_Throwable fillInStackTrace();
	 AndroidCXX::java_lang_Throwable getCause();
	 AndroidCXX::java_lang_Throwable initCause(AndroidCXX::java_lang_Throwable& arg0);
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_lang_String getMessage();
	 AndroidCXX::java_lang_String getLocalizedMessage();
	 std::vector<AndroidCXX::java_lang_StackTraceElement > getStackTrace();
	 void setStackTrace(std::vector<AndroidCXX::java_lang_StackTraceElement >& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Throwable