/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			


#ifndef _java_io_Reader
#define _java_io_Reader









#include <java_nio_CharBuffer.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class java_io_Reader
{
public:
 void close();
 void mark(int& arg0);
 void reset();
 int read(std::vector<char>& arg0,int& arg1,java_nio_CharBuffer& arg2);
 long skip(long& arg0);
 bool markSupported();
 bool ready();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_Reader