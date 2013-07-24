/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	










// Generated Code 

#ifndef _java_util_Iterator
#define _java_util_Iterator
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

class java_util_Iterator
{
public:

	java_util_Iterator(const java_util_Iterator& cc);
	java_util_Iterator(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_util_Iterator();
	// 
	// Default Destructor
	virtual ~java_util_Iterator();
	// Functions
	 bool hasNext();
	 AndroidCXX::java_lang_Object next();
	 void remove();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Iterator