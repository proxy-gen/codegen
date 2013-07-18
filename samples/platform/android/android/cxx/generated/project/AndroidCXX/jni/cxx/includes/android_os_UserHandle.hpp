/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
 			
		


#ifndef _android_os_UserHandle
#define _android_os_UserHandle








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

class android_os_UserHandle
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 int describeContents();
static void writeToParcel(android_os_Parcel& arg0,int& arg1,android_os_UserHandle& arg2);
static android_os_UserHandle readFromParcel(android_os_Parcel& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_UserHandle