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

namespace AndroidCXX {

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
	java_util_Map(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_Map();
	// Functions
	 AndroidCXX::java_lang_Object get(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_Object put(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_util_Collection values();
	 int hashCode();
	 void clear();
	 bool isEmpty();
	 int size();
	 AndroidCXX::java_util_Set entrySet();
	 void putAll(AndroidCXX::java_util_Map const& arg0);
	 AndroidCXX::java_lang_Object remove(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_util_Set keySet();
	 bool containsValue(AndroidCXX::java_lang_Object const& arg0);
	 bool containsKey(AndroidCXX::java_lang_Object const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Map