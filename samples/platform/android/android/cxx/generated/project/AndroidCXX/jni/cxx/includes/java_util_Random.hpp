/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 	

// Generated Code 

#ifndef _java_util_Random
#define _java_util_Random
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

class java_util_Random
{
public:
	 int nextInt(int& arg0);
	 double nextDouble();
	 long nextLong();
	 void nextBytes(std::vector<char>& arg0);
	 void setSeed(long& arg0);
	 bool nextBoolean();
	 float nextFloat();
	 double nextGaussian();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Random