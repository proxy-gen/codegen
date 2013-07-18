/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
 			
 			
 			
 			
		
		
		
 			
 			
 			
		


#ifndef _android_content_IntentSender
#define _android_content_IntentSender














#include <java_lang_Object.hpp>
#include <android_content_Context.hpp>
#include <android_content_Intent.hpp>
#include <android_os_UserHandle.hpp>
#include <android_content_IntentSender_OnFinished.hpp>
#include <android_os_Parcel.hpp>
#include <android_os_Handler.hpp>
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

class android_content_IntentSender
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
 void sendIntent(android_content_Context& arg0,int& arg1,android_content_Intent& arg2,android_content_IntentSender_OnFinished& arg3,android_os_Handler& arg4,java_lang_String& arg5);
 java_lang_String getTargetPackage();
 java_lang_String getCreatorPackage();
 int getCreatorUid();
 android_os_UserHandle getCreatorUserHandle();
static void writeIntentSenderOrNullToParcel(android_content_IntentSender& arg0,android_os_Parcel& arg1);
static android_content_IntentSender readIntentSenderOrNullFromParcel(android_os_Parcel& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_IntentSender