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

namespace AndroidCXX {

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
	java_util_List(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_util_List();
	// 
	// Default Destructor
	virtual ~java_util_List();
	// Functions
	 void add(int& arg0,AndroidCXX::java_lang_Object& arg1);
	 bool add(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_Object get(int& arg0);
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 int hashCode();
	 int indexOf(AndroidCXX::java_lang_Object& arg0);
	 void clear();
	 bool isEmpty();
	 int lastIndexOf(AndroidCXX::java_lang_Object& arg0);
	 bool contains(AndroidCXX::java_lang_Object& arg0);
	 bool addAll(int& arg0,AndroidCXX::java_util_Collection& arg1);
	 bool addAll(AndroidCXX::java_util_Collection& arg0);
	 int size();
	 std::vector<AndroidCXX::java_lang_Object > toArray(std::vector<AndroidCXX::java_lang_Object >& arg0);
	 std::vector<AndroidCXX::java_lang_Object > toArray();
	 AndroidCXX::java_util_Iterator iterator();
	 AndroidCXX::java_lang_Object remove(int& arg0);
	 bool remove(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_Object set(int& arg0,AndroidCXX::java_lang_Object& arg1);
	 AndroidCXX::java_util_ListIterator listIterator(int& arg0);
	 AndroidCXX::java_util_ListIterator listIterator();
	 AndroidCXX::java_util_List subList(int& arg0,int& arg1);
	 bool removeAll(AndroidCXX::java_util_Collection& arg0);
	 bool containsAll(AndroidCXX::java_util_Collection& arg0);
	 bool retainAll(AndroidCXX::java_util_Collection& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_List