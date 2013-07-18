/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
 			
 			


#ifndef _android_os_PatternMatcher
#define _android_os_PatternMatcher








#include <android_os_Parcel.hpp>
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

class android_os_PatternMatcher
{
public:
 java_lang_String toString();
 int getType();
 java_lang_String getPath();
 bool match(java_lang_String& arg0);
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_PatternMatcher