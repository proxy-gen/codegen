/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	


 		 
 		 
 		 
 		 










// Generated Code 

#ifndef _android_content_pm_PathPermission
#define _android_content_pm_PathPermission
//
// Scroll Down 
//


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

// Forward Declarations

class android_os_Parcel;

class java_lang_String;

class android_content_pm_PathPermission
{
public:

	android_content_pm_PathPermission(const android_content_pm_PathPermission& cc);
	android_content_pm_PathPermission(void * proxy);
	// Public Constructors
	android_content_pm_PathPermission(AndroidCXX::java_lang_String& arg0,int& arg1,AndroidCXX::java_lang_String& arg2,AndroidCXX::java_lang_String& arg3);
	android_content_pm_PathPermission(AndroidCXX::android_os_Parcel& arg0);
	// TODO: remove
	// 
	// android_content_pm_PathPermission();
	// 
	// Default Destructor
	virtual ~android_content_pm_PathPermission();
	// Functions
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	 AndroidCXX::java_lang_String getReadPermission();
	 AndroidCXX::java_lang_String getWritePermission();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_PathPermission