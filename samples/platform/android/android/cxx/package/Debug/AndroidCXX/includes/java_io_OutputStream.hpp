/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
 	













// Generated Code 

#ifndef _java_io_OutputStream
#define _java_io_OutputStream
//
// Scroll Down 
//



#include <java_io_Closeable.hpp>

#include <java_io_Flushable.hpp>

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

class java_io_OutputStream : public AndroidCXX::java_io_Closeable,public AndroidCXX::java_io_Flushable
{
public:

	java_io_OutputStream(const java_io_OutputStream& cc);
	java_io_OutputStream(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_io_OutputStream();
	// Functions
	virtual void  close() ;
	virtual void  flush() ;
	virtual void  write(std::vector<byte> const& arg0,int const& arg1,int const& arg2) ;
	virtual void  write(std::vector<byte> const& arg0) ;
	virtual void  write(int const& arg0) ;

protected:
	java_io_OutputStream();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_OutputStream