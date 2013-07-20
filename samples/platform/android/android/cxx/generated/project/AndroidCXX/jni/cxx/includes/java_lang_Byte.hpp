/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
	
 		 
	
 		 

// Generated Code 

#ifndef _java_lang_Byte
#define _java_lang_Byte
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

class java_lang_Byte;

class java_lang_Byte
{
public:
	java_lang_Byte(const java_lang_Byte& cc);
	java_lang_Byte(void * proxy);
	virtual ~java_lang_Byte();
	 bool equals(java_lang_Object& arg0);
	static java_lang_String *  toString(unsigned char& arg0);
	 int hashCode();
	 int compareTo(java_lang_Byte& arg0);
	 unsigned char byteValue();
	 short shortValue();
	 int intValue();
	 long longValue();
	 float floatValue();
	 double doubleValue();
	static java_lang_Byte *  valueOf(java_lang_String& arg0,int& arg1,unsigned char& arg2);
	static java_lang_Byte *  decode(java_lang_String& arg0);
	static unsigned char parseByte(java_lang_String& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Byte