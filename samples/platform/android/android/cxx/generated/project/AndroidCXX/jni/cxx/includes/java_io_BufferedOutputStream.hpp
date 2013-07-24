/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class java_io_BufferedOutputStream
{
public:

	java_io_BufferedOutputStream(const java_io_BufferedOutputStream& cc);
	java_io_BufferedOutputStream(void * proxy);
	// Public Constructors
	java_io_BufferedOutputStream(AndroidCXX::java_io_OutputStream& arg0);
	java_io_BufferedOutputStream(AndroidCXX::java_io_OutputStream& arg0,int& arg1);
	// TODO: remove
	// 
	// java_io_BufferedOutputStream();
	// 
	// Default Destructor
	virtual ~java_io_BufferedOutputStream();
	// Functions
	 void write(int& arg0);
	 void write(std::vector<byte>& arg0,int& arg1,int& arg2);
	 void flush();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_BufferedOutputStream