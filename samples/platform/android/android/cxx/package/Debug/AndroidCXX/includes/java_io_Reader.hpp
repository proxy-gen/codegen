/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
 	
 		 

















// Generated Code 

#ifndef _java_io_Reader
#define _java_io_Reader
//
// Scroll Down 
//



#include <java_io_Closeable.hpp>

#include <java_lang_Readable.hpp>

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

class java_nio_CharBuffer;

class java_io_Reader : public AndroidCXX::java_io_Closeable,public AndroidCXX::java_lang_Readable
{
public:

	java_io_Reader(const java_io_Reader& cc);
	java_io_Reader(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_io_Reader();
	// Functions
	virtual void  close() ;
	virtual void  mark(int const& arg0) ;
	virtual bool  markSupported() ;
	virtual int  read(std::vector<char> const& arg0,int const& arg1,int const& arg2) ;
	virtual int  read(std::vector<char> const& arg0) ;
	virtual int  read(AndroidCXX::java_nio_CharBuffer const& arg0) ;
	virtual int  read() ;
	virtual bool  ready() ;
	virtual void  reset() ;
	virtual long  skip(long const& arg0) ;

protected:
	java_io_Reader();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_Reader