/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	









// Generated Code 

#ifndef _java_nio_ByteOrder
#define _java_nio_ByteOrder
//
// Scroll Down 
//


#include <java_lang_String.hpp>


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

class java_lang_String;

class java_nio_ByteOrder;

class java_nio_ByteOrder
{
public:

	java_nio_ByteOrder(const java_nio_ByteOrder& cc);
	java_nio_ByteOrder(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_ByteOrder();
	// Functions
	 AndroidCXX::java_lang_String toString();
	static AndroidCXX::java_nio_ByteOrder nativeOrder();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_ByteOrder