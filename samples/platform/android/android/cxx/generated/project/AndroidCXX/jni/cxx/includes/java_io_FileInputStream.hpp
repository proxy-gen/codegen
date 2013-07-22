/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_io_FileDescriptor.hpp>

#include <java_nio_channels_FileChannel.hpp>

#include <java_lang_String.hpp>

#include <java_io_File.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_io_FileDescriptor;

class java_nio_channels_FileChannel;

class java_lang_String;

class java_io_File;

class java_io_FileInputStream
{
public:

	java_io_FileInputStream(const java_io_FileInputStream& cc);
	java_io_FileInputStream(void * proxy);
	// Public Constructors
	java_io_FileInputStream(AndroidCXX::java_lang_String& arg0);
	java_io_FileInputStream(AndroidCXX::java_io_File& arg0);
	java_io_FileInputStream(AndroidCXX::java_io_FileDescriptor& arg0);
	java_io_FileInputStream();
	// Default Destructor
	virtual ~java_io_FileInputStream();
	// Functions
	 void close();
	 int read(std::vector<byte>& arg0);
	 int read(std::vector<byte>& arg0,int& arg1,int& arg2);
	 int read();
	 long skip(long& arg0);
	 int available();
	 AndroidCXX::java_io_FileDescriptor getFD();
	 AndroidCXX::java_nio_channels_FileChannel getChannel();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_FileInputStream