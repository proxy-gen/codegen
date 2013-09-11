/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//


 		 
	
 	
 		 








// Generated Code 

#ifndef _java_util_Collection
#define _java_util_Collection
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


class java_util_Iterator;

class java_util_Collection : public AndroidCXX::java_lang_Object
{
public:

	java_util_Collection(const java_util_Collection& cc);
	java_util_Collection(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_util_Collection();
	// Functions
	virtual bool  contains(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_util_Iterator * iterator() ;

protected:
	java_util_Collection();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Collection