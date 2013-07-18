/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
		
		
 			
		
 			
		
 			
		
		
		


#ifndef _java_util_SortedMap
#define _java_util_SortedMap











#include <java_util_Comparator.hpp>
#include <java_util_Collection.hpp>
#include <java_util_Set.hpp>
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

class java_util_SortedMap
{
public:
	java_util_Collection values();
	java_util_Set entrySet();
	java_util_Set keySet();
	java_util_Comparator comparator();
	java_util_SortedMap subMap(java_lang_Object& arg0);
	java_util_SortedMap headMap(java_lang_Object& arg0);
	java_util_SortedMap tailMap(java_lang_Object& arg0);
	java_lang_Object firstKey();
	java_lang_Object lastKey();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_SortedMap