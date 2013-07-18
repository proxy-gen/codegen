/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
		
 			
 			
 			
		


#ifndef _android_view_WindowManager_LayoutParams
#define _android_view_WindowManager_LayoutParams










#include <android_os_Parcel.hpp>
#include <java_lang_CharSequence.hpp>
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

class android_view_WindowManager_LayoutParams
{
public:
 java_lang_String toString();
 java_lang_String debug(java_lang_String& arg0);
 int copyFrom(android_view_WindowManager_LayoutParams& arg0);
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
 void setTitle(java_lang_CharSequence& arg0);
 java_lang_CharSequence getTitle();
static bool mayUseInputMethod(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_WindowManager_LayoutParams