/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
		
 			
		
 			
		
		
 			
		
 			
		
		


#ifndef _android_os_ParcelFileDescriptor
#define _android_os_ParcelFileDescriptor

















#include <java_net_DatagramSocket.hpp>
#include <java_io_File.hpp>
#include <java_net_Socket.hpp>
#include <android_os_Parcel.hpp>
#include <java_io_FileDescriptor.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_os_ParcelFileDescriptor
{
public:
 java_lang_String toString();
 void close();
static android_os_ParcelFileDescriptor open(java_io_File& arg0,int& arg1);
static android_os_ParcelFileDescriptor dup(java_io_FileDescriptor& arg0);
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
static android_os_ParcelFileDescriptor fromFd(int& arg0);
static android_os_ParcelFileDescriptor adoptFd(int& arg0);
static android_os_ParcelFileDescriptor fromSocket(java_net_Socket& arg0);
static android_os_ParcelFileDescriptor fromDatagramSocket(java_net_DatagramSocket& arg0);
static std::vector<long> createPipe();
 java_io_FileDescriptor getFileDescriptor();
 long getStatSize();
 int getFd();
 int detachFd();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_ParcelFileDescriptor