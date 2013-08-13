/*
 * Header (Instance CXX)
 * Author: codegen
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
	java_util_Iterator(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_Iterator();
	// Functions
	virtual bool  hasNext() ;
	virtual AndroidCXX::java_lang_Object * next() ;
	virtual void  remove() ;

protected:
	java_util_Iterator();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Iterator