/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		


#ifndef _android_content_pm_PathPermission
#define _android_content_pm_PathPermission





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

class android_content_pm_PathPermission
{
public:
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
 java_lang_String getReadPermission();
 java_lang_String getWritePermission();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_PathPermission