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

#include <android_os_Parcel.hpp>

#include <java_lang_CharSequence.hpp>


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


class android_os_Parcel;

class java_lang_CharSequence;

class android_view_WindowManager_LayoutParams : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_view_WindowManager_LayoutParams(int const& arg0,int const& arg1,int const& arg2);
	android_view_WindowManager_LayoutParams(int const& arg0);
	android_view_WindowManager_LayoutParams(int const& arg0,int const& arg1);
	android_view_WindowManager_LayoutParams();
	android_view_WindowManager_LayoutParams(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4);
	android_view_WindowManager_LayoutParams(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6);
	android_view_WindowManager_LayoutParams(AndroidCXX::android_os_Parcel const& arg0);
	android_view_WindowManager_LayoutParams(const android_view_WindowManager_LayoutParams& cc);
	android_view_WindowManager_LayoutParams(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_WindowManager_LayoutParams();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual AndroidCXX::java_lang_String * debug(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  copyFrom(AndroidCXX::android_view_WindowManager_LayoutParams const& arg0) ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_CharSequence * getTitle() ;
	virtual void  setTitle(AndroidCXX::java_lang_CharSequence const& arg0) ;
	static bool  mayUseInputMethod(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_WindowManager_LayoutParams