/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
		
 			
 			
		

// Generated Code 

#ifndef _android_content_ClipDescription
#define _android_content_ClipDescription
//
// Scroll Down 
//












#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <java_lang_CharSequence.hpp>

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

class java_lang_CharSequence;

class android_content_ClipDescription
{
public:
 java_lang_String toString();
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
static bool compareMimeTypes(java_lang_String& arg0);
 java_lang_CharSequence getLabel();
 bool hasMimeType(java_lang_String& arg0);
 std::vector<long> filterMimeTypes(java_lang_String& arg0);
 int getMimeTypeCount();
 java_lang_String getMimeType(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ClipDescription