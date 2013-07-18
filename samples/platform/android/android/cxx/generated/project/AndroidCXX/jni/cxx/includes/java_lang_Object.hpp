/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		


#ifndef _java_lang_Object
#define _java_lang_Object









#include <java_lang_Class.hpp>
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

class java_lang_Object
{
public:
 void wait(long& arg0,int& arg1);
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 java_lang_Class getClass();
 void notify();
 void notifyAll();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Object