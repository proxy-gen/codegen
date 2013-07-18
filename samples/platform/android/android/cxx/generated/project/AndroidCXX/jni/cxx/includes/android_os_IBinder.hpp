/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		
 			
 			
 			
 			


#ifndef _android_os_IBinder
#define _android_os_IBinder











#include <android_os_Parcel.hpp>
#include <java_io_FileDescriptor.hpp>
#include <android_os_IInterface.hpp>
#include <android_os_IBinder_DeathRecipient.hpp>
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

class android_os_IBinder
{
public:
	void dump(java_io_FileDescriptor& arg0,std::vector<long>& arg1);
	java_lang_String getInterfaceDescriptor();
	bool pingBinder();
	bool isBinderAlive();
	android_os_IInterface queryLocalInterface(java_lang_String& arg0);
	void dumpAsync(java_io_FileDescriptor& arg0,std::vector<long>& arg1);
	bool transact(int& arg0,android_os_Parcel& arg1);
	void linkToDeath(android_os_IBinder_DeathRecipient& arg0,int& arg1);
	bool unlinkToDeath(android_os_IBinder_DeathRecipient& arg0,int& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_IBinder