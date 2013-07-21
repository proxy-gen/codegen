/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	








// Generated Code 

#ifndef _java_util_Enumeration
#define _java_util_Enumeration
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


using namespace AndroidCXX;

// Forward Declarations

class java_lang_Object;

class java_util_Enumeration
{
public:

	java_util_Enumeration(const java_util_Enumeration& cc);
	java_util_Enumeration(void * proxy);
	// Public Constructors
	// Default Destructor
	virtual ~java_util_Enumeration();
	// Functions
	 bool hasMoreElements();
	 java_lang_Object *  nextElement();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Enumeration