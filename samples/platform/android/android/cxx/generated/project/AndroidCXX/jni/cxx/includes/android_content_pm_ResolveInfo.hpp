/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 
 		 
	
 		 
	


 		 














// Generated Code 

#ifndef _android_content_pm_ResolveInfo
#define _android_content_pm_ResolveInfo
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_util_Printer.hpp>

#include <android_os_Parcel.hpp>

#include <android_content_pm_PackageManager.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_graphics_drawable_Drawable.hpp>


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

class java_lang_String;

class android_util_Printer;

class android_os_Parcel;

class android_content_pm_PackageManager;

class java_lang_CharSequence;

class android_graphics_drawable_Drawable;

class android_content_pm_ResolveInfo;

class android_content_pm_ResolveInfo
{
public:

	android_content_pm_ResolveInfo(const android_content_pm_ResolveInfo& cc);
	android_content_pm_ResolveInfo(void * proxy);
	// Public Constructors
	android_content_pm_ResolveInfo();
	android_content_pm_ResolveInfo(AndroidCXX::android_content_pm_ResolveInfo& arg0);
	// Default Destructor
	virtual ~android_content_pm_ResolveInfo();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 void dump(AndroidCXX::android_util_Printer& arg0,AndroidCXX::java_lang_String& arg1);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	 AndroidCXX::java_lang_CharSequence loadLabel(AndroidCXX::android_content_pm_PackageManager& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable loadIcon(AndroidCXX::android_content_pm_PackageManager& arg0);
	 int getIconResource();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_ResolveInfo