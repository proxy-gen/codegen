/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
 	
 	


 		 
 		 
 		 
















// Generated Code 

#ifndef _java_io_FileInputStream
#define _java_io_FileInputStream
//
// Scroll Down 
//


#include <java_nio_channels_FileChannel.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_io_File.hpp>

#include <java_lang_String.hpp>


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

class java_nio_channels_FileChannel;

class java_io_FileDescriptor;

class java_io_File;

class java_lang_String;

class java_io_FileInputStream : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	java_io_FileInputStream(AndroidCXX::java_io_File const& arg0,Proxy * aProxy = new Proxy());
	java_io_FileInputStream(AndroidCXX::java_io_FileDescriptor const& arg0,Proxy * aProxy = new Proxy());
	java_io_FileInputStream(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	java_io_FileInputStream(const java_io_FileInputStream& cc);
	java_io_FileInputStream(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_io_FileInputStream();
	// Functions
	virtual int  available() ;
	virtual void  close() ;
	virtual AndroidCXX::java_nio_channels_FileChannel * getChannel() ;
	virtual AndroidCXX::java_io_FileDescriptor * getFD() ;
	virtual int  read(std::vector<byte> const& arg0,int const& arg1,int const& arg2) ;
	virtual int  read(std::vector<byte> const& arg0) ;
	virtual int  read() ;
	virtual long  skip(long const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_FileInputStream