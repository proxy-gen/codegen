/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 	
 		 
 		 
 	
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 	
 		 
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
	
 	
 		 
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 
	
	
 	
 		 
	
 	
 		 
 		 
	
 		 
	
 		 
	
	
 		 
	
 		 
 	
 		 
	
 	
 		 
 	
	
 	
 		 
 		 
 		 
	
 		 
	
 		 
 	
 		 
 	
 		 
 		 
 		 
	
 	
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 	
 		 
 	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 	
 		 
 		 
	
 	
 		 
 		 
	
 	
 		 
 		 
	
 	
 		 
 		 
 	
 		 
	
 	
 		 
 		 
 		 
	
 	
 		 
 		 
	
 	
 		 
 		 
 		 
 		 
	
 		 
	
 		 
	
 		 
 		 
 		 
 		 














































































// Generated Code 

#ifndef _android_content_pm_PackageManager
#define _android_content_pm_PackageManager
//
// Scroll Down 
//



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

class android_content_pm_PermissionInfo;

class android_content_IntentFilter;

class android_content_ComponentName;

class android_content_Intent;

class android_graphics_drawable_Drawable;

class android_content_pm_ActivityInfo;

class java_util_List;

class android_content_pm_PermissionGroupInfo;

class android_content_pm_ApplicationInfo;

class java_lang_CharSequence;

class android_content_pm_PackageInfo;

class android_content_pm_InstrumentationInfo;

class android_content_pm_ProviderInfo;

class android_content_res_Resources;

class android_content_pm_ServiceInfo;

class android_content_pm_FeatureInfo;

class android_content_res_XmlResourceParser;

class android_content_pm_ResolveInfo;

class android_content_pm_PackageManager 
{
public:

