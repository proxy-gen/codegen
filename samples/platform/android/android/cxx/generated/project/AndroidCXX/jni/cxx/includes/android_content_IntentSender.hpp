/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
	
	
 		 
 		 
 		 
	




















// Generated Code 

#ifndef _android_content_IntentSender
#define _android_content_IntentSender
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <android_content_Context.hpp>

#include <android_content_Intent.hpp>

#include <android_content_IntentSender_OnFinished.hpp>

#include <android_os_Handler.hpp>

#include <android_os_UserHandle.hpp>


#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class android_os_Parcel;

class android_content_Context;

class android_content_Intent;

class android_content_IntentSender_OnFinished;

class android_os_Handler;

class android_os_UserHandle;

class android_content_IntentSender;

class android_content_IntentSender
{
public:

	android_content_IntentSender(const android_content_IntentSender& cc);
	android_content_IntentSender(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_IntentSender();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 void sendIntent(AndroidCXX::android_content_Context const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2,AndroidCXX::android_content_IntentSender_OnFinished const& arg3,AndroidCXX::android_os_Handler const& arg4);
	 void sendIntent(AndroidCXX::android_content_Context const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2,AndroidCXX::android_content_IntentSender_OnFinished const& arg3,AndroidCXX::android_os_Handler const& arg4,AndroidCXX::java_lang_String const& arg5);
	 AndroidCXX::java_lang_String getTargetPackage();
	 AndroidCXX::java_lang_String getCreatorPackage();
	 int getCreatorUid();
	 AndroidCXX::android_os_UserHandle getCreatorUserHandle();
	static void writeIntentSenderOrNullToParcel(AndroidCXX::android_content_IntentSender const& arg0,AndroidCXX::android_os_Parcel const& arg1);
	static AndroidCXX::android_content_IntentSender readIntentSenderOrNullFromParcel(AndroidCXX::android_os_Parcel const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_IntentSender