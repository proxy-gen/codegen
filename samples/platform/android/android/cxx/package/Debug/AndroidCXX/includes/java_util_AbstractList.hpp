/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//









// Generated Code 

#ifndef _java_util_AbstractList
#define _java_util_AbstractList
//
// Scroll Down 
//



#include <java_util_AbstractCollection.hpp>

#include <java_util_List.hpp>

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

class java_util_AbstractList : public AndroidCXX::java_util_AbstractCollection,public AndroidCXX::java_util_List
{
public:

	java_util_AbstractList(const java_util_AbstractList& cc);
	java_util_AbstractList(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_util_AbstractList();
	// Functions

protected:
	java_util_AbstractList();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_AbstractList