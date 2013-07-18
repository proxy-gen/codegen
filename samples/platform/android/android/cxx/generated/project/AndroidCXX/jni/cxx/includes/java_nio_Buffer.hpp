/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
		
		
		
		
		


#ifndef _java_nio_Buffer
#define _java_nio_Buffer

















#include <java_lang_Object.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class java_nio_Buffer
{
public:
 int limit(int& arg0);
 java_nio_Buffer clear();
 int remaining();
 bool isDirect();
 bool hasArray();
 java_lang_Object array();
 java_nio_Buffer position(int& arg0);
 int arrayOffset();
 int capacity();
 java_nio_Buffer mark();
 java_nio_Buffer reset();
 java_nio_Buffer flip();
 java_nio_Buffer rewind();
 bool hasRemaining();
 bool isReadOnly();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_Buffer