/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
		
 			
 			
 			
		


#ifndef _android_util_Property
#define _android_util_Property








#include <java_lang_Class.hpp>
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

class android_util_Property
{
public:
 java_lang_Object get(java_lang_Object& arg0);
 java_lang_String getName();
 java_lang_Class getType();
 void set(java_lang_Object& arg0);
 bool isReadOnly();
static android_util_Property of(java_lang_Class& arg0,java_lang_String& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_Property