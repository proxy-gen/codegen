/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
		


#ifndef _android_content_pm_Signature
#define _android_content_pm_Signature









#include <android_os_Parcel.hpp>
#include <java_lang_Object.hpp>
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

class android_content_pm_Signature
{
public:
 bool equals(java_lang_Object& arg0);
 int hashCode();
 std::vector<char> toChars(std::vector<char>& arg0,std::vector<int>& arg1);
 std::vector<char> toByteArray();
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
 java_lang_String toCharsString();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_Signature