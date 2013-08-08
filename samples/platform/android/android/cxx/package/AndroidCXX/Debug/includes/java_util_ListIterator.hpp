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

namespace AndroidCXX {

// Forward Declarations

class java_lang_Object;

class java_util_ListIterator
{
public:

	java_util_ListIterator(const java_util_ListIterator& cc);
	java_util_ListIterator(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_ListIterator();
	// Functions
	 void add(AndroidCXX::java_lang_Object const& arg0);
	 bool hasNext();
	 AndroidCXX::java_lang_Object next();
	 void remove();
	 void set(AndroidCXX::java_lang_Object const& arg0);
	 int nextIndex();
	 AndroidCXX::java_lang_Object previous();
	 int previousIndex();
	 bool hasPrevious();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_ListIterator