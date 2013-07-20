/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class java_lang_String;

class android_os_Parcel;

class java_io_FileDescriptor;

class android_os_ParcelFileDescriptor;

class java_io_FileInputStream;

class java_io_FileOutputStream;

class android_content_res_AssetFileDescriptor
{
public:
	android_content_res_AssetFileDescriptor(const android_content_res_AssetFileDescriptor& cc);
	android_content_res_AssetFileDescriptor(void * proxy);
	virtual ~android_content_res_AssetFileDescriptor();
	 java_lang_String *  toString();
	 long getLength();
	 void close();
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 java_io_FileDescriptor *  getFileDescriptor();
	 long getStartOffset();
	 android_os_ParcelFileDescriptor *  getParcelFileDescriptor();
	 long getDeclaredLength();
	 java_io_FileInputStream *  createInputStream();
	 java_io_FileOutputStream *  createOutputStream();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_AssetFileDescriptor