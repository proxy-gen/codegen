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
	java_util_SortedMap(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_SortedMap();
	// Functions
	 AndroidCXX::java_util_Collection values();
	 AndroidCXX::java_util_Set entrySet();
	 AndroidCXX::java_util_Set keySet();
	 AndroidCXX::java_util_Comparator comparator();
	 AndroidCXX::java_util_SortedMap subMap(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 AndroidCXX::java_util_SortedMap headMap(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_util_SortedMap tailMap(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_Object firstKey();
	 AndroidCXX::java_lang_Object lastKey();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_SortedMap