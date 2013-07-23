/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
 		 
	












// Generated Code 

#ifndef _java_util_Map_Entry
#define _java_util_Map_Entry
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

class java_util_Map_Entry
{
public:

	java_util_Map_Entry(const java_util_Map_Entry& cc);
	java_util_Map_Entry(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_util_Map_Entry();
	// 
	// Default Destructor
	virtual ~java_util_Map_Entry();
	// Functions
	 bool equals(JDKCXX::java_lang_Object& arg0);
	 int hashCode();
	 JDKCXX::java_lang_Object getValue();
	 JDKCXX::java_lang_Object getKey();
	 JDKCXX::java_lang_Object setValue(JDKCXX::java_lang_Object& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Map_Entry