/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//










// Generated Code 

#ifndef _java_util_UUID
#define _java_util_UUID
//
// Scroll Down 
//



#include <java_io_Serializable.hpp>

#include <java_lang_Comparable.hpp>

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

class java_util_UUID : public AndroidCXX::java_io_Serializable,public AndroidCXX::java_lang_Comparable
{
public:

	// Public Constructor
	java_util_UUID(long const& arg0,long const& arg1,Proxy * aProxy = new Proxy());
	java_util_UUID(const java_util_UUID& cc);
	java_util_UUID(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_util_UUID();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_UUID