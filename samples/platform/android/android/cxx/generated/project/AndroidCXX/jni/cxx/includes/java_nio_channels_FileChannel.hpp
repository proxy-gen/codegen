/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	
 		 
 	
 		 
 	
 		 
 		 
	
 		 
	
 		 
 	
 		 
 		 
 	
 		 
	
	
 		 
 		 



























// Generated Code 

#ifndef _java_nio_channels_FileChannel
#define _java_nio_channels_FileChannel
//
// Scroll Down 
//


#include <java_nio_channels_FileLock.hpp>


#include <java_nio_ByteBuffer.hpp>

#include <java_nio_channels_FileChannel_MapMode.hpp>

#include <java_nio_MappedByteBuffer.hpp>

#include <java_nio_channels_WritableByteChannel.hpp>

#include <java_nio_channels_ReadableByteChannel.hpp>

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

class java_nio_channels_FileLock;

class java_nio_channels_FileChannel;

class java_nio_ByteBuffer;

class java_nio_channels_FileChannel_MapMode;

class java_nio_MappedByteBuffer;

class java_nio_channels_WritableByteChannel;

class java_nio_channels_ReadableByteChannel;

class java_nio_channels_FileChannel
{
public:

	java_nio_channels_FileChannel(const java_nio_channels_FileChannel& cc);
	java_nio_channels_FileChannel(void * proxy);
	// Public Constructors
	java_nio_channels_FileChannel();
	// Default Destructor
	virtual ~java_nio_channels_FileChannel();
	// Functions
	 AndroidCXX::java_nio_channels_FileLock lock();
	 AndroidCXX::java_nio_channels_FileLock lock(long& arg0,long& arg1,bool& arg2);
	 long size();
	 long position();
	 AndroidCXX::java_nio_channels_FileChannel position(long& arg0);
	 int write(AndroidCXX::java_nio_ByteBuffer& arg0);
	 long write(std::vector<AndroidCXX::java_nio_ByteBuffer >& arg0,int& arg1,int& arg2);
	 long write(std::vector<AndroidCXX::java_nio_ByteBuffer >& arg0);
	 int write(AndroidCXX::java_nio_ByteBuffer& arg0,long& arg1);
	 AndroidCXX::java_nio_channels_FileChannel truncate(long& arg0);
	 AndroidCXX::java_nio_MappedByteBuffer map(AndroidCXX::java_nio_channels_FileChannel_MapMode& arg0,long& arg1,long& arg2);
	 int read(AndroidCXX::java_nio_ByteBuffer& arg0);
	 long read(std::vector<AndroidCXX::java_nio_ByteBuffer >& arg0,int& arg1,int& arg2);
	 int read(AndroidCXX::java_nio_ByteBuffer& arg0,long& arg1);
	 long read(std::vector<AndroidCXX::java_nio_ByteBuffer >& arg0);
	 AndroidCXX::java_nio_channels_FileLock tryLock();
	 AndroidCXX::java_nio_channels_FileLock tryLock(long& arg0,long& arg1,bool& arg2);
	 void force(bool& arg0);
	 long transferTo(long& arg0,long& arg1,AndroidCXX::java_nio_channels_WritableByteChannel& arg2);
	 long transferFrom(AndroidCXX::java_nio_channels_ReadableByteChannel& arg0,long& arg1,long& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_FileChannel