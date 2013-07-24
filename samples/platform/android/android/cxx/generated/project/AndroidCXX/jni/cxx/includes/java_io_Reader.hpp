/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 	
 	
 		 

















// Generated Code 

#ifndef _java_io_Reader
#define _java_io_Reader
//
// Scroll Down 
//


#include <java_nio_CharBuffer.hpp>

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

class java_nio_CharBuffer;

class java_io_Reader
{
public:

	java_io_Reader(const java_io_Reader& cc);
	java_io_Reader(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_io_Reader();
	// 
	// Default Destructor
	virtual ~java_io_Reader();
	// Functions
	 void close();
	 void mark(int& arg0);
	 void reset();
	 int read(std::vector<char>& arg0,int& arg1,int& arg2);
	 int read();
	 int read(std::vector<char>& arg0);
	 int read(AndroidCXX::java_nio_CharBuffer& arg0);
	 long skip(long& arg0);
	 bool markSupported();
	 bool ready();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_Reader