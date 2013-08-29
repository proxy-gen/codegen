/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//













// Generated Code 

#ifndef _java_io_FileDescriptor
#define _java_io_FileDescriptor
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

class java_io_FileDescriptor 
{
public:

	// Public Constructor
	java_io_FileDescriptor(Proxy * aProxy = new Proxy());
	java_io_FileDescriptor(const java_io_FileDescriptor& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_io_FileDescriptor();
	// Functions
	virtual void  sync() ;
	virtual bool  valid() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_FileDescriptor