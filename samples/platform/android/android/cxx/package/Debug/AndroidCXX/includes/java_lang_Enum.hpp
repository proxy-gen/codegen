/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//









// Generated Code 

#ifndef _java_lang_Enum
#define _java_lang_Enum
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

class java_lang_Enum : public AndroidCXX::java_io_Serializable,public AndroidCXX::java_lang_Comparable
{
public:

	java_lang_Enum(const java_lang_Enum& cc);
	java_lang_Enum(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_lang_Enum();
	// Functions

protected:
	java_lang_Enum();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Enum