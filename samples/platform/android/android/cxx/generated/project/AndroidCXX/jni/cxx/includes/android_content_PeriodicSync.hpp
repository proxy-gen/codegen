/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 


 		 
 		 
 		 









// Generated Code 

#ifndef _android_content_PeriodicSync
#define _android_content_PeriodicSync
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <android_os_Parcel.hpp>

#include <android_accounts_Account.hpp>

#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>

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

class android_accounts_Account;

class java_lang_String;

class android_os_Bundle;

class android_content_PeriodicSync
{
public:

	android_content_PeriodicSync(const android_content_PeriodicSync& cc);
	android_content_PeriodicSync(Proxy proxy);
	// Public Constructors
	android_content_PeriodicSync(AndroidCXX::android_accounts_Account const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2,long const& arg3);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_PeriodicSync();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_PeriodicSync