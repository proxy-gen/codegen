/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
 	

















// Generated Code 

#ifndef _java_io_InputStream
#define _java_io_InputStream
//
// Scroll Down 
//



#include <java_io_Closeable.hpp>

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

class java_io_InputStream : public java_io_Closeable
{
public:

	java_io_InputStream(const java_io_InputStream& cc);
	java_io_InputStream(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_io_InputStream();
	// Functions
	virtual int  available() ;
	virtual void  close() ;
	virtual void  mark(int const& arg0) ;
	virtual bool  markSupported() ;
	virtual int  read(std::vector<byte> const& arg0,int const& arg1,int const& arg2) ;
	virtual int  read(std::vector<byte> const& arg0) ;
	virtual int  read() ;
	virtual void  reset() ;
	virtual long  skip(long const& arg0) ;

protected:
	java_io_InputStream();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_InputStream