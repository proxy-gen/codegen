/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_util_Printer.hpp>

#include <java_lang_String.hpp>

#include <android_content_pm_PackageManager.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <java_lang_CharSequence.hpp>

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

class android_util_Printer;

class java_lang_String;

class android_content_pm_PackageManager;

class android_graphics_drawable_Drawable;

class java_lang_CharSequence;

class android_os_Parcel;


class android_content_pm_ResolveInfo : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_content_pm_ResolveInfo();
	android_content_pm_ResolveInfo(AndroidCXX::android_content_pm_ResolveInfo const& arg0);
	android_content_pm_ResolveInfo(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_pm_ResolveInfo();
	// Functions
	virtual int  describeContents() ;
	virtual void  dump(AndroidCXX::android_util_Printer const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual int  getIconResource() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * loadIcon(AndroidCXX::android_content_pm_PackageManager const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * loadLabel(AndroidCXX::android_content_pm_PackageManager const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_ResolveInfo