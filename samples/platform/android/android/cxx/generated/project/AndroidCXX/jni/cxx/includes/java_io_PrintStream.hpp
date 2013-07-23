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

#include <java_io_OutputStream.hpp>

#include <java_io_File.hpp>

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

class java_lang_Object;

class java_lang_String;

class java_lang_CharSequence;

class java_io_PrintStream;

class java_util_Locale;

class java_io_OutputStream;

class java_io_File;

class java_io_PrintStream
{
public:

	java_io_PrintStream(const java_io_PrintStream& cc);
	java_io_PrintStream(void * proxy);
	// Public Constructors
	java_io_PrintStream(AndroidCXX::java_io_OutputStream& arg0,bool& arg1);
	java_io_PrintStream(AndroidCXX::java_io_OutputStream& arg0,bool& arg1,AndroidCXX::java_lang_String& arg2);
	java_io_PrintStream(AndroidCXX::java_lang_String& arg0);
	java_io_PrintStream(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	java_io_PrintStream(AndroidCXX::java_io_File& arg0);
	java_io_PrintStream(AndroidCXX::java_io_File& arg0,AndroidCXX::java_lang_String& arg1);
	java_io_PrintStream(AndroidCXX::java_io_OutputStream& arg0);
	java_io_PrintStream();
	// Default Destructor
	virtual ~java_io_PrintStream();
	// Functions
	 void println(char& arg0);
	 void println();
	 void println(bool& arg0);
	 void println(AndroidCXX::java_lang_Object& arg0);
	 void println(AndroidCXX::java_lang_String& arg0);
	 void println(std::vector<char>& arg0);
	 void println(double& arg0);
	 void println(float& arg0);
	 void println(long& arg0);
	 void println(int& arg0);
	 AndroidCXX::java_io_PrintStream append(AndroidCXX::java_lang_CharSequence& arg0);
	 AndroidCXX::java_io_PrintStream append(AndroidCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2);
	 AndroidCXX::java_io_PrintStream append(char& arg0);
	 AndroidCXX::java_io_PrintStream format(AndroidCXX::java_util_Locale& arg0,AndroidCXX::java_lang_String& arg1,std::vector<AndroidCXX::java_lang_Object >& arg2);
	 AndroidCXX::java_io_PrintStream format(AndroidCXX::java_lang_String& arg0,std::vector<AndroidCXX::java_lang_Object >& arg1);
	 void write(std::vector<byte>& arg0,int& arg1,int& arg2);
	 void write(int& arg0);
	 void print(float& arg0);
	 void print(double& arg0);
	 void print(std::vector<char>& arg0);
	 void print(AndroidCXX::java_lang_String& arg0);
	 void print(AndroidCXX::java_lang_Object& arg0);
	 void print(bool& arg0);
	 void print(char& arg0);
	 void print(int& arg0);
	 void print(long& arg0);
	 void flush();
	 void close();
	 bool checkError();
	 AndroidCXX::java_io_PrintStream printf(AndroidCXX::java_lang_String& arg0,std::vector<AndroidCXX::java_lang_Object >& arg1);
	 AndroidCXX::java_io_PrintStream printf(AndroidCXX::java_util_Locale& arg0,AndroidCXX::java_lang_String& arg1,std::vector<AndroidCXX::java_lang_Object >& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_PrintStream