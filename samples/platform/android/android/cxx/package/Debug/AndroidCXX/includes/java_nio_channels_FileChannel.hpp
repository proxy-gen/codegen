/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_nio_channels_spi_AbstractInterruptibleChannel.hpp>

#include <java_nio_channels_ByteChannel.hpp>

#include <java_nio_channels_GatheringByteChannel.hpp>

#include <java_nio_channels_ScatteringByteChannel.hpp>

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

class java_nio_channels_FileChannel_MapMode;

class java_nio_MappedByteBuffer;


class java_nio_ByteBuffer;

class java_nio_channels_ReadableByteChannel;

class java_nio_channels_WritableByteChannel;

class java_nio_channels_FileChannel : public AndroidCXX::java_nio_channels_spi_AbstractInterruptibleChannel,public AndroidCXX::java_nio_channels_ByteChannel,public AndroidCXX::java_nio_channels_GatheringByteChannel,public AndroidCXX::java_nio_channels_ScatteringByteChannel
{
public:

	java_nio_channels_FileChannel(const java_nio_channels_FileChannel& cc);
	java_nio_channels_FileChannel(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_FileChannel();
	// Functions
	virtual void  force(bool const& arg0) ;
	virtual AndroidCXX::java_nio_channels_FileLock * lock(long const& arg0,long const& arg1,bool const& arg2) ;
	virtual AndroidCXX::java_nio_channels_FileLock * lock() ;
	virtual AndroidCXX::java_nio_MappedByteBuffer * map(AndroidCXX::java_nio_channels_FileChannel_MapMode const& arg0,long const& arg1,long const& arg2) ;
	virtual AndroidCXX::java_nio_channels_FileChannel * position(long const& arg0) ;
	virtual long  position() ;
	virtual long  read(std::vector<AndroidCXX::java_nio_ByteBuffer> const& arg0,int const& arg1,int const& arg2) ;
	virtual long  read(std::vector<AndroidCXX::java_nio_ByteBuffer> const& arg0) ;
	virtual int  read(AndroidCXX::java_nio_ByteBuffer const& arg0,long const& arg1) ;
	virtual int  read(AndroidCXX::java_nio_ByteBuffer const& arg0) ;
	virtual long  size() ;
	virtual long  transferFrom(AndroidCXX::java_nio_channels_ReadableByteChannel const& arg0,long const& arg1,long const& arg2) ;
	virtual long  transferTo(long const& arg0,long const& arg1,AndroidCXX::java_nio_channels_WritableByteChannel const& arg2) ;
	virtual AndroidCXX::java_nio_channels_FileChannel * truncate(long const& arg0) ;
	virtual AndroidCXX::java_nio_channels_FileLock * tryLock(long const& arg0,long const& arg1,bool const& arg2) ;
	virtual AndroidCXX::java_nio_channels_FileLock * tryLock() ;
	virtual long  write(std::vector<AndroidCXX::java_nio_ByteBuffer> const& arg0,int const& arg1,int const& arg2) ;
	virtual long  write(std::vector<AndroidCXX::java_nio_ByteBuffer> const& arg0) ;
	virtual int  write(AndroidCXX::java_nio_ByteBuffer const& arg0,long const& arg1) ;
	virtual int  write(AndroidCXX::java_nio_ByteBuffer const& arg0) ;

protected:
	java_nio_channels_FileChannel();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_FileChannel