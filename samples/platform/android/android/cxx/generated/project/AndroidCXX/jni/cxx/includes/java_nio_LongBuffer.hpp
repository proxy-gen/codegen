/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		
 			
		
		
		
		
		
		
		

// Generated Code 

#ifndef _java_nio_LongBuffer
#define _java_nio_LongBuffer
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

class java_nio_LongBuffer
{
public:
 long get(std::vector<long>& arg0,int& arg1);
 java_nio_LongBuffer put(java_nio_LongBuffer& arg0,long& arg1,int& arg2,std::vector<long>& arg3);
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 int compareTo(java_nio_LongBuffer& arg0);
 bool isDirect();
 bool hasArray();
 std::vector<long> array();
 int arrayOffset();
static java_nio_LongBuffer wrap(std::vector<long>& arg0,int& arg1);
static java_nio_LongBuffer allocate(int& arg0);
 java_nio_LongBuffer duplicate();
 java_nio_LongBuffer slice();
 java_nio_LongBuffer asReadOnlyBuffer();
 java_nio_LongBuffer compact();
 java_nio_ByteOrder order();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_LongBuffer