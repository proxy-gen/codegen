/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		
 			
		
		
		
		
		
		
		


#ifndef _java_nio_ShortBuffer
#define _java_nio_ShortBuffer



















#include <java_nio_ByteOrder.hpp>
#include <java_lang_Object.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class java_nio_ShortBuffer
{
public:
 short get(std::vector<short>& arg0,int& arg1);
 java_nio_ShortBuffer put(java_nio_ShortBuffer& arg0,short& arg1,int& arg2,std::vector<short>& arg3);
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 int compareTo(java_nio_ShortBuffer& arg0);
 bool isDirect();
 bool hasArray();
 std::vector<short> array();
 int arrayOffset();
static java_nio_ShortBuffer wrap(std::vector<short>& arg0,int& arg1);
static java_nio_ShortBuffer allocate(int& arg0);
 java_nio_ShortBuffer duplicate();
 java_nio_ShortBuffer slice();
 java_nio_ShortBuffer asReadOnlyBuffer();
 java_nio_ShortBuffer compact();
 java_nio_ByteOrder order();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_ShortBuffer