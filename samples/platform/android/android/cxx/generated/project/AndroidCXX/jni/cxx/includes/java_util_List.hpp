/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
 			
 			
 			
		
 			
		
 			
		
		
		
 			
 			
 			

// Generated Code 

#ifndef _java_util_List
#define _java_util_List
//
// Scroll Down 
//























#include <java_lang_Object.hpp>

#include <java_util_Collection.hpp>

#include <java_util_Iterator.hpp>

#include <java_util_ListIterator.hpp>


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

class java_util_Collection;

class java_util_Iterator;

class java_util_ListIterator;


class java_util_List
{
public:
 void add(int& arg0,java_lang_Object& arg1);
 java_lang_Object get(int& arg0);
 bool equals(java_lang_Object& arg0);
 int hashCode();
 int indexOf(java_lang_Object& arg0);
 void clear();
 bool isEmpty();
 int lastIndexOf(java_lang_Object& arg0);
 bool contains(java_lang_Object& arg0);
 bool addAll(int& arg0,java_util_Collection& arg1);
 int size();
 std::vector<long> toArray(std::vector<long>& arg0);
 java_util_Iterator iterator();
 java_lang_Object remove(int& arg0,java_lang_Object& arg1);
 java_lang_Object set(int& arg0,java_lang_Object& arg1);
 java_util_ListIterator listIterator(int& arg0);
 java_util_List subList(int& arg0);
 bool removeAll(java_util_Collection& arg0);
 bool containsAll(java_util_Collection& arg0);
 bool retainAll(java_util_Collection& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_List