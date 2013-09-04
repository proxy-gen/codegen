/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
	
 		 
	
 		 


 		 




















// Generated Code 

#ifndef _android_view_WindowManager_LayoutParams
#define _android_view_WindowManager_LayoutParams
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

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


class java_lang_String;

class java_lang_CharSequence;

class android_os_Parcel;

class android_view_WindowManager_LayoutParams : public AndroidCXX::android_os_Parcelable
{
public:

	// Public Constructor
	android_view_WindowManager_LayoutParams(Proxy * aProxy = new Proxy());
	android_view_WindowManager_LayoutParams(AndroidCXX::android_os_Parcel const& arg0,Proxy * aProxy = new Proxy());
	android_view_WindowManager_LayoutParams(int const& arg0,Proxy * aProxy = new Proxy());
	android_view_WindowManager_LayoutParams(int const& arg0,int const& arg1,Proxy * aProxy = new Proxy());
	android_view_WindowManager_LayoutParams(int const& arg0,int const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	android_view_WindowManager_LayoutParams(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,Proxy * aProxy = new Proxy());
	android_view_WindowManager_LayoutParams(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6,Proxy * aProxy = new Proxy());
	android_view_WindowManager_LayoutParams(const android_view_WindowManager_LayoutParams& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_WindowManager_LayoutParams();
	// Functions
	virtual int  copyFrom(AndroidCXX::android_view_WindowManager_LayoutParams const& arg0) ;
	virtual AndroidCXX::java_lang_String * debug(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  describeContents() ;
	virtual AndroidCXX::java_lang_CharSequence * getTitle() ;
	static bool  mayUseInputMethod(int const& arg0) ;
	virtual void  setTitle(AndroidCXX::java_lang_CharSequence const& arg0) ;
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

#endif // _android_view_WindowManager_LayoutParams