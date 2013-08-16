/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 


 		 
 		 
 		 












// Generated Code 

#ifndef _android_accounts_Account
#define _android_accounts_Account
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

class android_accounts_Account : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_accounts_Account(AndroidCXX::android_os_Parcel const& arg0);
	android_accounts_Account(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	android_accounts_Account(const android_accounts_Account& cc);
	android_accounts_Account(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_accounts_Account();
	// Functions
	virtual int  describeContents() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_accounts_Account