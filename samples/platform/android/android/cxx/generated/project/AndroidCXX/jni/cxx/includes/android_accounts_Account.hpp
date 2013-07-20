/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class android_os_Parcel;

class android_accounts_Account
{
public:
	android_accounts_Account(const android_accounts_Account& cc);
	android_accounts_Account(void * proxy);
	virtual ~android_accounts_Account();
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_accounts_Account