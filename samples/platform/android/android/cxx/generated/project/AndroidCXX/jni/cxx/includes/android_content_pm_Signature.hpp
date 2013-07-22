/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 	
 	
 	
 	
 	
 		 
	


 	
 		 















// Generated Code 

#ifndef _android_content_pm_Signature
#define _android_content_pm_Signature
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <android_os_Parcel.hpp>

#include <java_lang_String.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_Object;

class android_os_Parcel;

class java_lang_String;

class android_content_pm_Signature
{
public:

	android_content_pm_Signature(const android_content_pm_Signature& cc);
	android_content_pm_Signature(void * proxy);
	// Public Constructors
	android_content_pm_Signature(std::vector<byte>& arg0);
	android_content_pm_Signature(AndroidCXX::java_lang_String& arg0);
	android_content_pm_Signature();
	// Default Destructor
	virtual ~android_content_pm_Signature();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 int hashCode();
	 std::vector<char> toChars();
	 std::vector<char> toChars(std::vector<char>& arg0,std::vector<int>& arg1);
	 std::vector<byte> toByteArray();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	 AndroidCXX::java_lang_String toCharsString();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_Signature