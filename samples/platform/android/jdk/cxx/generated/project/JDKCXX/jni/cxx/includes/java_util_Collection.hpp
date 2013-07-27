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

namespace JDKCXX {

// Forward Declarations

class java_lang_Object;

class java_util_Collection;

class java_util_Iterator;

class java_util_Collection
{
public:

	java_util_Collection(const java_util_Collection& cc);
	java_util_Collection(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_Collection();
	// Functions
	 bool add(JDKCXX::java_lang_Object const& arg0);
	 bool equals(JDKCXX::java_lang_Object const& arg0);
	 int hashCode();
	 void clear();
	 bool isEmpty();
	 bool contains(JDKCXX::java_lang_Object const& arg0);
	 bool addAll(JDKCXX::java_util_Collection const& arg0);
	 int size();
	 std::vector<JDKCXX::java_lang_Object > toArray(std::vector<JDKCXX::java_lang_Object > const& arg0);
	 std::vector<JDKCXX::java_lang_Object > toArray();
	 JDKCXX::java_util_Iterator iterator();
	 bool remove(JDKCXX::java_lang_Object const& arg0);
	 bool removeAll(JDKCXX::java_util_Collection const& arg0);
	 bool containsAll(JDKCXX::java_util_Collection const& arg0);
	 bool retainAll(JDKCXX::java_util_Collection const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Collection