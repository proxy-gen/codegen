/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class android_os_ParcelFileDescriptor;

class java_io_FileDescriptor;

class android_os_Parcel;

class java_net_Socket;

class java_net_DatagramSocket;

class android_os_ParcelFileDescriptor
{
public:

	android_os_ParcelFileDescriptor(const android_os_ParcelFileDescriptor& cc);
	android_os_ParcelFileDescriptor(void * proxy);
	// Public Constructors
	android_os_ParcelFileDescriptor(AndroidCXX::android_os_ParcelFileDescriptor& arg0);
	android_os_ParcelFileDescriptor();
	// Default Destructor
	virtual ~android_os_ParcelFileDescriptor();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 void close();
	static AndroidCXX::android_os_ParcelFileDescriptor open(AndroidCXX::java_io_File& arg0,int& arg1);
	static AndroidCXX::android_os_ParcelFileDescriptor dup(AndroidCXX::java_io_FileDescriptor& arg0);
	 AndroidCXX::android_os_ParcelFileDescriptor dup();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	static AndroidCXX::android_os_ParcelFileDescriptor fromFd(int& arg0);
	static AndroidCXX::android_os_ParcelFileDescriptor adoptFd(int& arg0);
	static AndroidCXX::android_os_ParcelFileDescriptor fromSocket(AndroidCXX::java_net_Socket& arg0);
	static AndroidCXX::android_os_ParcelFileDescriptor fromDatagramSocket(AndroidCXX::java_net_DatagramSocket& arg0);
	static std::vector<AndroidCXX::android_os_ParcelFileDescriptor > createPipe();
	 AndroidCXX::java_io_FileDescriptor getFileDescriptor();
	 long getStatSize();
	 int getFd();
	 int detachFd();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_ParcelFileDescriptor