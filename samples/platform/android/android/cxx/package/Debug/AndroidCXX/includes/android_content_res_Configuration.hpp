/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 
























// Generated Code 

#ifndef _android_content_res_Configuration
#define _android_content_res_Configuration
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_util_Locale.hpp>

#include <android_os_Parcel.hpp>


#include <android_os_Parcelable.hpp>

#include <java_lang_Comparable.hpp>

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

class java_util_Locale;

class android_os_Parcel;

class android_content_res_Configuration : public android_os_Parcelable,public java_lang_Comparable
{
public:

	// Public ConstrucXXX
	android_content_res_Configuration();
	android_content_res_Configuration(AndroidCXX::android_content_res_Configuration const& arg0);
	android_content_res_Configuration(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_res_Configuration();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  equals(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual int  compareTo(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual void  setLocale(AndroidCXX::java_util_Locale const& arg0) ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual void  setLayoutDirection(AndroidCXX::java_util_Locale const& arg0) ;
	virtual int  getLayoutDirection() ;
	virtual int  diff(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual void  readFromParcel(AndroidCXX::android_os_Parcel const& arg0) ;
	virtual bool  isLayoutSizeAtLeast(int const& arg0) ;
	virtual void  setTo(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual void  setToDefaults() ;
	virtual int  updateFrom(AndroidCXX::android_content_res_Configuration const& arg0) ;
	static bool  needNewResources(int const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_Configuration