/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_CharSequence.hpp>

#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <java_util_Locale.hpp>

#include <java_io_File.hpp>

#include <java_io_OutputStream.hpp>


#include <java_io_Closeable.hpp>

#include <java_lang_Appendable.hpp>

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


class java_lang_CharSequence;

class java_lang_String;

class java_lang_Object;

class java_util_Locale;

class java_io_File;

class java_io_OutputStream;

class java_io_PrintStream : public java_io_Closeable,public java_lang_Appendable
{
public:

	// Public ConstrucXXX
	java_io_PrintStream(AndroidCXX::java_io_File const& arg0);
	java_io_PrintStream(AndroidCXX::java_io_File const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_io_PrintStream(AndroidCXX::java_io_OutputStream const& arg0);
	java_io_PrintStream(AndroidCXX::java_io_OutputStream const& arg0,bool const& arg1);
	java_io_PrintStream(AndroidCXX::java_io_OutputStream const& arg0,bool const& arg1,AndroidCXX::java_lang_String const& arg2);
	java_io_PrintStream(AndroidCXX::java_lang_String const& arg0);
	java_io_PrintStream(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_io_PrintStream(const java_io_PrintStream& cc);
	java_io_PrintStream(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_io_PrintStream();
	// Functions
	virtual AndroidCXX::java_io_PrintStream * append(char const& arg0) ;
	virtual AndroidCXX::java_io_PrintStream * append(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_io_PrintStream * append(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual bool  checkError() ;
	virtual void  close() ;
	virtual void  flush() ;
	virtual AndroidCXX::java_io_PrintStream * format(AndroidCXX::java_lang_String const& arg0,std::vector<java_lang_Object> const& arg1) ;
	virtual AndroidCXX::java_io_PrintStream * format(AndroidCXX::java_util_Locale const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<java_lang_Object> const& arg2) ;
	virtual void  print(std::vector<char> const& arg0) ;
	virtual void  print(bool const& arg0) ;
	virtual void  print(char const& arg0) ;
	virtual void  print(double const& arg0) ;
	virtual void  print(float const& arg0) ;
	virtual void  print(int const& arg0) ;
	virtual void  print(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  print(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  print(long const& arg0) ;
	virtual AndroidCXX::java_io_PrintStream * printf(AndroidCXX::java_lang_String const& arg0,std::vector<java_lang_Object> const& arg1) ;
	virtual AndroidCXX::java_io_PrintStream * printf(AndroidCXX::java_util_Locale const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<java_lang_Object> const& arg2) ;
	virtual void  println(std::vector<char> const& arg0) ;
	virtual void  println(bool const& arg0) ;
	virtual void  println(char const& arg0) ;
	virtual void  println(double const& arg0) ;
	virtual void  println(float const& arg0) ;
	virtual void  println(int const& arg0) ;
	virtual void  println(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  println(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  println(long const& arg0) ;
	virtual void  println() ;
	virtual void  write(std::vector<byte> const& arg0,int const& arg1,int const& arg2) ;
	virtual void  write(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_PrintStream