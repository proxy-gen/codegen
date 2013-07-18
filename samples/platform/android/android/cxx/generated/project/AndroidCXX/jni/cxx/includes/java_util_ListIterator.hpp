/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		


#ifndef _java_util_ListIterator
#define _java_util_ListIterator











#include <java_lang_Object.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class java_util_ListIterator
{
public:
	void add(java_lang_Object& arg0);
	bool hasNext();
	java_lang_Object next();
	void remove();
	void set(java_lang_Object& arg0);
	int nextIndex();
	java_lang_Object previous();
	int previousIndex();
	bool hasPrevious();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_ListIterator