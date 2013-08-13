/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
	
 		 
	
	
 		 
	
	
 		 
	
 		 
	
 	
 		 
	


 		 






















// Generated Code 

#ifndef _android_os_ParcelFileDescriptor
#define _android_os_ParcelFileDescriptor
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_io_File.hpp>

#include <java_io_FileDescriptor.hpp>

#include <android_os_Parcel.hpp>

#include <java_net_Socket.hpp>

#include <java_net_DatagramSocket.hpp>


#include <android_os_Parcelable.hpp>

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

class java_lang_String;

class java_io_File;


class java_io_FileDescriptor;

class android_os_Parcel;

class java_net_Socket;

class java_net_DatagramSocket;

class android_os_ParcelFileDescriptor : public android_os_Parcelable,public java_io_Closeable
{
public:

	// Public ConstrucXXX
	android_os_ParcelFileDescriptor(AndroidCXX::android_os_ParcelFileDescriptor const& arg0);
	android_os_ParcelFileDescriptor(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_ParcelFileDescriptor();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  close() ;
	static AndroidCXX::android_os_ParcelFileDescriptor * open(AndroidCXX::java_io_File const& arg0,int const& arg1) ;
	static AndroidCXX::android_os_ParcelFileDescriptor * dup(AndroidCXX::java_io_FileDescriptor const& arg0) ;
	virtual AndroidCXX::android_os_ParcelFileDescriptor * dup() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	static AndroidCXX::android_os_ParcelFileDescriptor * fromFd(int const& arg0) ;
	static AndroidCXX::android_os_ParcelFileDescriptor * adoptFd(int const& arg0) ;
	static AndroidCXX::android_os_ParcelFileDescriptor * fromSocket(AndroidCXX::java_net_Socket const& arg0) ;
	static AndroidCXX::android_os_ParcelFileDescriptor * fromDatagramSocket(AndroidCXX::java_net_DatagramSocket const& arg0) ;
	static std::vector<android_os_ParcelFileDescriptor>  createPipe() ;
	virtual AndroidCXX::java_io_FileDescriptor * getFileDescriptor() ;
	virtual long  getStatSize() ;
	virtual int  getFd() ;
	virtual int  detachFd() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_ParcelFileDescriptor