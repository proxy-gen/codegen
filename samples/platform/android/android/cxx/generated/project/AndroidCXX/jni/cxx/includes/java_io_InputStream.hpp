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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_io_InputStream
{
public:
	 void close();
	 void mark(int& arg0);
	 void reset();
	 int read(std::vector<char>& arg0,int& arg1);
	 long skip(long& arg0);
	 int available();
	 bool markSupported();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_InputStream