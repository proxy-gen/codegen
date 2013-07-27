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
	java_io_Reader(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_io_Reader();
	// Functions
	 void close();
	 void mark(int const& arg0);
	 void reset();
	 int read(std::vector<char> const& arg0,int const& arg1,int const& arg2);
	 int read();
	 int read(std::vector<char> const& arg0);
	 int read(AndroidCXX::java_nio_CharBuffer const& arg0);
	 long skip(long const& arg0);
	 bool markSupported();
	 bool ready();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_Reader