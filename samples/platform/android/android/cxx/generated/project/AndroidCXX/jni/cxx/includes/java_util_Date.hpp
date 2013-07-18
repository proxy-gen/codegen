/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
 			
 			
 			
 			
		
		


#ifndef _java_util_Date
#define _java_util_Date





























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

class java_util_Date
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 java_lang_Object clone();
 int compareTo(java_util_Date& arg0);
 bool after(java_util_Date& arg0);
 bool before(java_util_Date& arg0);
static long parse(java_lang_String& arg0);
 void setTime(long& arg0);
 long getTime();
 int getYear();
 int getMonth();
 int getDate();
 int getHours();
 int getMinutes();
 int getSeconds();
static long UTC(int& arg0);
 void setDate(int& arg0);
 void setMonth(int& arg0);
 void setHours(int& arg0);
 void setMinutes(int& arg0);
 void setSeconds(int& arg0);
 void setYear(int& arg0);
 int getDay();
 java_lang_String toLocaleString();
 java_lang_String toGMTString();
 int getTimezoneOffset();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Date