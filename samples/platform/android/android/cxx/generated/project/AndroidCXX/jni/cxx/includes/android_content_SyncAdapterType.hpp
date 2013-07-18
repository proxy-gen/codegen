/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		
 			
		


#ifndef _android_content_SyncAdapterType
#define _android_content_SyncAdapterType













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

class android_content_SyncAdapterType
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
 bool supportsUploading();
 bool isUserVisible();
 bool allowParallelSyncs();
 bool isAlwaysSyncable();
 java_lang_String getSettingsActivity();
static android_content_SyncAdapterType newKey(java_lang_String& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_SyncAdapterType