/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 	
 	













// Generated Code 

#ifndef _java_io_OutputStream
#define _java_io_OutputStream
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

class java_io_OutputStream
{
public:

	java_io_OutputStream(const java_io_OutputStream& cc);
	java_io_OutputStream(void * proxy);
	// Public Constructors
	java_io_OutputStream();
	// Default Destructor
	virtual ~java_io_OutputStream();
	// Functions
	 void write(int& arg0);
	 void write(std::vector<byte>& arg0);
	 void write(std::vector<byte>& arg0,int& arg1,int& arg2);
	 void flush();
	 void close();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_OutputStream