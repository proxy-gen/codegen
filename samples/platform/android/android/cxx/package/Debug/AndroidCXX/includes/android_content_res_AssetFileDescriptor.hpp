/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
	
	
	
	


 		 

















// Generated Code 

#ifndef _android_content_res_AssetFileDescriptor
#define _android_content_res_AssetFileDescriptor
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <java_io_FileDescriptor.hpp>

#include <android_os_ParcelFileDescriptor.hpp>

#include <java_io_FileInputStream.hpp>

#include <java_io_FileOutputStream.hpp>


#include <android_os_Parcelable.hpp>

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

class android_os_Parcel;

class java_io_FileDescriptor;

class android_os_ParcelFileDescriptor;

class java_io_FileInputStream;

class java_io_FileOutputStream;

class android_content_res_AssetFileDescriptor : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_content_res_AssetFileDescriptor(AndroidCXX::android_os_ParcelFileDescriptor const& arg0,long const& arg1,long const& arg2);
	android_content_res_AssetFileDescriptor(const android_content_res_AssetFileDescriptor& cc);
	android_content_res_AssetFileDescriptor(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_res_AssetFileDescriptor();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual long  getLength() ;
	virtual void  close() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual long  getStartOffset() ;
	virtual AndroidCXX::java_io_FileDescriptor * getFileDescriptor() ;
	virtual AndroidCXX::android_os_ParcelFileDescriptor * getParcelFileDescriptor() ;
	virtual long  getDeclaredLength() ;
	virtual AndroidCXX::java_io_FileInputStream * createInputStream() ;
	virtual AndroidCXX::java_io_FileOutputStream * createOutputStream() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_AssetFileDescriptor