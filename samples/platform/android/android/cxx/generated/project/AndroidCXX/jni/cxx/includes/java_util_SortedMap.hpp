/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 	
 		 
	
 	
 		 
 	
 		 
 		 
	
 	
 		 
	
 	
 		 
 		 
 		 
	
 	
 		 
 		 
 		 
	
 	
 		 
 		 
 		 
	
 	
 		 
 		 
	
	
















// Generated Code 

#ifndef _java_util_SortedMap
#define _java_util_SortedMap
//
// Scroll Down 
//


#include <java_util_Collection.hpp>

#include <java_lang_Object.hpp>

#include <java_util_Set.hpp>

#include <java_util_Map_Entry.hpp>

#include <java_util_Comparator.hpp>


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

class java_util_Collection;

class java_lang_Object;

class java_util_Set;

class java_util_Map_Entry;

class java_util_Comparator;

class java_util_SortedMap;

class java_util_SortedMap
{
public:

	java_util_SortedMap(const java_util_SortedMap& cc);
	java_util_SortedMap(void * proxy);
	// Public Constructors
	java_util_SortedMap();
	// Default Destructor
	virtual ~java_util_SortedMap();
	// Functions
	 java_util_Collection values();
	 java_util_Set entrySet();
	 java_util_Set keySet();
	 java_util_Comparator comparator();
	 java_util_SortedMap subMap(java_lang_Object& arg0,java_lang_Object& arg1);
	 java_util_SortedMap headMap(java_lang_Object& arg0);
	 java_util_SortedMap tailMap(java_lang_Object& arg0);
	 java_lang_Object firstKey();
	 java_lang_Object lastKey();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_SortedMap