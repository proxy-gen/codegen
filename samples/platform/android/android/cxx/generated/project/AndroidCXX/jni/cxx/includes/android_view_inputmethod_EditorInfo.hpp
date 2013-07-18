/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			


#ifndef _android_view_inputmethod_EditorInfo
#define _android_view_inputmethod_EditorInfo






#include <android_os_Parcel.hpp>
#include <java_lang_String.hpp>
#include <android_util_Printer.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_inputmethod_EditorInfo
{
public:
 void dump(android_util_Printer& arg0,java_lang_String& arg1);
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
 void makeCompatible(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_inputmethod_EditorInfo