/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 	
 	
















// Generated Code 

#ifndef _java_io_InputStream
#define _java_io_InputStream
//
// Scroll Down 
//


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

class java_io_InputStream
{
public:

	java_io_InputStream(const java_io_InputStream& cc);
	java_io_InputStream(void * proxy);
	// Public Constructors
	java_io_InputStream();
	// Default Destructor
	virtual ~java_io_InputStream();
	// Functions
	 void close();
	 void mark(int& arg0);
	 void reset();
	 int read(std::vector<byte>& arg0,int& arg1,int& arg2);
	 int read(std::vector<byte>& arg0);
	 int read();
	 long skip(long& arg0);
	 int available();
	 bool markSupported();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_InputStream