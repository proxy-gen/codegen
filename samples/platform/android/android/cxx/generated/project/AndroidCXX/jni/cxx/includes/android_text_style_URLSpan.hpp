/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 

// Generated Code 

#ifndef _android_text_style_URLSpan
#define _android_text_style_URLSpan
//
// Scroll Down 
//








#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <android_view_View.hpp>

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

class android_view_View;

class android_text_style_URLSpan
{
public:
	 java_lang_String *  getURL();
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 void onClick(android_view_View& arg0);
	 int getSpanTypeId();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_style_URLSpan