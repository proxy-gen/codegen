/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_io_Closeable.hpp>

#include <java_io_Flushable.hpp>

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

class java_io_Writer : public java_io_Closeable,public java_io_Flushable,public java_lang_Appendable
{
public:

	java_io_Writer(const java_io_Writer& cc);
	java_io_Writer(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_io_Writer();
	// Functions
	virtual AndroidCXX::java_io_Writer * append(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::java_io_Writer * append(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_io_Writer * append(char const& arg0) ;
	virtual void  close() ;
	virtual void  flush() ;
	virtual void  write(std::vector<char> const& arg0,int const& arg1,int const& arg2) ;
	virtual void  write(int const& arg0) ;
	virtual void  write(std::vector<char> const& arg0) ;
	virtual void  write(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  write(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2) ;

protected:
	java_io_Writer();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_Writer