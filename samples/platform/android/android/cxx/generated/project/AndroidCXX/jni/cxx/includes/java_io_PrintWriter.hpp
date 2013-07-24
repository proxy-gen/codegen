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

#include <java_io_Writer.hpp>

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

class java_io_PrintWriter;

class java_util_Locale;

class java_io_Writer;

class java_io_OutputStream;

class java_io_File;

class java_io_PrintWriter
{
public:

	java_io_PrintWriter(const java_io_PrintWriter& cc);
	java_io_PrintWriter(void * proxy);
	// Public Constructors
	java_io_PrintWriter(AndroidCXX::java_io_Writer& arg0,bool& arg1);
	java_io_PrintWriter(AndroidCXX::java_io_OutputStream& arg0,bool& arg1);
	java_io_PrintWriter(AndroidCXX::java_lang_String& arg0);
	java_io_PrintWriter(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	java_io_PrintWriter(AndroidCXX::java_io_File& arg0);
	java_io_PrintWriter(AndroidCXX::java_io_File& arg0,AndroidCXX::java_lang_String& arg1);
	java_io_PrintWriter(AndroidCXX::java_io_Writer& arg0);
	java_io_PrintWriter(AndroidCXX::java_io_OutputStream& arg0);
	// TODO: remove
	// 
	// java_io_PrintWriter();
	// 
	// Default Destructor
	virtual ~java_io_PrintWriter();
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
	 AndroidCXX::java_io_PrintWriter append(AndroidCXX::java_lang_CharSequence& arg0);
	 AndroidCXX::java_io_PrintWriter append(AndroidCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2);
	 AndroidCXX::java_io_PrintWriter append(char& arg0);
	 AndroidCXX::java_io_PrintWriter format(AndroidCXX::java_util_Locale& arg0,AndroidCXX::java_lang_String& arg1,std::vector<AndroidCXX::java_lang_Object >& arg2);
	 AndroidCXX::java_io_PrintWriter format(AndroidCXX::java_lang_String& arg0,std::vector<AndroidCXX::java_lang_Object >& arg1);
	 void write(std::vector<char>& arg0);
	 void write(std::vector<char>& arg0,int& arg1,int& arg2);
	 void write(int& arg0);
	 void write(AndroidCXX::java_lang_String& arg0,int& arg1,int& arg2);
	 void write(AndroidCXX::java_lang_String& arg0);
	 void print(AndroidCXX::java_lang_String& arg0);
	 void print(AndroidCXX::java_lang_Object& arg0);
	 void print(bool& arg0);
	 void print(char& arg0);
	 void print(int& arg0);
	 void print(long& arg0);
	 void print(float& arg0);
	 void print(double& arg0);
	 void print(std::vector<char>& arg0);
	 void flush();
	 void close();
	 bool checkError();
	 AndroidCXX::java_io_PrintWriter printf(AndroidCXX::java_lang_String& arg0,std::vector<AndroidCXX::java_lang_Object >& arg1);
	 AndroidCXX::java_io_PrintWriter printf(AndroidCXX::java_util_Locale& arg0,AndroidCXX::java_lang_String& arg1,std::vector<AndroidCXX::java_lang_Object >& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_PrintWriter