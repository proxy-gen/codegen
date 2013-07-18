/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
		
		
 			
		
 			
		
		
 			
 			
		

// Generated Code 

#ifndef _java_lang_Integer
#define _java_lang_Integer
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


class java_lang_Integer
{
public:
static int numberOfLeadingZeros(int& arg0);
static int numberOfTrailingZeros(int& arg0);
static int bitCount(int& arg0);
 bool equals(java_lang_Object& arg0);
static java_lang_String toString(int& arg0);
 int hashCode();
static int reverseBytes(int& arg0);
 int compareTo(java_lang_Integer& arg0);
 unsigned char byteValue();
 short shortValue();
 int intValue();
 long longValue();
 float floatValue();
 double doubleValue();
static java_lang_Integer valueOf(java_lang_String& arg0,int& arg1);
static java_lang_String toHexString(int& arg0);
static java_lang_Integer decode(java_lang_String& arg0);
static int reverse(int& arg0);
static int parseInt(java_lang_String& arg0,int& arg1);
static java_lang_String toOctalString(int& arg0);
static java_lang_String toBinaryString(int& arg0);
static java_lang_Integer getInteger(java_lang_String& arg0,java_lang_Integer& arg1,int& arg2);
static int highestOneBit(int& arg0);
static int lowestOneBit(int& arg0);
static int rotateLeft(int& arg0);
static int rotateRight(int& arg0);
static int signum(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Integer