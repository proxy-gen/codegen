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


#include <android_content_pm_PackageManager.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_os_Parcel.hpp>


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

class java_lang_CharSequence;

class android_os_Parcel;


class android_content_pm_ComponentInfo 
{
public:

	// Public Constructor
	android_content_pm_ComponentInfo(Proxy * aProxy = new Proxy());
	android_content_pm_ComponentInfo(AndroidCXX::android_content_pm_ComponentInfo const& arg0,Proxy * aProxy = new Proxy());
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_pm_ComponentInfo();
	// Functions
	virtual int  getIconResource() ;
	virtual bool  isEnabled() ;
	virtual AndroidCXX::java_lang_CharSequence * loadLabel(AndroidCXX::android_content_pm_PackageManager const& arg0) ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_ComponentInfo