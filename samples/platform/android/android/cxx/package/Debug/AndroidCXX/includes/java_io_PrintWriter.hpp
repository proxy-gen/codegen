/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_CharSequence.hpp>

#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <java_util_Locale.hpp>

#include <java_io_File.hpp>

#include <java_io_OutputStream.hpp>

#include <java_io_Writer.hpp>


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


class java_util_Locale;

class java_io_File;

class java_io_OutputStream;

class java_io_Writer;

class java_io_PrintWriter : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	java_io_PrintWriter(AndroidCXX::java_io_File const& arg0);
	java_io_PrintWriter(AndroidCXX::java_io_File const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_io_PrintWriter(AndroidCXX::java_io_OutputStream const& arg0);
	java_io_PrintWriter(AndroidCXX::java_io_OutputStream const& arg0,bool const& arg1);
	java_io_PrintWriter(AndroidCXX::java_io_Writer const& arg0);
	java_io_PrintWriter(AndroidCXX::java_io_Writer const& arg0,bool const& arg1);
	java_io_PrintWriter(AndroidCXX::java_lang_String const& arg0);
	java_io_PrintWriter(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_io_PrintWriter(const java_io_PrintWriter& cc);
	java_io_PrintWriter(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_io_PrintWriter();
	// Functions
	virtual AndroidCXX::java_io_PrintWriter * append(char const& arg0) ;
	virtual AndroidCXX::java_io_PrintWriter * append(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_io_PrintWriter * append(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual bool  checkError() ;
	virtual void  close() ;
	virtual void  flush() ;
	virtual AndroidCXX::java_io_PrintWriter * format(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_Object> const& arg1) ;
	virtual AndroidCXX::java_io_PrintWriter * format(AndroidCXX::java_util_Locale const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<AndroidCXX::java_lang_Object> const& arg2) ;
	virtual void  print(std::vector<char> const& arg0) ;
	virtual void  print(bool const& arg0) ;
	virtual void  print(char const& arg0) ;
	virtual void  print(double const& arg0) ;
	virtual void  print(float const& arg0) ;
	virtual void  print(int const& arg0) ;
	virtual void  print(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  print(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  print(long const& arg0) ;
	virtual AndroidCXX::java_io_PrintWriter * printf(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_Object> const& arg1) ;
	virtual AndroidCXX::java_io_PrintWriter * printf(AndroidCXX::java_util_Locale const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<AndroidCXX::java_lang_Object> const& arg2) ;
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
	virtual void  write(std::vector<char> const& arg0,int const& arg1,int const& arg2) ;
	virtual void  write(std::vector<char> const& arg0) ;
	virtual void  write(int const& arg0) ;
	virtual void  write(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2) ;
	virtual void  write(AndroidCXX::java_lang_String const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_PrintWriter