	android_content_pm_PackageManager(const android_content_pm_PackageManager& cc);
	android_content_pm_PackageManager(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_pm_PackageManager();
	// Functions
	virtual void  addPackageToPreferred(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  addPermission(AndroidCXX::android_content_pm_PermissionInfo const& arg0) ;
	virtual bool  addPermissionAsync(AndroidCXX::android_content_pm_PermissionInfo const& arg0) ;
	virtual void  addPreferredActivity(AndroidCXX::android_content_IntentFilter const& arg0,int const& arg1,std::vector<android_content_ComponentName> const& arg2,AndroidCXX::android_content_ComponentName const& arg3) ;
	virtual std::vector<java_lang_String>  canonicalToCurrentPackageNames(std::vector<java_lang_String> const& arg0) ;
	virtual int  checkPermission(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual int  checkSignatures(int const& arg0,int const& arg1) ;
	virtual int  checkSignatures(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  clearPackagePreferredActivities(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<java_lang_String>  currentToCanonicalPackageNames(std::vector<java_lang_String> const& arg0) ;
	virtual void  extendVerificationTimeout(int const& arg0,int const& arg1,long const& arg2) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getActivityIcon(AndroidCXX::android_content_Intent const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getActivityIcon(AndroidCXX::android_content_ComponentName const& arg0) ;
	virtual AndroidCXX::android_content_pm_ActivityInfo * getActivityInfo(AndroidCXX::android_content_ComponentName const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getActivityLogo(AndroidCXX::android_content_Intent const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getActivityLogo(AndroidCXX::android_content_ComponentName const& arg0) ;
	virtual AndroidCXX::java_util_List * getAllPermissionGroups(int const& arg0) ;
	virtual int  getApplicationEnabledSetting(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getApplicationIcon(AndroidCXX::android_content_pm_ApplicationInfo const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getApplicationIcon(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_pm_ApplicationInfo * getApplicationInfo(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_CharSequence * getApplicationLabel(AndroidCXX::android_content_pm_ApplicationInfo const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getApplicationLogo(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getApplicationLogo(AndroidCXX::android_content_pm_ApplicationInfo const& arg0) ;
	virtual int  getComponentEnabledSetting(AndroidCXX::android_content_ComponentName const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getDefaultActivityIcon() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getDrawable(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::android_content_pm_ApplicationInfo const& arg2) ;
	virtual AndroidCXX::java_util_List * getInstalledApplications(int const& arg0) ;
	virtual AndroidCXX::java_util_List * getInstalledPackages(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getInstallerPackageName(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_pm_InstrumentationInfo * getInstrumentationInfo(AndroidCXX::android_content_ComponentName const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_Intent * getLaunchIntentForPackage(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getNameForUid(int const& arg0) ;
	virtual AndroidCXX::android_content_pm_PackageInfo * getPackageArchiveInfo(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual std::vector<int>  getPackageGids(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_pm_PackageInfo * getPackageInfo(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual std::vector<java_lang_String>  getPackagesForUid(int const& arg0) ;
	virtual AndroidCXX::java_util_List * getPackagesHoldingPermissions(std::vector<java_lang_String> const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_pm_PermissionGroupInfo * getPermissionGroupInfo(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_pm_PermissionInfo * getPermissionInfo(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual int  getPreferredActivities(AndroidCXX::java_util_List const& arg0,AndroidCXX::java_util_List const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual AndroidCXX::java_util_List * getPreferredPackages(int const& arg0) ;
	virtual AndroidCXX::android_content_pm_ProviderInfo * getProviderInfo(AndroidCXX::android_content_ComponentName const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_pm_ActivityInfo * getReceiverInfo(AndroidCXX::android_content_ComponentName const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_res_Resources * getResourcesForActivity(AndroidCXX::android_content_ComponentName const& arg0) ;
	virtual AndroidCXX::android_content_res_Resources * getResourcesForApplication(AndroidCXX::android_content_pm_ApplicationInfo const& arg0) ;
	virtual AndroidCXX::android_content_res_Resources * getResourcesForApplication(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_pm_ServiceInfo * getServiceInfo(AndroidCXX::android_content_ComponentName const& arg0,int const& arg1) ;
	virtual std::vector<android_content_pm_FeatureInfo>  getSystemAvailableFeatures() ;
	virtual std::vector<java_lang_String>  getSystemSharedLibraryNames() ;
	virtual AndroidCXX::java_lang_CharSequence * getText(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::android_content_pm_ApplicationInfo const& arg2) ;
	virtual AndroidCXX::android_content_res_XmlResourceParser * getXml(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::android_content_pm_ApplicationInfo const& arg2) ;
	virtual bool  hasSystemFeature(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  isSafeMode() ;
	virtual AndroidCXX::java_util_List * queryBroadcastReceivers(AndroidCXX::android_content_Intent const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_util_List * queryContentProviders(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_util_List * queryInstrumentation(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_util_List * queryIntentActivities(AndroidCXX::android_content_Intent const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_util_List * queryIntentActivityOptions(AndroidCXX::android_content_ComponentName const& arg0,std::vector<android_content_Intent> const& arg1,AndroidCXX::android_content_Intent const& arg2,int const& arg3) ;
	virtual AndroidCXX::java_util_List * queryIntentServices(AndroidCXX::android_content_Intent const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_util_List * queryPermissionsByGroup(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual void  removePackageFromPreferred(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  removePermission(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_pm_ResolveInfo * resolveActivity(AndroidCXX::android_content_Intent const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_pm_ProviderInfo * resolveContentProvider(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_pm_ResolveInfo * resolveService(AndroidCXX::android_content_Intent const& arg0,int const& arg1) ;
	virtual void  setApplicationEnabledSetting(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2) ;
	virtual void  setComponentEnabledSetting(AndroidCXX::android_content_ComponentName const& arg0,int const& arg1,int const& arg2) ;
	virtual void  setInstallerPackageName(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  verifyPendingInstall(int const& arg0,int const& arg1) ;

protected:
	android_content_pm_PackageManager();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_PackageManager