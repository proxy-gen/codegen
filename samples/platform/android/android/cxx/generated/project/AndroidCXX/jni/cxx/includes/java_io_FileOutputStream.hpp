/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 	
 	
	
	


 		 
 		 
 		 
 		 
 		 
















// Generated Code 

#ifndef _java_io_FileOutputStream
#define _java_io_FileOutputStream
//
// Scroll Down 
//


#include <java_io_FileDescriptor.hpp>

#include <java_nio_channels_FileChannel.hpp>

#include <java_io_File.hpp>

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
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_io_FileDescriptor;

class java_nio_channels_FileChannel;

class java_io_File;

class java_lang_String;

class java_io_FileOutputStream
{
public:

	java_io_FileOutputStream(const java_io_FileOutputStream& cc);
	java_io_FileOutputStream(void * proxy);
	// Public Constructors
	java_io_FileOutputStream(AndroidCXX::java_io_File& arg0);
	java_io_FileOutputStream(AndroidCXX::java_lang_String& arg0);
	java_io_FileOutputStream(AndroidCXX::java_lang_String& arg0,bool& arg1);
	java_io_FileOutputStream(AndroidCXX::java_io_File& arg0,bool& arg1);
	java_io_FileOutputStream(AndroidCXX::java_io_FileDescriptor& arg0);
	java_io_FileOutputStream();
	// Default Destructor
	virtual ~java_io_FileOutputStream();
	// Functions
	 void write(std::vector<byte>& arg0,int& arg1,int& arg2);
	 void write(int& arg0);
	 void write(std::vector<byte>& arg0);
	 void close();
	 AndroidCXX::java_io_FileDescriptor getFD();
	 AndroidCXX::java_nio_channels_FileChannel getChannel();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_FileOutputStream