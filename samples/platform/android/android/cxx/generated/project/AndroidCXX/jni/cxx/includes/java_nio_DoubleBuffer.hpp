/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		
 			
		
		
		
		
		
		
		

// Generated Code 

#ifndef _java_nio_DoubleBuffer
#define _java_nio_DoubleBuffer
//
// Scroll Down 
//





















#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_nio_ByteOrder.hpp>

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


class java_lang_Object;

class java_lang_String;

class java_nio_ByteOrder;

class java_nio_DoubleBuffer
{
public:
 double get(std::vector<double>& arg0,int& arg1);
 java_nio_DoubleBuffer put(java_nio_DoubleBuffer& arg0,double& arg1,int& arg2,std::vector<double>& arg3);
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 int compareTo(java_nio_DoubleBuffer& arg0);
 bool isDirect();
 bool hasArray();
 std::vector<double> array();
 int arrayOffset();
static java_nio_DoubleBuffer wrap(std::vector<double>& arg0,int& arg1);
static java_nio_DoubleBuffer allocate(int& arg0);
 java_nio_DoubleBuffer duplicate();
 java_nio_DoubleBuffer slice();
 java_nio_DoubleBuffer asReadOnlyBuffer();
 java_nio_DoubleBuffer compact();
 java_nio_ByteOrder order();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_DoubleBuffer