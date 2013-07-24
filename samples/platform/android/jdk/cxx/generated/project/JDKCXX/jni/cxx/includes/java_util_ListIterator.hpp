/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
	
















// Generated Code 

#ifndef _java_util_ListIterator
#define _java_util_ListIterator
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

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

class java_util_ListIterator
{
public:

	java_util_ListIterator(const java_util_ListIterator& cc);
	java_util_ListIterator(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_util_ListIterator();
	// 
	// Default Destructor
	virtual ~java_util_ListIterator();
	// Functions
	 void add(JDKCXX::java_lang_Object& arg0);
	 bool hasNext();
	 JDKCXX::java_lang_Object next();
	 void remove();
	 void set(JDKCXX::java_lang_Object& arg0);
	 int nextIndex();
	 JDKCXX::java_lang_Object previous();
	 int previousIndex();
	 bool hasPrevious();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_ListIterator