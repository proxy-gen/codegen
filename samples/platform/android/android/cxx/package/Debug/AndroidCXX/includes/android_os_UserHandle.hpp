/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
 		 
	


 		 













// Generated Code 

#ifndef _android_os_UserHandle
#define _android_os_UserHandle
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

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

class java_lang_Object;

class java_lang_String;

class android_os_Parcel;


class android_os_UserHandle : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_os_UserHandle(AndroidCXX::android_os_Parcel const& arg0);
	android_os_UserHandle(const android_os_UserHandle& cc);
	android_os_UserHandle(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_UserHandle();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	static void  writeToParcel(AndroidCXX::android_os_UserHandle const& arg0,AndroidCXX::android_os_Parcel const& arg1) ;
	static AndroidCXX::android_os_UserHandle * readFromParcel(AndroidCXX::android_os_Parcel const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_UserHandle