/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
 		 








// Generated Code 

#ifndef _java_lang_Iterable
#define _java_lang_Iterable
//
// Scroll Down 
//



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

class java_util_Iterator;

class java_lang_Object;

class java_lang_Iterable 
{
public:

	java_lang_Iterable(const java_lang_Iterable& cc);
	java_lang_Iterable(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Iterable();
	// Functions
	virtual AndroidCXX::java_util_Iterator * iterator() ;

protected:
	java_lang_Iterable();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Iterable