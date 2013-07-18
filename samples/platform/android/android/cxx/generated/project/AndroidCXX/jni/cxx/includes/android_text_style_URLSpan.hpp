/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			


#ifndef _android_text_style_URLSpan
#define _android_text_style_URLSpan







#include <android_os_Parcel.hpp>
#include <android_view_View.hpp>
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

class android_text_style_URLSpan
{
public:
 java_lang_String getURL();
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