/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//





 		 
 		 
 		 
 		 









// Generated Code 

#ifndef _java_io_IOException
#define _java_io_IOException
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_Throwable.hpp>


#include <java_lang_Object.hpp>

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

class java_lang_Throwable;

class java_io_IOException : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	java_io_IOException(Proxy * aProxy = new Proxy());
	java_io_IOException(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	java_io_IOException(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Throwable const& arg1,Proxy * aProxy = new Proxy());
	java_io_IOException(AndroidCXX::java_lang_Throwable const& arg0,Proxy * aProxy = new Proxy());
	java_io_IOException(const java_io_IOException& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_io_IOException();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_IOException