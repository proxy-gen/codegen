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
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace JDKCXX {

// Forward Declarations

class java_lang_Object;

class java_util_Collection;

class java_util_Iterator;

class java_util_ListIterator;

class java_util_List;

class java_util_List
{
public:

	java_util_List(const java_util_List& cc);
	java_util_List(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_List();
	// Functions
	 void add(int const& arg0,JDKCXX::java_lang_Object const& arg1);
	 bool add(JDKCXX::java_lang_Object const& arg0);
	 JDKCXX::java_lang_Object get(int const& arg0);
	 bool equals(JDKCXX::java_lang_Object const& arg0);
	 int hashCode();
	 int indexOf(JDKCXX::java_lang_Object const& arg0);
	 void clear();
	 bool isEmpty();
	 int lastIndexOf(JDKCXX::java_lang_Object const& arg0);
	 bool contains(JDKCXX::java_lang_Object const& arg0);
	 bool addAll(int const& arg0,JDKCXX::java_util_Collection const& arg1);
	 bool addAll(JDKCXX::java_util_Collection const& arg0);
	 int size();
	 std::vector<JDKCXX::java_lang_Object > toArray(std::vector<JDKCXX::java_lang_Object > const& arg0);
	 std::vector<JDKCXX::java_lang_Object > toArray();
	 JDKCXX::java_util_Iterator iterator();
	 JDKCXX::java_lang_Object remove(int const& arg0);
	 bool remove(JDKCXX::java_lang_Object const& arg0);
	 JDKCXX::java_lang_Object set(int const& arg0,JDKCXX::java_lang_Object const& arg1);
	 JDKCXX::java_util_ListIterator listIterator(int const& arg0);
	 JDKCXX::java_util_ListIterator listIterator();
	 JDKCXX::java_util_List subList(int const& arg0,int const& arg1);
	 bool removeAll(JDKCXX::java_util_Collection const& arg0);
	 bool containsAll(JDKCXX::java_util_Collection const& arg0);
	 bool retainAll(JDKCXX::java_util_Collection const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_List