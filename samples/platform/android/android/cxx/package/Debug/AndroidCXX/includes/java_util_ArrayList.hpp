/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//









// Generated Code 

#ifndef _java_util_ArrayList
#define _java_util_ArrayList
//
// Scroll Down 
//



#include <java_lang_Cloneable.hpp>

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

class java_util_ArrayList : public AndroidCXX::java_lang_Cloneable,public AndroidCXX::java_util_List
{
public:

	// Public Constructor
	java_util_ArrayList(Proxy * aProxy = new Proxy());
	java_util_ArrayList(const java_util_ArrayList& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_util_ArrayList();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_ArrayList