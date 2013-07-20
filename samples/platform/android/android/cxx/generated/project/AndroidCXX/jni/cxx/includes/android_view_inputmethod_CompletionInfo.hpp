/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
	
	

// Generated Code 

#ifndef _android_view_inputmethod_CompletionInfo
#define _android_view_inputmethod_CompletionInfo
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

class android_view_inputmethod_CompletionInfo
{
public:
	 java_lang_String *  toString();
	 long getId();
	 int getPosition();
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 java_lang_CharSequence *  getText();
	 java_lang_CharSequence *  getLabel();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_inputmethod_CompletionInfo