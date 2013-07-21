/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 	
 		 
 	
 	
 		 
 		 
 	
 		 
	
 	
 		 
 		 
 		 
 	
 		 
 		 
 	
 		 
 		 
 	
 		 






















// Generated Code 

#ifndef _java_util_Collection
#define _java_util_Collection
//
// Scroll Down 
//


#include <java_lang_Object.hpp>


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


using namespace AndroidCXX;

// Forward Declarations

class java_lang_Object;

class java_util_Collection;

class java_util_Iterator;

class java_util_Collection
{
public:

	java_util_Collection(const java_util_Collection& cc);
	java_util_Collection(void * proxy);
	// Public Constructors
	java_util_Collection();
	// Default Destructor
	virtual ~java_util_Collection();
	// Functions
	 bool add(java_lang_Object& arg0);
	 bool equals(java_lang_Object& arg0);
	 int hashCode();
	 void clear();
	 bool isEmpty();
	 bool contains(java_lang_Object& arg0);
	 bool addAll(java_util_Collection& arg0);
	 int size();
	 std::vector<java_lang_Object > toArray(std::vector<java_lang_Object >& arg0);
	 std::vector<java_lang_Object > toArray();
	 java_util_Iterator iterator();
	 bool remove(java_lang_Object& arg0);
	 bool removeAll(java_util_Collection& arg0);
	 bool containsAll(java_util_Collection& arg0);
	 bool retainAll(java_util_Collection& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Collection