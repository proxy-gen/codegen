/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
	
 		 
	
 	
 		 
	
 	
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
	
	
 	
 		 
 		 
 		 





















// Generated Code 

#ifndef _java_util_Map
#define _java_util_Map
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_util_Collection.hpp>

#include <java_util_Set.hpp>

#include <java_util_Map_Entry.hpp>


#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace JDKCXX {

// Forward Declarations

class java_lang_Object;

class java_util_Collection;

class java_util_Set;

class java_util_Map_Entry;

class java_util_Map;

class java_util_Map
{
public:

	java_util_Map(const java_util_Map& cc);
	java_util_Map(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_util_Map();
	// 
	// Default Destructor
	virtual ~java_util_Map();
	// Functions
	 JDKCXX::java_lang_Object get(JDKCXX::java_lang_Object& arg0);
	 JDKCXX::java_lang_Object put(JDKCXX::java_lang_Object& arg0,JDKCXX::java_lang_Object& arg1);
	 bool equals(JDKCXX::java_lang_Object& arg0);
	 JDKCXX::java_util_Collection values();
	 int hashCode();
	 void clear();
	 bool isEmpty();
	 int size();
	 JDKCXX::java_util_Set entrySet();
	 void putAll(JDKCXX::java_util_Map& arg0);
	 JDKCXX::java_lang_Object remove(JDKCXX::java_lang_Object& arg0);
	 JDKCXX::java_util_Set keySet();
	 bool containsValue(JDKCXX::java_lang_Object& arg0);
	 bool containsKey(JDKCXX::java_lang_Object& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Map