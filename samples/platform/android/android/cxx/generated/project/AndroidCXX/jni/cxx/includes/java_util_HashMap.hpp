/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
 		 
	
	
 	
 		 
	
	
 	
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
	
	
 	
 		 
 		 
 		 


 		 
 	
 		 
 		 






















// Generated Code 

#ifndef _java_util_HashMap
#define _java_util_HashMap
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_util_Collection.hpp>

#include <java_util_Set.hpp>

#include <java_util_Map_Entry.hpp>

#include <java_util_Map.hpp>

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

class java_lang_Object;

class java_util_Collection;

class java_util_Set;

class java_util_Map_Entry;

class java_util_Map;

class java_util_HashMap
{
public:

	java_util_HashMap(const java_util_HashMap& cc);
	java_util_HashMap(void * proxy);
	// Public Constructors
	java_util_HashMap(int& arg0,float& arg1);
	java_util_HashMap(int& arg0);
	java_util_HashMap();
	java_util_HashMap(AndroidCXX::java_util_Map& arg0);
	// TODO: remove
	// 
	// Default Destructor
	virtual ~java_util_HashMap();
	// Functions
	 AndroidCXX::java_lang_Object get(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_Object put(AndroidCXX::java_lang_Object& arg0,AndroidCXX::java_lang_Object& arg1);
	 AndroidCXX::java_util_Collection values();
	 AndroidCXX::java_lang_Object clone();
	 void clear();
	 bool isEmpty();
	 int size();
	 AndroidCXX::java_util_Set entrySet();
	 void putAll(AndroidCXX::java_util_Map& arg0);
	 AndroidCXX::java_lang_Object remove(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_util_Set keySet();
	 bool containsValue(AndroidCXX::java_lang_Object& arg0);
	 bool containsKey(AndroidCXX::java_lang_Object& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_HashMap