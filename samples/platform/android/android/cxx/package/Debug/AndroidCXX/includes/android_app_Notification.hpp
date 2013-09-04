/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 
 		 
	
 		 


 		 
 		 













// Generated Code 

#ifndef _android_app_Notification
#define _android_app_Notification
//
// Scroll Down 
//


#include <android_content_Context.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_app_PendingIntent.hpp>

#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>


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


class android_content_Context;

class java_lang_CharSequence;

class android_app_PendingIntent;

class java_lang_String;

class android_os_Parcel;

class android_app_Notification : public AndroidCXX::android_os_Parcelable
{
public:

	// Public Constructor
	android_app_Notification(Proxy * aProxy = new Proxy());
	android_app_Notification(AndroidCXX::android_os_Parcel const& arg0,Proxy * aProxy = new Proxy());
	android_app_Notification(int const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,long const& arg2,Proxy * aProxy = new Proxy());
	android_app_Notification(const android_app_Notification& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_app_Notification();
	// Functions
	virtual AndroidCXX::android_app_Notification * clone() ;
	virtual int  describeContents() ;
	virtual void  setLatestEventInfo(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,AndroidCXX::java_lang_CharSequence const& arg2,AndroidCXX::android_app_PendingIntent const& arg3) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Notification