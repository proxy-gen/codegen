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

namespace AndroidCXX {

// Forward Declarations

class java_lang_Object;

class java_util_Map_Entry
{
public:

	java_util_Map_Entry(const java_util_Map_Entry& cc);
	java_util_Map_Entry(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_Map_Entry();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 int hashCode();
	 AndroidCXX::java_lang_Object getValue();
	 AndroidCXX::java_lang_Object getKey();
	 AndroidCXX::java_lang_Object setValue(AndroidCXX::java_lang_Object const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Map_Entry