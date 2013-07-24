/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	
	
 		 
 		 
 		 
 		 
 	
 		 
 		 
 	
 		 
 	
 	
 		 
 		 
 	
 		 
	
 		 
 		 
	


 		 
 	
 		 



























// Generated Code 

#ifndef _java_util_ArrayList
#define _java_util_ArrayList
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_util_Collection.hpp>

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

class java_util_ArrayList
{
public:

	java_util_ArrayList(const java_util_ArrayList& cc);
	java_util_ArrayList(void * proxy);
	// Public Constructors
	java_util_ArrayList(int& arg0);
	java_util_ArrayList();
	java_util_ArrayList(AndroidCXX::java_util_Collection& arg0);
	// TODO: remove
	// 
	// Default Destructor
	virtual ~java_util_ArrayList();
	// Functions
	 void add(int& arg0,AndroidCXX::java_lang_Object& arg1);
	 bool add(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_Object get(int& arg0);
	 AndroidCXX::java_lang_Object clone();
	 int indexOf(AndroidCXX::java_lang_Object& arg0);
	 void clear();
	 bool isEmpty();
	 int lastIndexOf(AndroidCXX::java_lang_Object& arg0);
	 bool contains(AndroidCXX::java_lang_Object& arg0);
	 bool addAll(AndroidCXX::java_util_Collection& arg0);
	 bool addAll(int& arg0,AndroidCXX::java_util_Collection& arg1);
	 int size();
	 std::vector<AndroidCXX::java_lang_Object > toArray(std::vector<AndroidCXX::java_lang_Object >& arg0);
	 std::vector<AndroidCXX::java_lang_Object > toArray();
	 AndroidCXX::java_lang_Object remove(int& arg0);
	 bool remove(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_Object set(int& arg0,AndroidCXX::java_lang_Object& arg1);
	 void ensureCapacity(int& arg0);
	 void trimToSize();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_ArrayList