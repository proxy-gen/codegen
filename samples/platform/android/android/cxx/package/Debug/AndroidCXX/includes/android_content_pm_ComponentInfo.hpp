/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	


 		 











// Generated Code 

#ifndef _android_content_pm_ComponentInfo
#define _android_content_pm_ComponentInfo
//
// Scroll Down 
//


#include <android_os_Parcel.hpp>

#include <android_content_pm_PackageManager.hpp>

#include <java_lang_CharSequence.hpp>


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

class android_os_Parcel;

class android_content_pm_PackageManager;

class java_lang_CharSequence;


class android_content_pm_ComponentInfo : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_content_pm_ComponentInfo();
	android_content_pm_ComponentInfo(AndroidCXX::android_content_pm_ComponentInfo const& arg0);
	android_content_pm_ComponentInfo(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_pm_ComponentInfo();
	// Functions
	virtual bool  isEnabled() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_CharSequence * loadLabel(AndroidCXX::android_content_pm_PackageManager const& arg0) ;
	virtual int  getIconResource() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_ComponentInfo