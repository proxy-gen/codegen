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

#include <android_os_Parcel.hpp>

#include <java_util_Locale.hpp>

#include <java_lang_String.hpp>


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

class android_os_Parcel;

class java_util_Locale;

class java_lang_String;

class android_content_res_Configuration : public AndroidCXX::android_os_Parcelable,public AndroidCXX::java_lang_Comparable
{
public:

	// Public Constructor
	android_content_res_Configuration(Proxy * aProxy = new Proxy());
	android_content_res_Configuration(AndroidCXX::android_content_res_Configuration const& arg0,Proxy * aProxy = new Proxy());
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_res_Configuration();
	// Functions
	virtual int  compareTo(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual int  describeContents() ;
	virtual int  diff(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual bool  equals(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  getLayoutDirection() ;
	virtual int  hashCode() ;
	virtual bool  isLayoutSizeAtLeast(int const& arg0) ;
	static bool  needNewResources(int const& arg0,int const& arg1) ;
	virtual void  readFromParcel(AndroidCXX::android_os_Parcel const& arg0) ;
	virtual void  setLayoutDirection(AndroidCXX::java_util_Locale const& arg0) ;
	virtual void  setLocale(AndroidCXX::java_util_Locale const& arg0) ;
	virtual void  setToDefaults() ;
	virtual void  setTo(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  updateFrom(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_Configuration