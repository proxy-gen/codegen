/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
	
 		 
	
 		 

// Generated Code 

#ifndef _java_lang_Short
#define _java_lang_Short
//
// Scroll Down 
//

















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

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_lang_Short;

class java_lang_Short
{
public:
	 bool equals(java_lang_Object& arg0);
	static java_lang_String *  toString(short& arg0);
	 int hashCode();
	static short reverseBytes(short& arg0);
	 int compareTo(java_lang_Short& arg0);
	 unsigned char byteValue();
	 short shortValue();
	 int intValue();
	 long longValue();
	 float floatValue();
	 double doubleValue();
	static java_lang_Short *  valueOf(short& arg0,java_lang_String& arg1,int& arg2);
	static java_lang_Short *  decode(java_lang_String& arg0);
	static short parseShort(java_lang_String& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Short