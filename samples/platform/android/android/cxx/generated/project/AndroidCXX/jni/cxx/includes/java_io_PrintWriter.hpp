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
	java_io_PrintWriter(Proxy proxy);
	// Public Constructors
	java_io_PrintWriter(AndroidCXX::java_io_Writer const& arg0,bool const& arg1);
	java_io_PrintWriter(AndroidCXX::java_io_OutputStream const& arg0,bool const& arg1);
	java_io_PrintWriter(AndroidCXX::java_lang_String const& arg0);
	java_io_PrintWriter(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_io_PrintWriter(AndroidCXX::java_io_File const& arg0);
	java_io_PrintWriter(AndroidCXX::java_io_File const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_io_PrintWriter(AndroidCXX::java_io_Writer const& arg0);
	java_io_PrintWriter(AndroidCXX::java_io_OutputStream const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_io_PrintWriter();
	// Functions
	 void println(char const& arg0);
	 void println();
	 void println(bool const& arg0);
	 void println(AndroidCXX::java_lang_Object const& arg0);
	 void println(AndroidCXX::java_lang_String const& arg0);
	 void println(std::vector<char> const& arg0);
	 void println(double const& arg0);
	 void println(float const& arg0);
	 void println(long const& arg0);
	 void println(int const& arg0);
	 AndroidCXX::java_io_PrintWriter append(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::java_io_PrintWriter append(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2);
	 AndroidCXX::java_io_PrintWriter append(char const& arg0);
	 AndroidCXX::java_io_PrintWriter format(AndroidCXX::java_util_Locale const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<AndroidCXX::java_lang_Object > const& arg2);
	 AndroidCXX::java_io_PrintWriter format(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_Object > const& arg1);
	 void write(std::vector<char> const& arg0);
	 void write(std::vector<char> const& arg0,int const& arg1,int const& arg2);
	 void write(int const& arg0);
	 void write(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2);
	 void write(AndroidCXX::java_lang_String const& arg0);
	 void print(AndroidCXX::java_lang_String const& arg0);
	 void print(AndroidCXX::java_lang_Object const& arg0);
	 void print(bool const& arg0);
	 void print(char const& arg0);
	 void print(int const& arg0);
	 void print(long const& arg0);
	 void print(float const& arg0);
	 void print(double const& arg0);
	 void print(std::vector<char> const& arg0);
	 void flush();
	 void close();
	 bool checkError();
	 AndroidCXX::java_io_PrintWriter printf(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_Object > const& arg1);
	 AndroidCXX::java_io_PrintWriter printf(AndroidCXX::java_util_Locale const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<AndroidCXX::java_lang_Object > const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_PrintWriter