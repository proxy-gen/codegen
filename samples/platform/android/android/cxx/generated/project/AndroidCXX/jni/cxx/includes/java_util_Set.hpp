/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 	
 		 
 	
 	
 		 
 		 
	
 	
 		 
 		 
 		 
 	
 		 
 		 
 	
 		 
 		 
 	
 		 

// Generated Code 

#ifndef _java_util_Set
#define _java_util_Set
//
// Scroll Down 
//

















#include <java_lang_Object.hpp>

#include <java_util_Collection.hpp>

#include <java_util_Iterator.hpp>

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

class java_util_Set
{
public:
	 bool add(java_lang_Object& arg0);
	 bool equals(java_lang_Object& arg0);
	 int hashCode();
	 void clear();
	 bool isEmpty();
	 bool contains(java_lang_Object& arg0);
	 bool addAll(java_util_Collection& arg0);
	 int size();
	 std::vector<long> toArray(std::vector<long>& arg0);
	 java_util_Iterator *  iterator();
	 bool remove(java_lang_Object& arg0);
	 bool removeAll(java_util_Collection& arg0);
	 bool containsAll(java_util_Collection& arg0);
	 bool retainAll(java_util_Collection& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Set