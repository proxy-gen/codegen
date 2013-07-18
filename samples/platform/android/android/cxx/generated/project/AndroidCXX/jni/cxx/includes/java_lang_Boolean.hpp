/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
 			
		
 			


#ifndef _java_lang_Boolean
#define _java_lang_Boolean










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

class java_lang_Boolean
{
public:
 bool equals(java_lang_Object& arg0);
static java_lang_String toString(bool& arg0);
 int hashCode();
 int compareTo(java_lang_Boolean& arg0);
static bool getBoolean(java_lang_String& arg0);
 bool booleanValue();
static java_lang_Boolean valueOf(java_lang_String& arg0,bool& arg1);
static bool parseBoolean(java_lang_String& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Boolean