/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
 			
 			
 			
 			
 			
		
 			
		


#ifndef _java_util_ArrayList
#define _java_util_ArrayList

















#include <java_util_Collection.hpp>
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

class java_util_ArrayList
{
public:
 void add(int& arg0,java_lang_Object& arg1);
 java_lang_Object get(int& arg0);
 java_lang_Object clone();
 int indexOf(java_lang_Object& arg0);
 void clear();
 bool isEmpty();
 int lastIndexOf(java_lang_Object& arg0);
 bool contains(java_lang_Object& arg0);
 bool addAll(java_util_Collection& arg0,int& arg1);
 int size();
 std::vector<long> toArray(std::vector<long>& arg0);
 java_lang_Object remove(int& arg0,java_lang_Object& arg1);
 java_lang_Object set(int& arg0,java_lang_Object& arg1);
 void ensureCapacity(int& arg0);
 void trimToSize();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_ArrayList