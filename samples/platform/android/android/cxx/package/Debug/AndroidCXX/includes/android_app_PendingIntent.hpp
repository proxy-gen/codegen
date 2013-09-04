/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 	
 		 
	
 		 
 		 
 	
	
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
	
	
	
 		 
 		 
	
	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
































// Generated Code 

#ifndef _android_app_PendingIntent
#define _android_app_PendingIntent
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <android_content_Context.hpp>

#include <android_os_Bundle.hpp>

#include <android_content_Intent.hpp>

#include <java_lang_String.hpp>

#include <android_os_UserHandle.hpp>

#include <android_content_IntentSender.hpp>

#include <android_os_Parcel.hpp>

#include <android_app_PendingIntent_OnFinished.hpp>

#include <android_os_Handler.hpp>


#include <android_os_Parcelable.hpp>

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

class android_content_Context;

class android_os_Bundle;


class android_content_Intent;

class java_lang_String;

class android_os_UserHandle;

class android_content_IntentSender;

class android_os_Parcel;

class android_app_PendingIntent_OnFinished;

class android_os_Handler;

class android_app_PendingIntent : public AndroidCXX::android_os_Parcelable
{
public:

	// Public Constructor
	android_app_PendingIntent(const android_app_PendingIntent& cc);
	android_app_PendingIntent(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_app_PendingIntent();
	// Functions
	virtual void  cancel() ;
	virtual int  describeContents() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	static AndroidCXX::android_app_PendingIntent * getActivities(AndroidCXX::android_content_Context const& arg0,int const& arg1,std::vector<AndroidCXX::android_content_Intent> const& arg2,int const& arg3,AndroidCXX::android_os_Bundle const& arg4) ;
	static AndroidCXX::android_app_PendingIntent * getActivities(AndroidCXX::android_content_Context const& arg0,int const& arg1,std::vector<AndroidCXX::android_content_Intent> const& arg2,int const& arg3) ;
	static AndroidCXX::android_app_PendingIntent * getActivity(AndroidCXX::android_content_Context const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2,int const& arg3,AndroidCXX::android_os_Bundle const& arg4) ;
	static AndroidCXX::android_app_PendingIntent * getActivity(AndroidCXX::android_content_Context const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2,int const& arg3) ;
	static AndroidCXX::android_app_PendingIntent * getBroadcast(AndroidCXX::android_content_Context const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2,int const& arg3) ;
	virtual AndroidCXX::java_lang_String * getCreatorPackage() ;
	virtual int  getCreatorUid() ;
	virtual AndroidCXX::android_os_UserHandle * getCreatorUserHandle() ;
	virtual AndroidCXX::android_content_IntentSender * getIntentSender() ;
	static AndroidCXX::android_app_PendingIntent * getService(AndroidCXX::android_content_Context const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2,int const& arg3) ;
	virtual AndroidCXX::java_lang_String * getTargetPackage() ;
	virtual int  hashCode() ;
	static AndroidCXX::android_app_PendingIntent * readPendingIntentOrNullFromParcel(AndroidCXX::android_os_Parcel const& arg0) ;
	virtual void  send(AndroidCXX::android_content_Context const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2,AndroidCXX::android_app_PendingIntent_OnFinished const& arg3,AndroidCXX::android_os_Handler const& arg4,AndroidCXX::java_lang_String const& arg5) ;
	virtual void  send(AndroidCXX::android_content_Context const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2,AndroidCXX::android_app_PendingIntent_OnFinished const& arg3,AndroidCXX::android_os_Handler const& arg4) ;
	virtual void  send(AndroidCXX::android_content_Context const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2) ;
	virtual void  send(int const& arg0,AndroidCXX::android_app_PendingIntent_OnFinished const& arg1,AndroidCXX::android_os_Handler const& arg2) ;
	virtual void  send(int const& arg0) ;
	virtual void  send() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static void  writePendingIntentOrNullToParcel(AndroidCXX::android_app_PendingIntent const& arg0,AndroidCXX::android_os_Parcel const& arg1) ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_PendingIntent