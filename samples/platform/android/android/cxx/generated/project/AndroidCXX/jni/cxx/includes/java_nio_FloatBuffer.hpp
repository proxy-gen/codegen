/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		
 			
		
		
		
		
		
		
		


#ifndef _java_nio_FloatBuffer
#define _java_nio_FloatBuffer



















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

class java_nio_FloatBuffer
{
public:
 float get(std::vector<float>& arg0,int& arg1);
 java_nio_FloatBuffer put(java_nio_FloatBuffer& arg0,float& arg1,int& arg2,std::vector<float>& arg3);
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 int compareTo(java_nio_FloatBuffer& arg0);
 bool isDirect();
 bool hasArray();
 std::vector<float> array();
 int arrayOffset();
static java_nio_FloatBuffer wrap(std::vector<float>& arg0,int& arg1);
static java_nio_FloatBuffer allocate(int& arg0);
 java_nio_FloatBuffer duplicate();
 java_nio_FloatBuffer slice();
 java_nio_FloatBuffer asReadOnlyBuffer();
 java_nio_FloatBuffer compact();
 java_nio_ByteOrder order();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_FloatBuffer