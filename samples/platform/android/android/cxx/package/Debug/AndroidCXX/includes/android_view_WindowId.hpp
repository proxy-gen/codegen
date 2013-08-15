/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 















// Generated Code 

#ifndef _android_view_WindowId
#define _android_view_WindowId
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <android_view_WindowId_FocusObserver.hpp>


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

class java_lang_String;

class android_os_Parcel;

class android_view_WindowId_FocusObserver;

class android_view_WindowId : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_view_WindowId(const android_view_WindowId& cc);
	android_view_WindowId(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_WindowId();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual bool  isFocused() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual void  registerFocusObserver(AndroidCXX::android_view_WindowId_FocusObserver const& arg0) ;
	virtual void  unregisterFocusObserver(AndroidCXX::android_view_WindowId_FocusObserver const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_WindowId