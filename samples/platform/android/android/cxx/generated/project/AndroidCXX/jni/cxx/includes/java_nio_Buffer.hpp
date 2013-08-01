/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
	
	
	
	
	
	
























// Generated Code 

#ifndef _java_nio_Buffer
#define _java_nio_Buffer
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

class java_nio_Buffer;

class java_lang_Object;

class java_nio_Buffer
{
public:

	java_nio_Buffer(const java_nio_Buffer& cc);
	java_nio_Buffer(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_Buffer();
	// Functions
	 int limit();
	 AndroidCXX::java_nio_Buffer limit(int const& arg0);
	 AndroidCXX::java_nio_Buffer clear();
	 int remaining();
	 bool isDirect();
	 bool hasArray();
	 AndroidCXX::java_lang_Object array();
	 AndroidCXX::java_nio_Buffer position(int const& arg0);
	 int position();
	 int arrayOffset();
	 int capacity();
	 AndroidCXX::java_nio_Buffer mark();
	 AndroidCXX::java_nio_Buffer reset();
	 AndroidCXX::java_nio_Buffer flip();
	 AndroidCXX::java_nio_Buffer rewind();
	 bool hasRemaining();
	 bool isReadOnly();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_Buffer