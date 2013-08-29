/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 
 		 
 	
 		 
	
 		 
 		 
	
 		 
 		 
 		 
















// Generated Code 

#ifndef _android_os_IBinder
#define _android_os_IBinder
//
// Scroll Down 
//



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

class java_io_FileDescriptor;

class java_lang_String;

class android_os_IBinder_DeathRecipient;

class android_os_IInterface;

class android_os_Parcel;

class android_os_IBinder : public AndroidCXX::java_lang_Object
{
public:

	android_os_IBinder(const android_os_IBinder& cc);
	android_os_IBinder(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_os_IBinder();
	// Functions
	virtual void  dumpAsync(AndroidCXX::java_io_FileDescriptor const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1) ;
	virtual void  dump(AndroidCXX::java_io_FileDescriptor const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1) ;
	virtual AndroidCXX::java_lang_String * getInterfaceDescriptor() ;
	virtual bool  isBinderAlive() ;
	virtual void  linkToDeath(AndroidCXX::android_os_IBinder_DeathRecipient const& arg0,int const& arg1) ;
	virtual bool  pingBinder() ;
	virtual AndroidCXX::android_os_IInterface * queryLocalInterface(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  transact(int const& arg0,AndroidCXX::android_os_Parcel const& arg1,AndroidCXX::android_os_Parcel const& arg2,int const& arg3) ;
	virtual bool  unlinkToDeath(AndroidCXX::android_os_IBinder_DeathRecipient const& arg0,int const& arg1) ;

protected:
	android_os_IBinder();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_IBinder