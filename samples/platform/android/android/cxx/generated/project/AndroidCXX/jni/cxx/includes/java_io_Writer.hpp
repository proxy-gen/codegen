/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
	
	
 	
 	
 		 
 		 

















// Generated Code 

#ifndef _java_io_Writer
#define _java_io_Writer
//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>


#include <java_lang_String.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_CharSequence;

class java_io_Writer;

class java_lang_String;

class java_io_Writer
{
public:

	java_io_Writer(const java_io_Writer& cc);
	java_io_Writer(void * proxy);
	// Public Constructors
	java_io_Writer();
	// Default Destructor
	virtual ~java_io_Writer();
	// Functions
	 AndroidCXX::java_io_Writer append(AndroidCXX::java_lang_CharSequence& arg0);
	 AndroidCXX::java_io_Writer append(AndroidCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2);
	 AndroidCXX::java_io_Writer append(char& arg0);
	 void write(std::vector<char>& arg0,int& arg1,int& arg2);
	 void write(int& arg0);
	 void write(std::vector<char>& arg0);
	 void write(AndroidCXX::java_lang_String& arg0);
	 void write(AndroidCXX::java_lang_String& arg0,int& arg1,int& arg2);
	 void flush();
	 void close();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_Writer