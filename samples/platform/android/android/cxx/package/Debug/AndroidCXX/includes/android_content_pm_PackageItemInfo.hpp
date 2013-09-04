/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
	
 		 
	
 		 
 		 
	
 		 


 		 












// Generated Code 

#ifndef _android_content_pm_PackageItemInfo
#define _android_content_pm_PackageItemInfo
//
// Scroll Down 
//


#include <android_content_pm_PackageManager.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <java_lang_CharSequence.hpp>

#include <java_lang_String.hpp>

#include <android_content_res_XmlResourceParser.hpp>

#include <android_os_Parcel.hpp>


#include <java_lang_Object.hpp>

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

class android_content_pm_PackageManager;

class android_graphics_drawable_Drawable;

class java_lang_CharSequence;

class java_lang_String;

class android_content_res_XmlResourceParser;

class android_os_Parcel;


class android_content_pm_PackageItemInfo : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_content_pm_PackageItemInfo(Proxy * aProxy = new Proxy());
	android_content_pm_PackageItemInfo(AndroidCXX::android_content_pm_PackageItemInfo const& arg0,Proxy * aProxy = new Proxy());
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_pm_PackageItemInfo();
	// Functions
	virtual AndroidCXX::android_graphics_drawable_Drawable * loadIcon(AndroidCXX::android_content_pm_PackageManager const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * loadLabel(AndroidCXX::android_content_pm_PackageManager const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * loadLogo(AndroidCXX::android_content_pm_PackageManager const& arg0) ;
	virtual AndroidCXX::android_content_res_XmlResourceParser * loadXmlMetaData(AndroidCXX::android_content_pm_PackageManager const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_PackageItemInfo