/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
		
		
 			


#ifndef _java_lang_Float
#define _java_lang_Float





















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

class java_lang_Float
{
public:
 bool equals(java_lang_Object& arg0);
static java_lang_String toString(float& arg0);
 int hashCode();
static int floatToRawIntBits(float& arg0);
static int floatToIntBits(float& arg0);
static float intBitsToFloat(int& arg0);
 int compareTo(java_lang_Float& arg0);
 unsigned char byteValue();
 short shortValue();
 int intValue();
 long longValue();
 float floatValue();
 double doubleValue();
static java_lang_Float valueOf(java_lang_String& arg0,float& arg1);
static java_lang_String toHexString(float& arg0);
static int compare(float& arg0);
static bool isNaN(float& arg0);
static float parseFloat(java_lang_String& arg0);
static bool isInfinite(float& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Float