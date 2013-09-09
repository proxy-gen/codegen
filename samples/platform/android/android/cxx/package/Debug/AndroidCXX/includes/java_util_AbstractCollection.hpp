/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//









// Generated Code 

#ifndef _java_util_AbstractCollection
#define _java_util_AbstractCollection
//
// Scroll Down 
//



#include <java_util_Collection.hpp>

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

class java_util_AbstractCollection : public AndroidCXX::java_util_Collection
{
public:

	java_util_AbstractCollection(const java_util_AbstractCollection& cc);
	java_util_AbstractCollection(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_util_AbstractCollection();
	// Functions

protected:
	java_util_AbstractCollection();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_AbstractCollection