/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
 			
		
		
 			
 			
 			
		
		
		
 			
		
		
		


#ifndef _android_content_ComponentName
#define _android_content_ComponentName

















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

class android_content_ComponentName
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 android_content_ComponentName clone();
 int compareTo(android_content_ComponentName& arg0);
 java_lang_String getClassName();
 java_lang_String getPackageName();
 int describeContents();
static void writeToParcel(android_os_Parcel& arg0,int& arg1,android_content_ComponentName& arg2);
static android_content_ComponentName readFromParcel(android_os_Parcel& arg0);
 java_lang_String toShortString();
 java_lang_String flattenToString();
static android_content_ComponentName unflattenFromString(java_lang_String& arg0);
 java_lang_String getShortClassName();
 java_lang_String flattenToShortString();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ComponentName