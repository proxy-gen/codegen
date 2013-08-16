/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_String.hpp>

#include <java_lang_StackTraceElement.hpp>

#include <java_io_PrintStream.hpp>

#include <java_io_PrintWriter.hpp>


#include <java_io_Serializable.hpp>

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


class java_lang_String;

class java_lang_StackTraceElement;

class java_io_PrintStream;

class java_io_PrintWriter;

class java_lang_Throwable : public java_io_Serializable
{
public:

	// Public ConstrucXXX
	java_lang_Throwable();
	java_lang_Throwable(AndroidCXX::java_lang_Throwable const& arg0);
	java_lang_Throwable(AndroidCXX::java_lang_String const& arg0);
	java_lang_Throwable(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Throwable const& arg1);
	java_lang_Throwable(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Throwable();
	// Functions
	virtual AndroidCXX::java_lang_Throwable * fillInStackTrace() ;
	virtual AndroidCXX::java_lang_Throwable * getCause() ;
	virtual AndroidCXX::java_lang_String * getLocalizedMessage() ;
	virtual AndroidCXX::java_lang_String * getMessage() ;
	virtual std::vector<java_lang_StackTraceElement>  getStackTrace() ;
	virtual AndroidCXX::java_lang_Throwable * initCause(AndroidCXX::java_lang_Throwable const& arg0) ;
	virtual void  printStackTrace(AndroidCXX::java_io_PrintStream const& arg0) ;
	virtual void  printStackTrace() ;
	virtual void  printStackTrace(AndroidCXX::java_io_PrintWriter const& arg0) ;
	virtual void  setStackTrace(std::vector<java_lang_StackTraceElement> const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Throwable