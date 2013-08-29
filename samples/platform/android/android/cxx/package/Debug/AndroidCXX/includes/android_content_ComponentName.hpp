/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
	
	
	
	
	
 		 
	
	
	
 		 
	
 		 
 		 
 		 


 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 

























// Generated Code 

#ifndef _android_content_ComponentName
#define _android_content_ComponentName
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <android_content_Context.hpp>

#include <java_lang_Class.hpp>


#include <android_os_Parcelable.hpp>

#include <java_lang_Cloneable.hpp>

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

class android_os_Parcel;

class android_content_Context;

class java_lang_Class;

class android_content_ComponentName : public AndroidCXX::android_os_Parcelable,public AndroidCXX::java_lang_Cloneable,public AndroidCXX::java_lang_Comparable
{
public:

	// Public Constructor
	android_content_ComponentName(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_Class const& arg1,Proxy * aProxy = new Proxy());
	android_content_ComponentName(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,Proxy * aProxy = new Proxy());
	android_content_ComponentName(AndroidCXX::android_os_Parcel const& arg0,Proxy * aProxy = new Proxy());
	android_content_ComponentName(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,Proxy * aProxy = new Proxy());
	android_content_ComponentName(const android_content_ComponentName& cc);
	android_content_ComponentName(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_ComponentName();
	// Functions
	virtual AndroidCXX::android_content_ComponentName * clone() ;
	virtual int  compareTo(AndroidCXX::android_content_ComponentName const& arg0) ;
	virtual int  describeContents() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * flattenToShortString() ;
	virtual AndroidCXX::java_lang_String * flattenToString() ;
	virtual AndroidCXX::java_lang_String * getClassName() ;
	virtual AndroidCXX::java_lang_String * getPackageName() ;
	virtual AndroidCXX::java_lang_String * getShortClassName() ;
	virtual int  hashCode() ;
	static AndroidCXX::android_content_ComponentName * readFromParcel(AndroidCXX::android_os_Parcel const& arg0) ;
	virtual AndroidCXX::java_lang_String * toShortString() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::android_content_ComponentName * unflattenFromString(AndroidCXX::java_lang_String const& arg0) ;
	static void  writeToParcel(AndroidCXX::android_content_ComponentName const& arg0,AndroidCXX::android_os_Parcel const& arg1) ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ComponentName