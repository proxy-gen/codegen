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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_nio_channels_FileLock;

class java_nio_ByteBuffer;


class java_nio_channels_FileChannel_MapMode;

class java_nio_MappedByteBuffer;

class java_nio_channels_WritableByteChannel;

class java_nio_channels_ReadableByteChannel;

class java_nio_channels_FileChannel
{
public:
 java_nio_channels_FileLock lock(long& arg0,bool& arg1);
 long size();
 long position(long& arg0);
 int write(java_nio_ByteBuffer& arg0,std::vector<long>& arg1,int& arg2,long& arg3);
 java_nio_channels_FileChannel truncate(long& arg0);
 java_nio_MappedByteBuffer map(java_nio_channels_FileChannel_MapMode& arg0,long& arg1);
 int read(java_nio_ByteBuffer& arg0,std::vector<long>& arg1,int& arg2,long& arg3);
 java_nio_channels_FileLock tryLock(long& arg0,bool& arg1);
 void force(bool& arg0);
 long transferTo(long& arg0,java_nio_channels_WritableByteChannel& arg1);
 long transferFrom(java_nio_channels_ReadableByteChannel& arg0,long& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_FileChannel