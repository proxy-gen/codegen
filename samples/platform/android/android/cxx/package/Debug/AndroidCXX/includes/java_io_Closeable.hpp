/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _java_io_Closeable
#define _java_io_Closeable
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

class java_io_Closeable : public AndroidCXX::java_lang_Object
{
public:

	java_io_Closeable(const java_io_Closeable& cc);
	java_io_Closeable(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_io_Closeable();
	// Functions
	virtual void  close() ;

protected:
	java_io_Closeable();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_Closeable