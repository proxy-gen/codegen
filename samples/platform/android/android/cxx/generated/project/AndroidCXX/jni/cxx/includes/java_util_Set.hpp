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
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class AndroidCXX::java_lang_Object;

class AndroidCXX::java_util_Collection;

class AndroidCXX::java_util_Iterator;

class java_util_Set
{
public:

	java_util_Set(const java_util_Set& cc);
	java_util_Set(void * proxy);
	// Public Constructors
	java_util_Set();
	// Default Destructor
	virtual ~java_util_Set();
	// Functions
	 bool add(AndroidCXX::java_lang_Object& arg0);
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 int hashCode();
	 void clear();
	 bool isEmpty();
	 bool contains(AndroidCXX::java_lang_Object& arg0);
	 bool addAll(AndroidCXX::java_util_Collection& arg0);
	 int size();
	 std::vector<java_lang_Object > toArray(std::vector<java_lang_Object >& arg0);
	 std::vector<java_lang_Object > toArray();
	 AndroidCXX::java_util_Iterator iterator();
	 bool remove(AndroidCXX::java_lang_Object& arg0);
	 bool removeAll(AndroidCXX::java_util_Collection& arg0);
	 bool containsAll(AndroidCXX::java_util_Collection& arg0);
	 bool retainAll(AndroidCXX::java_util_Collection& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Set