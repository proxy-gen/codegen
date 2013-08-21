/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	


 		 
 		 










// Generated Code 

#ifndef _java_io_BufferedOutputStream
#define _java_io_BufferedOutputStream
//
// Scroll Down 
//


#include <java_io_OutputStream.hpp>


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

class java_io_OutputStream;

class java_io_BufferedOutputStream : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	java_io_BufferedOutputStream(AndroidCXX::java_io_OutputStream const& arg0);
	java_io_BufferedOutputStream(AndroidCXX::java_io_OutputStream const& arg0,int const& arg1);
	java_io_BufferedOutputStream(const java_io_BufferedOutputStream& cc);
	java_io_BufferedOutputStream(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_io_BufferedOutputStream();
	// Functions
	virtual void  flush() ;
	virtual void  write(std::vector<byte> const& arg0,int const& arg1,int const& arg2) ;
	virtual void  write(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_BufferedOutputStream