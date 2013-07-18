/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
		
		
		
		


#ifndef _android_content_res_AssetFileDescriptor
#define _android_content_res_AssetFileDescriptor













#include <java_io_FileInputStream.hpp>
#include <java_io_FileOutputStream.hpp>
#include <android_os_ParcelFileDescriptor.hpp>
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

class android_content_res_AssetFileDescriptor
{
public:
 java_lang_String toString();
 long getLength();
 void close();
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
 java_io_FileDescriptor getFileDescriptor();
 long getStartOffset();
 android_os_ParcelFileDescriptor getParcelFileDescriptor();
 long getDeclaredLength();
 java_io_FileInputStream createInputStream();
 java_io_FileOutputStream createOutputStream();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_AssetFileDescriptor